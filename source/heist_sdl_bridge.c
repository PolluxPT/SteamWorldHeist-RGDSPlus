/* SPDX-License-Identifier: MIT; port code, see ../LICENSE.
 * SDL-related declarations/data remain under SDL zlib terms; ../licenses/sdl2.txt. */
/* Original Heist SDL bridge v2.5. SDL ABI headers retain their zlib license. */
extern void *dlopen(const char *, int);
extern void *dlsym(void *, const char *);
extern int fprintf(void *, const char *, ...);
extern void *stderr;
extern int unsetenv(const char *);
extern void _exit(int) __attribute__((noreturn));
#define SDL_DYNAPI_PROC(ret,name,args,call,result) #name,
static const char *names[] = {
#include "SDL_dynapi_linux.h"
};
#undef SDL_DYNAPI_PROC
#include "heist_dispatch.h"

typedef struct { unsigned char data[16]; } Guid;
static int (*num_joysticks)(void);
static void *(*joystick_open)(int);
static void (*joystick_close)(void *);
static char *(*mapping_for_device)(int);
static void (*sdl_free)(void *);
static Guid (*device_guid)(int);
static int nibble(char c) {
    if (c >= '0' && c <= '9') return c-'0';
    if (c >= 'a' && c <= 'f') return c-'a'+10;
    if (c >= 'A' && c <= 'F') return c-'A'+10;
    return -1;
}
/* SDL_JoystickGetGUID lacks an i386 wrapper in the supplied Box32 runtime.
   Match the existing native joystick by opening a temporary reference;
   obtain its GUID using the device-index API, or its native mapping string.
   GCC i386 generates the required hidden result pointer and ret $4 ABI. */
static Guid joystick_guid(void *joystick) {
    Guid guid = {{0}};
    int i, j, count = num_joysticks();
    for (i=0; i<count; ++i) {
        void *candidate = joystick_open(i);
        int match = candidate && candidate == joystick;
        if (candidate) joystick_close(candidate);
        if (!match) continue;
        if (device_guid) return device_guid(i);
        if (mapping_for_device) {
            char *mapping = mapping_for_device(i);
            if (mapping) {
                for (j=0;j<16;++j) {
                    int hi = nibble(mapping[j*2]);
                    int lo = hi < 0 ? -1 : nibble(mapping[j*2+1]);
                    if (lo < 0) break;
                    guid.data[j]=(unsigned char)(hi*16+lo);
                }
                sdl_free(mapping);
                if (j==16) return guid;
            }
        }
        break;
    }
    fprintf(stderr,"HEIST_BRIDGE: could not obtain native joystick GUID\n");
    _exit(78);
}

static int (*native_init)(unsigned int);
static const char *(*native_error)(void);
static const char *(*native_driver)(void);
static void *(*native_window)(const char *,int,int,int,int,unsigned int);
static void *(*native_context)(void *);
static void (*native_swap)(void *);
static void (*renderer_flush)(void);
static const unsigned char *(*renderer_string)(unsigned int);
static unsigned int (*renderer_error)(void);
static void traced_swap(void *window) {
    static unsigned int frames;
    if(!frames) {
        void *gl=dlopen("libGL.so.1",2);
        if(gl) {
            renderer_flush=dlsym(gl,"glFlush");
            renderer_string=dlsym(gl,"glGetString");
            renderer_error=dlsym(gl,"glGetError");
        }
        fprintf(stderr,"HEIST_RENDER: GL4ES flush %s\n",renderer_flush?"available":"missing");
    }
    if(renderer_flush)renderer_flush();
    native_swap(window);
    ++frames;
    if(frames==1) {
        const unsigned char *version=renderer_string?renderer_string(0x1f02):0;
        const unsigned char *renderer=renderer_string?renderer_string(0x1f01):0;
        fprintf(stderr,"HEIST_RENDER: GL_VERSION=%s GL_RENDERER=%s\n",
                version?(const char *)version:"unavailable",renderer?(const char *)renderer:"unavailable");
    }
    if(frames<=3 || frames==120 || frames==600)
        fprintf(stderr,"HEIST_RENDER: presented frame %u GL_error=0x%x\n",frames,renderer_error?renderer_error():0);
}
static int traced_init(unsigned int flags) {
    int rc=native_init(flags);
    const char *driver=native_driver?native_driver():0;
    fprintf(stderr,"HEIST_VIDEO: SDL_Init flags=0x%x result=%d driver=%s error=%s\n",
            flags,rc,driver?driver:"none",rc && native_error?native_error():"");
    return rc;
}
static void *traced_window(const char *title,int x,int y,int w,int h,unsigned int flags) {
    void *window=native_window(title,x,y,w,h,flags);
    fprintf(stderr,"HEIST_VIDEO: CreateWindow %dx%d flags=0x%x result=%p error=%s\n",
            w,h,flags,window,!window && native_error?native_error():"");
    return window;
}
static void *traced_context(void *window) {
    void *context=native_context(window);
    fprintf(stderr,"HEIST_VIDEO: GL_CreateContext result=%p error=%s\n",
            context,!context && native_error?native_error():"");
    return context;
}

int SDL_DYNAPI_entry(unsigned int version, void *table, unsigned int size) {
    void *resolved[547], *handle;
    unsigned int i, native=0, utility=0, blocked=0, essential_missing=0;
    if (version != 1 || size != sizeof(void *) * 547) return -1;
    /* The i386 caller has already located this bridge. Native ARM SDL must
       not try to load the same i386 .so as its own SDL_DYNAMIC_API override. */
    if (unsetenv("SDL_DYNAMIC_API") != 0) {
        fprintf(stderr,"HEIST_BRIDGE: cannot clear native SDL override\n");
        _exit(78);
    }
    fprintf(stderr,"HEIST_BRIDGE: cleared SDL_DYNAMIC_API before native SDL load\n");
    handle = dlopen("libSDL2-2.0.so.0", 2);
    if (!handle) { fprintf(stderr,"HEIST_BRIDGE: native SDL load failed\n"); _exit(78); }
    num_joysticks=dlsym(handle,"SDL_NumJoysticks");
    joystick_open=dlsym(handle,"SDL_JoystickOpen");
    joystick_close=dlsym(handle,"SDL_JoystickClose");
    mapping_for_device=dlsym(handle,"SDL_GameControllerMappingForDeviceIndex");
    sdl_free=dlsym(handle,"SDL_free");
    device_guid=dlsym(handle,"SDL_JoystickGetDeviceGUID");
    for (i=0; i<547; ++i) {
        resolved[i] = dlsym(handle,names[i]);
        if (resolved[i]) { ++native; continue; }
        if (i==159) { /* Verified SDL_JoystickGetGUID ABI index. */
            if (num_joysticks && joystick_open && joystick_close &&
                (device_guid || (mapping_for_device && sdl_free))) {
                resolved[i]=(void *)joystick_guid;
                fprintf(stderr,"HEIST_BRIDGE: SDL_JoystickGetGUID uses device adapter\n");
                continue;
            }
            fprintf(stderr,"HEIST_BRIDGE: GUID adapter dependencies missing\n");
            ++essential_missing;
        }
        if (required[i]) {
            fprintf(stderr,"HEIST_BRIDGE: REQUIRED wrapper missing: %s\n",names[i]);
            ++essential_missing;
        }
        if (original_utility[i]) {
            resolved[i]=(void *)(unsigned long)original_utility[i];
            ++utility;
        } else {
            resolved[i]=(void *)missing[i];
            ++blocked;
        }
    }
    if (essential_missing) { fprintf(stderr,"HEIST_BRIDGE: %u essential wrappers missing\n",essential_missing); _exit(78); }
    {
        int (*number)(void)=dlsym(handle,"SDL_GetNumVideoDrivers");
        const char *(*driver)(int)=dlsym(handle,"SDL_GetVideoDriver");
        if (number && driver) {
            int count=number(), j;
            fprintf(stderr,"HEIST_BRIDGE: native SDL video drivers (%d):",count);
            for(j=0;j<count;++j) fprintf(stderr," %s",driver(j));
            fprintf(stderr,"\n");
        }
    }
    native_init=resolved[13]; resolved[13]=(void *)traced_init;
    native_window=resolved[470]; resolved[470]=(void *)traced_window;
    native_context=resolved[515]; resolved[515]=(void *)traced_context;
    native_error=dlsym(handle,"SDL_GetError");
    native_driver=dlsym(handle,"SDL_GetCurrentVideoDriver");
    native_swap=resolved[522]; resolved[522]=(void *)traced_swap;
    for (i=0;i<547;++i) ((void **)table)[i]=resolved[i];
    fprintf(stderr,"HEIST_BRIDGE v2.5: installed 547 entries (%u native, %u embedded utilities, %u guarded unused)\n",native,utility,blocked);
    return 0;
}

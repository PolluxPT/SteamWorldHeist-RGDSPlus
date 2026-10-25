/* SPDX-License-Identifier: MIT; port code, see ../LICENSE.
 * SDL-related declarations/data remain under SDL zlib terms; ../licenses/sdl2.txt. */
/* GLEW GLX queries on a Wayland/EGL context.
   All rendering entrypoints come from GL4ES via Box32's wrapped libGL.
   SDL's native EGL resolver can expose raw GLES functions and MUST NOT be
   mixed with the desktop GL4ES functions imported by the game executable. */
extern void *dlopen(const char *,int);
extern void *dlsym(void *,const char *);
extern int fprintf(void *,const char *,...);
extern void *stderr;
extern void _exit(int) __attribute__((noreturn));
static unsigned char display_cookie;
static int same(const char *a,const char *b) {while(*a && *a==*b){++a;++b;}return *a==*b;}
void *glXGetCurrentDisplay(void) {return &display_cookie;}
int glXQueryVersion(void *d,int *major,int *minor) {
 (void)d;if(major)*major=1;if(minor)*minor=4;return 1;
}
const char *glXGetClientString(void *d,int name) {
 (void)d;return name==1?"RGDS GL4ES":name==2?"1.4":name==3?"GLX_ARB_get_proc_address":"";
}
const char *glXQueryServerString(void *d,int screen,int name) {(void)screen;return glXGetClientString(d,name);}
const char *glXQueryExtensionsString(void *d,int screen) {(void)d;(void)screen;return "GLX_ARB_get_proc_address";}
void *glXGetProcAddressARB(const unsigned char *symbol) {
 static void *(*getproc)(const unsigned char *);
 static void *gl;
 static int attempted;
 const char *name=(const char *)symbol;
 void *result;
 if(!name)return (void *)0;
#define OWN(fn) if(same(name,#fn))return (void *)fn
 OWN(glXGetCurrentDisplay);OWN(glXQueryVersion);OWN(glXGetClientString);
 OWN(glXQueryServerString);OWN(glXQueryExtensionsString);OWN(glXGetProcAddressARB);
#undef OWN
 if(!attempted) {
  attempted=1;gl=dlopen("libGL.so.1",2);
  if(gl)getproc=dlsym(gl,"glXGetProcAddressARB");
  if((void *)getproc==(void *)glXGetProcAddressARB)getproc=(void *)0;
  if(!getproc)getproc=dlsym((void *)-1,"glXGetProcAddressARB");
  if((void *)getproc==(void *)glXGetProcAddressARB)getproc=(void *)0;
  fprintf(stderr,"HEIST_GLX v2.5: GL4ES resolver %s\n",getproc?"available":"MISSING");
  if(!getproc)_exit(78);
 }
 result=getproc(symbol);
 if(!result && gl)result=dlsym(gl,name);
 if(same(name,"glGetTexLevelParameteriv") || same(name,"glShaderSource") ||
    same(name,"glCreateShader") || same(name,"glBindFramebuffer"))
  fprintf(stderr,"HEIST_GLX: GL4ES %s -> %p\n",name,result);
 return result;
}
void *glXGetProcAddress(const unsigned char *name) {return glXGetProcAddressARB(name);}

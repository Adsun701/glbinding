#include <glbinding/GetProcAddress.h>

#ifdef WIN32
    #include <string>
    #include <windows.h>
#elif __APPLE__
    #include <cassert>
    #include <string>
    #include <dlfcn.h>
#else
    #include <GL/glx.h>
#endif

namespace gl {

ProcAddress GetProcAddress(const char * name)
{
#ifdef WIN32

    typedef void (__stdcall * PROCADDRESS)();
    PROCADDRESS procAddress = reinterpret_cast<PROCADDRESS>(wglGetProcAddress(name));

    if (procAddress == nullptr)
    {
        static HMODULE module = LoadLibrary(L"OPENGL32.DLL");
        procAddress = reinterpret_cast<PROCADDRESS>(::GetProcAddress(module, name));
    }

#elif __APPLE__

    typedef void * PROCADDRESS;

    void * library = dlopen("/System/Library/Frameworks/OpenGL.framework/Versions/Current/OpenGL", RTLD_LAZY);
    assert(library != nullptr);

    void * symbol = dlsym(library, name);

    PROCADDRESS procAddress = reinterpret_cast<PROCADDRESS>(symbol);

#else

    typedef void (* PROCADDRESS)();
    PROCADDRESS procAddress = reinterpret_cast<PROCADDRESS>(glXGetProcAddress(reinterpret_cast<const unsigned char*>(name)));

#endif

    return reinterpret_cast<ProcAddress>(procAddress);
}

} // namespace gl


#include "Binding_pch.h"


using namespace egl;


namespace eglbinding
{


Function<Binding, EGLBoolean, EGLDisplay, EGLSurface, EGLint, EGLint, EGLint, EGLint> Binding::PostSubBufferNV("eglPostSubBufferNV");
Function<Binding, EGLBoolean, EGLDisplay, EGLSurface, EGLnsecsANDROID> Binding::PresentationTimeANDROID("eglPresentationTimeANDROID");



} // namespace eglbinding

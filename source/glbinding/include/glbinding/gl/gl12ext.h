#pragma once

#include <glbinding/gl/nogl.h>
#include <glbinding/glbinding_api.h>

#include <glbinding/gl/initialize.h>

#include <glbinding/gl/extension.h>

#include <glbinding/gl/types.h>

#include <glbinding/gl/boolean.h>

namespace gl12ext
{

inline void initialize()
{
    return gl::initialize();
}

} // namespace gl12ext

#include <glbinding/gl/bitfield12ext.h>
#include <glbinding/gl/enum12ext.h>
#include <glbinding/gl/functions12ext.h>

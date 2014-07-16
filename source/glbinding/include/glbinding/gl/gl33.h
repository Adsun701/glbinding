#pragma once

#include <glbinding/gl/nogl.h>
#include <glbinding/glbinding_api.h>

#include <glbinding/gl/initialize.h>

#include <glbinding/gl/extension.h>

#include <glbinding/gl/types.h>

#include <glbinding/gl/boolean.h>

namespace gl33
{

inline void initialize()
{
    return gl::initialize();
}

} // namespace gl33

#include <glbinding/gl/bitfield33.h>
#include <glbinding/gl/bitfield33ext.h>
#include <glbinding/gl/enum33.h>
#include <glbinding/gl/enum33ext.h>
#include <glbinding/gl/functions33.h>
#include <glbinding/gl/functions33ext.h>

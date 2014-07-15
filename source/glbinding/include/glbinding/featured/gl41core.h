#pragma once

#include <glbinding/nogl.h>
#include <glbinding/glbinding_api.h>

#include <glbinding/initialize.h>

#include <glbinding/extension.h>

#include <glbinding/types.h>

#include <glbinding/boolean.h>

namespace gl41core
{

inline void initialize()
{
    return gl::initialize();
}

} // namespace gl41core

#include <glbinding/featured/bitfield41core.h>
#include <glbinding/featured/enum41core.h>
#include <glbinding/featured/functions41core.h>

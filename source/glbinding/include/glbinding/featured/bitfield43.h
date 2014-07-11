#pragma once

#include <glbinding/nogl.h>
#include <glbinding/types.h>

#include <glbinding/bitfield.h>


namespace gl43
{

using namespace gl;

// import bitfields to namespace

// AttribMask

static const GLbitfield GL_CURRENT_BIT = GLbitfield::GL_CURRENT_BIT;
static const GLbitfield GL_POINT_BIT = GLbitfield::GL_POINT_BIT;
static const GLbitfield GL_LINE_BIT = GLbitfield::GL_LINE_BIT;
static const GLbitfield GL_POLYGON_BIT = GLbitfield::GL_POLYGON_BIT;
static const GLbitfield GL_POLYGON_STIPPLE_BIT = GLbitfield::GL_POLYGON_STIPPLE_BIT;
static const GLbitfield GL_PIXEL_MODE_BIT = GLbitfield::GL_PIXEL_MODE_BIT;
static const GLbitfield GL_LIGHTING_BIT = GLbitfield::GL_LIGHTING_BIT;
static const GLbitfield GL_FOG_BIT = GLbitfield::GL_FOG_BIT;
static const GLbitfield GL_DEPTH_BUFFER_BIT = GLbitfield::GL_DEPTH_BUFFER_BIT;
static const GLbitfield GL_ACCUM_BUFFER_BIT = GLbitfield::GL_ACCUM_BUFFER_BIT;
static const GLbitfield GL_STENCIL_BUFFER_BIT = GLbitfield::GL_STENCIL_BUFFER_BIT;
static const GLbitfield GL_VIEWPORT_BIT = GLbitfield::GL_VIEWPORT_BIT;
static const GLbitfield GL_TRANSFORM_BIT = GLbitfield::GL_TRANSFORM_BIT;
static const GLbitfield GL_ENABLE_BIT = GLbitfield::GL_ENABLE_BIT;
static const GLbitfield GL_COLOR_BUFFER_BIT = GLbitfield::GL_COLOR_BUFFER_BIT;
static const GLbitfield GL_HINT_BIT = GLbitfield::GL_HINT_BIT;
static const GLbitfield GL_EVAL_BIT = GLbitfield::GL_EVAL_BIT;
static const GLbitfield GL_LIST_BIT = GLbitfield::GL_LIST_BIT;
static const GLbitfield GL_TEXTURE_BIT = GLbitfield::GL_TEXTURE_BIT;
static const GLbitfield GL_SCISSOR_BIT = GLbitfield::GL_SCISSOR_BIT;
static const GLbitfield GL_MULTISAMPLE_BIT = GLbitfield::GL_MULTISAMPLE_BIT;
static const GLbitfield GL_ALL_ATTRIB_BITS = GLbitfield::GL_ALL_ATTRIB_BITS;

// ClientAttribMask

static const GLbitfield GL_CLIENT_PIXEL_STORE_BIT = GLbitfield::GL_CLIENT_PIXEL_STORE_BIT;
static const GLbitfield GL_CLIENT_VERTEX_ARRAY_BIT = GLbitfield::GL_CLIENT_VERTEX_ARRAY_BIT;
static const GLbitfield GL_CLIENT_ALL_ATTRIB_BITS = GLbitfield::GL_CLIENT_ALL_ATTRIB_BITS;

// ContextFlagMask

static const GLbitfield GL_CONTEXT_FLAG_FORWARD_COMPATIBLE_BIT = GLbitfield::GL_CONTEXT_FLAG_FORWARD_COMPATIBLE_BIT;
static const GLbitfield GL_CONTEXT_FLAG_DEBUG_BIT = GLbitfield::GL_CONTEXT_FLAG_DEBUG_BIT;

// ContextProfileMask

static const GLbitfield GL_CONTEXT_CORE_PROFILE_BIT = GLbitfield::GL_CONTEXT_CORE_PROFILE_BIT;
static const GLbitfield GL_CONTEXT_COMPATIBILITY_PROFILE_BIT = GLbitfield::GL_CONTEXT_COMPATIBILITY_PROFILE_BIT;

// MapBufferUsageMask

static const GLbitfield GL_MAP_READ_BIT = GLbitfield::GL_MAP_READ_BIT;
static const GLbitfield GL_MAP_WRITE_BIT = GLbitfield::GL_MAP_WRITE_BIT;
static const GLbitfield GL_MAP_INVALIDATE_RANGE_BIT = GLbitfield::GL_MAP_INVALIDATE_RANGE_BIT;
static const GLbitfield GL_MAP_INVALIDATE_BUFFER_BIT = GLbitfield::GL_MAP_INVALIDATE_BUFFER_BIT;
static const GLbitfield GL_MAP_FLUSH_EXPLICIT_BIT = GLbitfield::GL_MAP_FLUSH_EXPLICIT_BIT;
static const GLbitfield GL_MAP_UNSYNCHRONIZED_BIT = GLbitfield::GL_MAP_UNSYNCHRONIZED_BIT;

// MemoryBarrierMask

static const GLbitfield GL_VERTEX_ATTRIB_ARRAY_BARRIER_BIT = GLbitfield::GL_VERTEX_ATTRIB_ARRAY_BARRIER_BIT;
static const GLbitfield GL_ELEMENT_ARRAY_BARRIER_BIT = GLbitfield::GL_ELEMENT_ARRAY_BARRIER_BIT;
static const GLbitfield GL_UNIFORM_BARRIER_BIT = GLbitfield::GL_UNIFORM_BARRIER_BIT;
static const GLbitfield GL_TEXTURE_FETCH_BARRIER_BIT = GLbitfield::GL_TEXTURE_FETCH_BARRIER_BIT;
static const GLbitfield GL_SHADER_IMAGE_ACCESS_BARRIER_BIT = GLbitfield::GL_SHADER_IMAGE_ACCESS_BARRIER_BIT;
static const GLbitfield GL_COMMAND_BARRIER_BIT = GLbitfield::GL_COMMAND_BARRIER_BIT;
static const GLbitfield GL_PIXEL_BUFFER_BARRIER_BIT = GLbitfield::GL_PIXEL_BUFFER_BARRIER_BIT;
static const GLbitfield GL_TEXTURE_UPDATE_BARRIER_BIT = GLbitfield::GL_TEXTURE_UPDATE_BARRIER_BIT;
static const GLbitfield GL_BUFFER_UPDATE_BARRIER_BIT = GLbitfield::GL_BUFFER_UPDATE_BARRIER_BIT;
static const GLbitfield GL_FRAMEBUFFER_BARRIER_BIT = GLbitfield::GL_FRAMEBUFFER_BARRIER_BIT;
static const GLbitfield GL_TRANSFORM_FEEDBACK_BARRIER_BIT = GLbitfield::GL_TRANSFORM_FEEDBACK_BARRIER_BIT;
static const GLbitfield GL_ATOMIC_COUNTER_BARRIER_BIT = GLbitfield::GL_ATOMIC_COUNTER_BARRIER_BIT;
static const GLbitfield GL_SHADER_STORAGE_BARRIER_BIT = GLbitfield::GL_SHADER_STORAGE_BARRIER_BIT;
static const GLbitfield GL_ALL_BARRIER_BITS = GLbitfield::GL_ALL_BARRIER_BITS;

// SyncObjectMask

static const GLbitfield GL_SYNC_FLUSH_COMMANDS_BIT = GLbitfield::GL_SYNC_FLUSH_COMMANDS_BIT;

// UseProgramStageMask

static const GLbitfield GL_VERTEX_SHADER_BIT = GLbitfield::GL_VERTEX_SHADER_BIT;
static const GLbitfield GL_FRAGMENT_SHADER_BIT = GLbitfield::GL_FRAGMENT_SHADER_BIT;
static const GLbitfield GL_GEOMETRY_SHADER_BIT = GLbitfield::GL_GEOMETRY_SHADER_BIT;
static const GLbitfield GL_TESS_CONTROL_SHADER_BIT = GLbitfield::GL_TESS_CONTROL_SHADER_BIT;
static const GLbitfield GL_TESS_EVALUATION_SHADER_BIT = GLbitfield::GL_TESS_EVALUATION_SHADER_BIT;
static const GLbitfield GL_COMPUTE_SHADER_BIT = GLbitfield::GL_COMPUTE_SHADER_BIT;
static const GLbitfield GL_ALL_SHADER_BITS = GLbitfield::GL_ALL_SHADER_BITS;

} // namespace gl43

#pragma once

#include <glbinding/nogl.h>
#include <glbinding/types.h>


namespace gl
{

enum class GLbitfield : unsigned int 
{
    // AttribMask

    GL_CURRENT_BIT          = 0x00000001,
    GL_POINT_BIT            = 0x00000002,
    GL_LINE_BIT             = 0x00000004,
    GL_POLYGON_BIT          = 0x00000008,
    GL_POLYGON_STIPPLE_BIT  = 0x00000010,
    GL_PIXEL_MODE_BIT       = 0x00000020,
    GL_LIGHTING_BIT         = 0x00000040,
    GL_FOG_BIT              = 0x00000080,
    GL_DEPTH_BUFFER_BIT     = 0x00000100,
    GL_ACCUM_BUFFER_BIT     = 0x00000200,
    GL_STENCIL_BUFFER_BIT   = 0x00000400,
    GL_VIEWPORT_BIT         = 0x00000800,
    GL_TRANSFORM_BIT        = 0x00001000,
    GL_ENABLE_BIT           = 0x00002000,
    GL_COLOR_BUFFER_BIT     = 0x00004000,
    GL_HINT_BIT             = 0x00008000,
    GL_EVAL_BIT             = 0x00010000,
    GL_LIST_BIT             = 0x00020000,
    GL_TEXTURE_BIT          = 0x00040000,
    GL_SCISSOR_BIT          = 0x00080000,
    GL_MULTISAMPLE_BIT      = 0x20000000,
    GL_MULTISAMPLE_BIT_3DFX = 0x20000000,
    GL_MULTISAMPLE_BIT_ARB  = 0x20000000,
    GL_MULTISAMPLE_BIT_EXT  = 0x20000000,
    GL_ALL_ATTRIB_BITS      = 0xFFFFFFFF,

    // BufferAccessMask

    GL_MAP_READ_BIT              = 0x0001,
    GL_MAP_WRITE_BIT             = 0x0002,
    GL_MAP_INVALIDATE_RANGE_BIT  = 0x0004,
    GL_MAP_INVALIDATE_BUFFER_BIT = 0x0008,
    GL_MAP_FLUSH_EXPLICIT_BIT    = 0x0010,
    GL_MAP_UNSYNCHRONIZED_BIT    = 0x0020,
    GL_MAP_PERSISTENT_BIT        = 0x0040,
    GL_MAP_COHERENT_BIT          = 0x0080,

    // ClearBufferMask

//  GL_DEPTH_BUFFER_BIT       = 0x00000100, // reuse AttribMask
//  GL_ACCUM_BUFFER_BIT       = 0x00000200, // reuse AttribMask
//  GL_STENCIL_BUFFER_BIT     = 0x00000400, // reuse AttribMask
//  GL_COLOR_BUFFER_BIT       = 0x00004000, // reuse AttribMask
    GL_COVERAGE_BUFFER_BIT_NV = 0x00008000,

    // ClientAttribMask

    GL_CLIENT_PIXEL_STORE_BIT  = 0x00000001,
    GL_CLIENT_VERTEX_ARRAY_BIT = 0x00000002,
    GL_CLIENT_ALL_ATTRIB_BITS  = 0xFFFFFFFF,

    // ContextFlagMask

    GL_CONTEXT_FLAG_FORWARD_COMPATIBLE_BIT = 0x00000001,
    GL_CONTEXT_FLAG_DEBUG_BIT              = 0x00000002,
    GL_CONTEXT_FLAG_ROBUST_ACCESS_BIT_ARB  = 0x00000004,

    // ContextProfileMask

    GL_CONTEXT_CORE_PROFILE_BIT          = 0x00000001,
    GL_CONTEXT_COMPATIBILITY_PROFILE_BIT = 0x00000002,

    // FfdMaskSGIX

    GL_TEXTURE_DEFORMATION_BIT_SGIX  = 0x00000001,
    GL_GEOMETRY_DEFORMATION_BIT_SGIX = 0x00000002,

    // FragmentShaderColorModMaskATI

    GL_COMP_BIT_ATI   = 0x00000002,
    GL_NEGATE_BIT_ATI = 0x00000004,
    GL_BIAS_BIT_ATI   = 0x00000008,

    // FragmentShaderDestMaskATI

    GL_RED_BIT_ATI   = 0x00000001,
    GL_GREEN_BIT_ATI = 0x00000002,
    GL_BLUE_BIT_ATI  = 0x00000004,

    // FragmentShaderDestModMaskATI

    GL_2X_BIT_ATI       = 0x00000001,
    GL_4X_BIT_ATI       = 0x00000002,
    GL_8X_BIT_ATI       = 0x00000004,
    GL_HALF_BIT_ATI     = 0x00000008,
    GL_QUARTER_BIT_ATI  = 0x00000010,
    GL_EIGHTH_BIT_ATI   = 0x00000020,
    GL_SATURATE_BIT_ATI = 0x00000040,

    // MapBufferUsageMask

//  GL_MAP_READ_BIT              = 0x0001, // reuse BufferAccessMask
//  GL_MAP_WRITE_BIT             = 0x0002, // reuse BufferAccessMask
//  GL_MAP_INVALIDATE_RANGE_BIT  = 0x0004, // reuse BufferAccessMask
//  GL_MAP_INVALIDATE_BUFFER_BIT = 0x0008, // reuse BufferAccessMask
//  GL_MAP_FLUSH_EXPLICIT_BIT    = 0x0010, // reuse BufferAccessMask
//  GL_MAP_UNSYNCHRONIZED_BIT    = 0x0020, // reuse BufferAccessMask
//  GL_MAP_PERSISTENT_BIT        = 0x0040, // reuse BufferAccessMask
//  GL_MAP_COHERENT_BIT          = 0x0080, // reuse BufferAccessMask
    GL_DYNAMIC_STORAGE_BIT       = 0x0100,
    GL_CLIENT_STORAGE_BIT        = 0x0200,

    // MemoryBarrierMask

    GL_VERTEX_ATTRIB_ARRAY_BARRIER_BIT     = 0x00000001,
    GL_VERTEX_ATTRIB_ARRAY_BARRIER_BIT_EXT = 0x00000001,
    GL_ELEMENT_ARRAY_BARRIER_BIT           = 0x00000002,
    GL_ELEMENT_ARRAY_BARRIER_BIT_EXT       = 0x00000002,
    GL_UNIFORM_BARRIER_BIT                 = 0x00000004,
    GL_UNIFORM_BARRIER_BIT_EXT             = 0x00000004,
    GL_TEXTURE_FETCH_BARRIER_BIT           = 0x00000008,
    GL_TEXTURE_FETCH_BARRIER_BIT_EXT       = 0x00000008,
    GL_SHADER_GLOBAL_ACCESS_BARRIER_BIT_NV = 0x00000010,
    GL_SHADER_IMAGE_ACCESS_BARRIER_BIT     = 0x00000020,
    GL_SHADER_IMAGE_ACCESS_BARRIER_BIT_EXT = 0x00000020,
    GL_COMMAND_BARRIER_BIT                 = 0x00000040,
    GL_COMMAND_BARRIER_BIT_EXT             = 0x00000040,
    GL_PIXEL_BUFFER_BARRIER_BIT            = 0x00000080,
    GL_PIXEL_BUFFER_BARRIER_BIT_EXT        = 0x00000080,
    GL_TEXTURE_UPDATE_BARRIER_BIT          = 0x00000100,
    GL_TEXTURE_UPDATE_BARRIER_BIT_EXT      = 0x00000100,
    GL_BUFFER_UPDATE_BARRIER_BIT           = 0x00000200,
    GL_BUFFER_UPDATE_BARRIER_BIT_EXT       = 0x00000200,
    GL_FRAMEBUFFER_BARRIER_BIT             = 0x00000400,
    GL_FRAMEBUFFER_BARRIER_BIT_EXT         = 0x00000400,
    GL_TRANSFORM_FEEDBACK_BARRIER_BIT      = 0x00000800,
    GL_TRANSFORM_FEEDBACK_BARRIER_BIT_EXT  = 0x00000800,
    GL_ATOMIC_COUNTER_BARRIER_BIT          = 0x00001000,
    GL_ATOMIC_COUNTER_BARRIER_BIT_EXT      = 0x00001000,
    GL_SHADER_STORAGE_BARRIER_BIT          = 0x00002000,
    GL_CLIENT_MAPPED_BUFFER_BARRIER_BIT    = 0x00004000,
    GL_QUERY_BUFFER_BARRIER_BIT            = 0x00008000,
    GL_ALL_BARRIER_BITS                    = 0xFFFFFFFF,
    GL_ALL_BARRIER_BITS_EXT                = 0xFFFFFFFF,

    // NotUsedMask

    GL_NOT_USED_BIT = 0x00000000,

    // PathFontStyle

    GL_NONE_BIT      = 0x00,
    GL_BOLD_BIT_NV   = 0x01,
    GL_ITALIC_BIT_NV = 0x02,

    // PathRenderingMaskNV

    GL_FONT_X_MIN_BOUNDS_BIT_NV                = 0x00010000,
    GL_FONT_Y_MIN_BOUNDS_BIT_NV                = 0x00020000,
    GL_FONT_X_MAX_BOUNDS_BIT_NV                = 0x00040000,
    GL_FONT_Y_MAX_BOUNDS_BIT_NV                = 0x00080000,
    GL_FONT_UNITS_PER_EM_BIT_NV                = 0x00100000,
    GL_FONT_ASCENDER_BIT_NV                    = 0x00200000,
    GL_FONT_DESCENDER_BIT_NV                   = 0x00400000,
    GL_FONT_HEIGHT_BIT_NV                      = 0x00800000,
//  GL_BOLD_BIT_NV                             = 0x01, // reuse PathFontStyle
    GL_GLYPH_WIDTH_BIT_NV                      = 0x01,
    GL_FONT_MAX_ADVANCE_WIDTH_BIT_NV           = 0x01000000,
    GL_GLYPH_HEIGHT_BIT_NV                     = 0x02,
//  GL_ITALIC_BIT_NV                           = 0x02, // reuse PathFontStyle
    GL_FONT_MAX_ADVANCE_HEIGHT_BIT_NV          = 0x02000000,
    GL_GLYPH_HORIZONTAL_BEARING_X_BIT_NV       = 0x04,
    GL_FONT_UNDERLINE_POSITION_BIT_NV          = 0x04000000,
    GL_GLYPH_HORIZONTAL_BEARING_Y_BIT_NV       = 0x08,
    GL_FONT_UNDERLINE_THICKNESS_BIT_NV         = 0x08000000,
    GL_GLYPH_HORIZONTAL_BEARING_ADVANCE_BIT_NV = 0x10,
    GL_GLYPH_HAS_KERNING_BIT_NV                = 0x100,
    GL_FONT_HAS_KERNING_BIT_NV                 = 0x10000000,
    GL_GLYPH_VERTICAL_BEARING_X_BIT_NV         = 0x20,
    GL_GLYPH_VERTICAL_BEARING_Y_BIT_NV         = 0x40,
    GL_GLYPH_VERTICAL_BEARING_ADVANCE_BIT_NV   = 0x80,

    // PerformanceQueryCapsMaskINTEL

    GL_PERFQUERY_SINGLE_CONTEXT_INTEL = 0x00000000,
    GL_PERFQUERY_GLOBAL_CONTEXT_INTEL = 0x00000001,

    // SyncObjectMask

    GL_SYNC_FLUSH_COMMANDS_BIT = 0x00000001,

    // TextureStorageMaskAMD

    GL_TEXTURE_STORAGE_SPARSE_BIT_AMD = 0x00000001,

    // UseProgramStageMask

    GL_VERTEX_SHADER_BIT          = 0x00000001,
    GL_FRAGMENT_SHADER_BIT        = 0x00000002,
    GL_GEOMETRY_SHADER_BIT        = 0x00000004,
    GL_TESS_CONTROL_SHADER_BIT    = 0x00000008,
    GL_TESS_EVALUATION_SHADER_BIT = 0x00000010,
    GL_COMPUTE_SHADER_BIT         = 0x00000020,
    GL_ALL_SHADER_BITS            = 0xFFFFFFFF,

    // VertexHintsMaskPGI

    GL_VERTEX23_BIT_PGI                = 0x00000004,
    GL_VERTEX4_BIT_PGI                 = 0x00000008,
    GL_COLOR3_BIT_PGI                  = 0x00010000,
    GL_COLOR4_BIT_PGI                  = 0x00020000,
    GL_EDGEFLAG_BIT_PGI                = 0x00040000,
    GL_INDEX_BIT_PGI                   = 0x00080000,
    GL_MAT_AMBIENT_BIT_PGI             = 0x00100000,
    GL_MAT_AMBIENT_AND_DIFFUSE_BIT_PGI = 0x00200000,
    GL_MAT_DIFFUSE_BIT_PGI             = 0x00400000,
    GL_MAT_EMISSION_BIT_PGI            = 0x00800000,
    GL_MAT_COLOR_INDEXES_BIT_PGI       = 0x01000000,
    GL_MAT_SHININESS_BIT_PGI           = 0x02000000,
    GL_MAT_SPECULAR_BIT_PGI            = 0x04000000,
    GL_NORMAL_BIT_PGI                  = 0x08000000,
    GL_TEXCOORD1_BIT_PGI               = 0x10000000,
    GL_TEXCOORD2_BIT_PGI               = 0x20000000,
    GL_TEXCOORD3_BIT_PGI               = 0x40000000,
    GL_TEXCOORD4_BIT_PGI               = 0x80000000,

};

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
static const GLbitfield GL_MULTISAMPLE_BIT_3DFX = GLbitfield::GL_MULTISAMPLE_BIT_3DFX;
static const GLbitfield GL_MULTISAMPLE_BIT_ARB = GLbitfield::GL_MULTISAMPLE_BIT_ARB;
static const GLbitfield GL_MULTISAMPLE_BIT_EXT = GLbitfield::GL_MULTISAMPLE_BIT_EXT;
static const GLbitfield GL_ALL_ATTRIB_BITS = GLbitfield::GL_ALL_ATTRIB_BITS;

// BufferAccessMask

static const GLbitfield GL_MAP_READ_BIT = GLbitfield::GL_MAP_READ_BIT;
static const GLbitfield GL_MAP_WRITE_BIT = GLbitfield::GL_MAP_WRITE_BIT;
static const GLbitfield GL_MAP_INVALIDATE_RANGE_BIT = GLbitfield::GL_MAP_INVALIDATE_RANGE_BIT;
static const GLbitfield GL_MAP_INVALIDATE_BUFFER_BIT = GLbitfield::GL_MAP_INVALIDATE_BUFFER_BIT;
static const GLbitfield GL_MAP_FLUSH_EXPLICIT_BIT = GLbitfield::GL_MAP_FLUSH_EXPLICIT_BIT;
static const GLbitfield GL_MAP_UNSYNCHRONIZED_BIT = GLbitfield::GL_MAP_UNSYNCHRONIZED_BIT;
static const GLbitfield GL_MAP_PERSISTENT_BIT = GLbitfield::GL_MAP_PERSISTENT_BIT;
static const GLbitfield GL_MAP_COHERENT_BIT = GLbitfield::GL_MAP_COHERENT_BIT;

// ClearBufferMask

// static const GLbitfield GL_DEPTH_BUFFER_BIT = GLbitfield::GL_DEPTH_BUFFER_BIT; // reuse AttribMask
// static const GLbitfield GL_ACCUM_BUFFER_BIT = GLbitfield::GL_ACCUM_BUFFER_BIT; // reuse AttribMask
// static const GLbitfield GL_STENCIL_BUFFER_BIT = GLbitfield::GL_STENCIL_BUFFER_BIT; // reuse AttribMask
// static const GLbitfield GL_COLOR_BUFFER_BIT = GLbitfield::GL_COLOR_BUFFER_BIT; // reuse AttribMask
static const GLbitfield GL_COVERAGE_BUFFER_BIT_NV = GLbitfield::GL_COVERAGE_BUFFER_BIT_NV;

// ClientAttribMask

static const GLbitfield GL_CLIENT_PIXEL_STORE_BIT = GLbitfield::GL_CLIENT_PIXEL_STORE_BIT;
static const GLbitfield GL_CLIENT_VERTEX_ARRAY_BIT = GLbitfield::GL_CLIENT_VERTEX_ARRAY_BIT;
static const GLbitfield GL_CLIENT_ALL_ATTRIB_BITS = GLbitfield::GL_CLIENT_ALL_ATTRIB_BITS;

// ContextFlagMask

static const GLbitfield GL_CONTEXT_FLAG_FORWARD_COMPATIBLE_BIT = GLbitfield::GL_CONTEXT_FLAG_FORWARD_COMPATIBLE_BIT;
static const GLbitfield GL_CONTEXT_FLAG_DEBUG_BIT = GLbitfield::GL_CONTEXT_FLAG_DEBUG_BIT;
static const GLbitfield GL_CONTEXT_FLAG_ROBUST_ACCESS_BIT_ARB = GLbitfield::GL_CONTEXT_FLAG_ROBUST_ACCESS_BIT_ARB;

// ContextProfileMask

static const GLbitfield GL_CONTEXT_CORE_PROFILE_BIT = GLbitfield::GL_CONTEXT_CORE_PROFILE_BIT;
static const GLbitfield GL_CONTEXT_COMPATIBILITY_PROFILE_BIT = GLbitfield::GL_CONTEXT_COMPATIBILITY_PROFILE_BIT;

// FfdMaskSGIX

static const GLbitfield GL_TEXTURE_DEFORMATION_BIT_SGIX = GLbitfield::GL_TEXTURE_DEFORMATION_BIT_SGIX;
static const GLbitfield GL_GEOMETRY_DEFORMATION_BIT_SGIX = GLbitfield::GL_GEOMETRY_DEFORMATION_BIT_SGIX;

// FragmentShaderColorModMaskATI

static const GLbitfield GL_COMP_BIT_ATI = GLbitfield::GL_COMP_BIT_ATI;
static const GLbitfield GL_NEGATE_BIT_ATI = GLbitfield::GL_NEGATE_BIT_ATI;
static const GLbitfield GL_BIAS_BIT_ATI = GLbitfield::GL_BIAS_BIT_ATI;

// FragmentShaderDestMaskATI

static const GLbitfield GL_RED_BIT_ATI = GLbitfield::GL_RED_BIT_ATI;
static const GLbitfield GL_GREEN_BIT_ATI = GLbitfield::GL_GREEN_BIT_ATI;
static const GLbitfield GL_BLUE_BIT_ATI = GLbitfield::GL_BLUE_BIT_ATI;

// FragmentShaderDestModMaskATI

static const GLbitfield GL_2X_BIT_ATI = GLbitfield::GL_2X_BIT_ATI;
static const GLbitfield GL_4X_BIT_ATI = GLbitfield::GL_4X_BIT_ATI;
static const GLbitfield GL_8X_BIT_ATI = GLbitfield::GL_8X_BIT_ATI;
static const GLbitfield GL_HALF_BIT_ATI = GLbitfield::GL_HALF_BIT_ATI;
static const GLbitfield GL_QUARTER_BIT_ATI = GLbitfield::GL_QUARTER_BIT_ATI;
static const GLbitfield GL_EIGHTH_BIT_ATI = GLbitfield::GL_EIGHTH_BIT_ATI;
static const GLbitfield GL_SATURATE_BIT_ATI = GLbitfield::GL_SATURATE_BIT_ATI;

// MapBufferUsageMask

// static const GLbitfield GL_MAP_READ_BIT = GLbitfield::GL_MAP_READ_BIT; // reuse BufferAccessMask
// static const GLbitfield GL_MAP_WRITE_BIT = GLbitfield::GL_MAP_WRITE_BIT; // reuse BufferAccessMask
// static const GLbitfield GL_MAP_INVALIDATE_RANGE_BIT = GLbitfield::GL_MAP_INVALIDATE_RANGE_BIT; // reuse BufferAccessMask
// static const GLbitfield GL_MAP_INVALIDATE_BUFFER_BIT = GLbitfield::GL_MAP_INVALIDATE_BUFFER_BIT; // reuse BufferAccessMask
// static const GLbitfield GL_MAP_FLUSH_EXPLICIT_BIT = GLbitfield::GL_MAP_FLUSH_EXPLICIT_BIT; // reuse BufferAccessMask
// static const GLbitfield GL_MAP_UNSYNCHRONIZED_BIT = GLbitfield::GL_MAP_UNSYNCHRONIZED_BIT; // reuse BufferAccessMask
// static const GLbitfield GL_MAP_PERSISTENT_BIT = GLbitfield::GL_MAP_PERSISTENT_BIT; // reuse BufferAccessMask
// static const GLbitfield GL_MAP_COHERENT_BIT = GLbitfield::GL_MAP_COHERENT_BIT; // reuse BufferAccessMask
static const GLbitfield GL_DYNAMIC_STORAGE_BIT = GLbitfield::GL_DYNAMIC_STORAGE_BIT;
static const GLbitfield GL_CLIENT_STORAGE_BIT = GLbitfield::GL_CLIENT_STORAGE_BIT;

// MemoryBarrierMask

static const GLbitfield GL_VERTEX_ATTRIB_ARRAY_BARRIER_BIT = GLbitfield::GL_VERTEX_ATTRIB_ARRAY_BARRIER_BIT;
static const GLbitfield GL_VERTEX_ATTRIB_ARRAY_BARRIER_BIT_EXT = GLbitfield::GL_VERTEX_ATTRIB_ARRAY_BARRIER_BIT_EXT;
static const GLbitfield GL_ELEMENT_ARRAY_BARRIER_BIT = GLbitfield::GL_ELEMENT_ARRAY_BARRIER_BIT;
static const GLbitfield GL_ELEMENT_ARRAY_BARRIER_BIT_EXT = GLbitfield::GL_ELEMENT_ARRAY_BARRIER_BIT_EXT;
static const GLbitfield GL_UNIFORM_BARRIER_BIT = GLbitfield::GL_UNIFORM_BARRIER_BIT;
static const GLbitfield GL_UNIFORM_BARRIER_BIT_EXT = GLbitfield::GL_UNIFORM_BARRIER_BIT_EXT;
static const GLbitfield GL_TEXTURE_FETCH_BARRIER_BIT = GLbitfield::GL_TEXTURE_FETCH_BARRIER_BIT;
static const GLbitfield GL_TEXTURE_FETCH_BARRIER_BIT_EXT = GLbitfield::GL_TEXTURE_FETCH_BARRIER_BIT_EXT;
static const GLbitfield GL_SHADER_GLOBAL_ACCESS_BARRIER_BIT_NV = GLbitfield::GL_SHADER_GLOBAL_ACCESS_BARRIER_BIT_NV;
static const GLbitfield GL_SHADER_IMAGE_ACCESS_BARRIER_BIT = GLbitfield::GL_SHADER_IMAGE_ACCESS_BARRIER_BIT;
static const GLbitfield GL_SHADER_IMAGE_ACCESS_BARRIER_BIT_EXT = GLbitfield::GL_SHADER_IMAGE_ACCESS_BARRIER_BIT_EXT;
static const GLbitfield GL_COMMAND_BARRIER_BIT = GLbitfield::GL_COMMAND_BARRIER_BIT;
static const GLbitfield GL_COMMAND_BARRIER_BIT_EXT = GLbitfield::GL_COMMAND_BARRIER_BIT_EXT;
static const GLbitfield GL_PIXEL_BUFFER_BARRIER_BIT = GLbitfield::GL_PIXEL_BUFFER_BARRIER_BIT;
static const GLbitfield GL_PIXEL_BUFFER_BARRIER_BIT_EXT = GLbitfield::GL_PIXEL_BUFFER_BARRIER_BIT_EXT;
static const GLbitfield GL_TEXTURE_UPDATE_BARRIER_BIT = GLbitfield::GL_TEXTURE_UPDATE_BARRIER_BIT;
static const GLbitfield GL_TEXTURE_UPDATE_BARRIER_BIT_EXT = GLbitfield::GL_TEXTURE_UPDATE_BARRIER_BIT_EXT;
static const GLbitfield GL_BUFFER_UPDATE_BARRIER_BIT = GLbitfield::GL_BUFFER_UPDATE_BARRIER_BIT;
static const GLbitfield GL_BUFFER_UPDATE_BARRIER_BIT_EXT = GLbitfield::GL_BUFFER_UPDATE_BARRIER_BIT_EXT;
static const GLbitfield GL_FRAMEBUFFER_BARRIER_BIT = GLbitfield::GL_FRAMEBUFFER_BARRIER_BIT;
static const GLbitfield GL_FRAMEBUFFER_BARRIER_BIT_EXT = GLbitfield::GL_FRAMEBUFFER_BARRIER_BIT_EXT;
static const GLbitfield GL_TRANSFORM_FEEDBACK_BARRIER_BIT = GLbitfield::GL_TRANSFORM_FEEDBACK_BARRIER_BIT;
static const GLbitfield GL_TRANSFORM_FEEDBACK_BARRIER_BIT_EXT = GLbitfield::GL_TRANSFORM_FEEDBACK_BARRIER_BIT_EXT;
static const GLbitfield GL_ATOMIC_COUNTER_BARRIER_BIT = GLbitfield::GL_ATOMIC_COUNTER_BARRIER_BIT;
static const GLbitfield GL_ATOMIC_COUNTER_BARRIER_BIT_EXT = GLbitfield::GL_ATOMIC_COUNTER_BARRIER_BIT_EXT;
static const GLbitfield GL_SHADER_STORAGE_BARRIER_BIT = GLbitfield::GL_SHADER_STORAGE_BARRIER_BIT;
static const GLbitfield GL_CLIENT_MAPPED_BUFFER_BARRIER_BIT = GLbitfield::GL_CLIENT_MAPPED_BUFFER_BARRIER_BIT;
static const GLbitfield GL_QUERY_BUFFER_BARRIER_BIT = GLbitfield::GL_QUERY_BUFFER_BARRIER_BIT;
static const GLbitfield GL_ALL_BARRIER_BITS = GLbitfield::GL_ALL_BARRIER_BITS;
static const GLbitfield GL_ALL_BARRIER_BITS_EXT = GLbitfield::GL_ALL_BARRIER_BITS_EXT;

// NotUsedMask

static const GLbitfield GL_NOT_USED_BIT = GLbitfield::GL_NOT_USED_BIT;

// PathFontStyle

static const GLbitfield GL_NONE_BIT = GLbitfield::GL_NONE_BIT;
static const GLbitfield GL_BOLD_BIT_NV = GLbitfield::GL_BOLD_BIT_NV;
static const GLbitfield GL_ITALIC_BIT_NV = GLbitfield::GL_ITALIC_BIT_NV;

// PathRenderingMaskNV

static const GLbitfield GL_FONT_X_MIN_BOUNDS_BIT_NV = GLbitfield::GL_FONT_X_MIN_BOUNDS_BIT_NV;
static const GLbitfield GL_FONT_Y_MIN_BOUNDS_BIT_NV = GLbitfield::GL_FONT_Y_MIN_BOUNDS_BIT_NV;
static const GLbitfield GL_FONT_X_MAX_BOUNDS_BIT_NV = GLbitfield::GL_FONT_X_MAX_BOUNDS_BIT_NV;
static const GLbitfield GL_FONT_Y_MAX_BOUNDS_BIT_NV = GLbitfield::GL_FONT_Y_MAX_BOUNDS_BIT_NV;
static const GLbitfield GL_FONT_UNITS_PER_EM_BIT_NV = GLbitfield::GL_FONT_UNITS_PER_EM_BIT_NV;
static const GLbitfield GL_FONT_ASCENDER_BIT_NV = GLbitfield::GL_FONT_ASCENDER_BIT_NV;
static const GLbitfield GL_FONT_DESCENDER_BIT_NV = GLbitfield::GL_FONT_DESCENDER_BIT_NV;
static const GLbitfield GL_FONT_HEIGHT_BIT_NV = GLbitfield::GL_FONT_HEIGHT_BIT_NV;
// static const GLbitfield GL_BOLD_BIT_NV = GLbitfield::GL_BOLD_BIT_NV; // reuse PathFontStyle
static const GLbitfield GL_GLYPH_WIDTH_BIT_NV = GLbitfield::GL_GLYPH_WIDTH_BIT_NV;
static const GLbitfield GL_FONT_MAX_ADVANCE_WIDTH_BIT_NV = GLbitfield::GL_FONT_MAX_ADVANCE_WIDTH_BIT_NV;
static const GLbitfield GL_GLYPH_HEIGHT_BIT_NV = GLbitfield::GL_GLYPH_HEIGHT_BIT_NV;
// static const GLbitfield GL_ITALIC_BIT_NV = GLbitfield::GL_ITALIC_BIT_NV; // reuse PathFontStyle
static const GLbitfield GL_FONT_MAX_ADVANCE_HEIGHT_BIT_NV = GLbitfield::GL_FONT_MAX_ADVANCE_HEIGHT_BIT_NV;
static const GLbitfield GL_GLYPH_HORIZONTAL_BEARING_X_BIT_NV = GLbitfield::GL_GLYPH_HORIZONTAL_BEARING_X_BIT_NV;
static const GLbitfield GL_FONT_UNDERLINE_POSITION_BIT_NV = GLbitfield::GL_FONT_UNDERLINE_POSITION_BIT_NV;
static const GLbitfield GL_GLYPH_HORIZONTAL_BEARING_Y_BIT_NV = GLbitfield::GL_GLYPH_HORIZONTAL_BEARING_Y_BIT_NV;
static const GLbitfield GL_FONT_UNDERLINE_THICKNESS_BIT_NV = GLbitfield::GL_FONT_UNDERLINE_THICKNESS_BIT_NV;
static const GLbitfield GL_GLYPH_HORIZONTAL_BEARING_ADVANCE_BIT_NV = GLbitfield::GL_GLYPH_HORIZONTAL_BEARING_ADVANCE_BIT_NV;
static const GLbitfield GL_GLYPH_HAS_KERNING_BIT_NV = GLbitfield::GL_GLYPH_HAS_KERNING_BIT_NV;
static const GLbitfield GL_FONT_HAS_KERNING_BIT_NV = GLbitfield::GL_FONT_HAS_KERNING_BIT_NV;
static const GLbitfield GL_GLYPH_VERTICAL_BEARING_X_BIT_NV = GLbitfield::GL_GLYPH_VERTICAL_BEARING_X_BIT_NV;
static const GLbitfield GL_GLYPH_VERTICAL_BEARING_Y_BIT_NV = GLbitfield::GL_GLYPH_VERTICAL_BEARING_Y_BIT_NV;
static const GLbitfield GL_GLYPH_VERTICAL_BEARING_ADVANCE_BIT_NV = GLbitfield::GL_GLYPH_VERTICAL_BEARING_ADVANCE_BIT_NV;

// PerformanceQueryCapsMaskINTEL

static const GLbitfield GL_PERFQUERY_SINGLE_CONTEXT_INTEL = GLbitfield::GL_PERFQUERY_SINGLE_CONTEXT_INTEL;
static const GLbitfield GL_PERFQUERY_GLOBAL_CONTEXT_INTEL = GLbitfield::GL_PERFQUERY_GLOBAL_CONTEXT_INTEL;

// SyncObjectMask

static const GLbitfield GL_SYNC_FLUSH_COMMANDS_BIT = GLbitfield::GL_SYNC_FLUSH_COMMANDS_BIT;

// TextureStorageMaskAMD

static const GLbitfield GL_TEXTURE_STORAGE_SPARSE_BIT_AMD = GLbitfield::GL_TEXTURE_STORAGE_SPARSE_BIT_AMD;

// UseProgramStageMask

static const GLbitfield GL_VERTEX_SHADER_BIT = GLbitfield::GL_VERTEX_SHADER_BIT;
static const GLbitfield GL_FRAGMENT_SHADER_BIT = GLbitfield::GL_FRAGMENT_SHADER_BIT;
static const GLbitfield GL_GEOMETRY_SHADER_BIT = GLbitfield::GL_GEOMETRY_SHADER_BIT;
static const GLbitfield GL_TESS_CONTROL_SHADER_BIT = GLbitfield::GL_TESS_CONTROL_SHADER_BIT;
static const GLbitfield GL_TESS_EVALUATION_SHADER_BIT = GLbitfield::GL_TESS_EVALUATION_SHADER_BIT;
static const GLbitfield GL_COMPUTE_SHADER_BIT = GLbitfield::GL_COMPUTE_SHADER_BIT;
static const GLbitfield GL_ALL_SHADER_BITS = GLbitfield::GL_ALL_SHADER_BITS;

// VertexHintsMaskPGI

static const GLbitfield GL_VERTEX23_BIT_PGI = GLbitfield::GL_VERTEX23_BIT_PGI;
static const GLbitfield GL_VERTEX4_BIT_PGI = GLbitfield::GL_VERTEX4_BIT_PGI;
static const GLbitfield GL_COLOR3_BIT_PGI = GLbitfield::GL_COLOR3_BIT_PGI;
static const GLbitfield GL_COLOR4_BIT_PGI = GLbitfield::GL_COLOR4_BIT_PGI;
static const GLbitfield GL_EDGEFLAG_BIT_PGI = GLbitfield::GL_EDGEFLAG_BIT_PGI;
static const GLbitfield GL_INDEX_BIT_PGI = GLbitfield::GL_INDEX_BIT_PGI;
static const GLbitfield GL_MAT_AMBIENT_BIT_PGI = GLbitfield::GL_MAT_AMBIENT_BIT_PGI;
static const GLbitfield GL_MAT_AMBIENT_AND_DIFFUSE_BIT_PGI = GLbitfield::GL_MAT_AMBIENT_AND_DIFFUSE_BIT_PGI;
static const GLbitfield GL_MAT_DIFFUSE_BIT_PGI = GLbitfield::GL_MAT_DIFFUSE_BIT_PGI;
static const GLbitfield GL_MAT_EMISSION_BIT_PGI = GLbitfield::GL_MAT_EMISSION_BIT_PGI;
static const GLbitfield GL_MAT_COLOR_INDEXES_BIT_PGI = GLbitfield::GL_MAT_COLOR_INDEXES_BIT_PGI;
static const GLbitfield GL_MAT_SHININESS_BIT_PGI = GLbitfield::GL_MAT_SHININESS_BIT_PGI;
static const GLbitfield GL_MAT_SPECULAR_BIT_PGI = GLbitfield::GL_MAT_SPECULAR_BIT_PGI;
static const GLbitfield GL_NORMAL_BIT_PGI = GLbitfield::GL_NORMAL_BIT_PGI;
static const GLbitfield GL_TEXCOORD1_BIT_PGI = GLbitfield::GL_TEXCOORD1_BIT_PGI;
static const GLbitfield GL_TEXCOORD2_BIT_PGI = GLbitfield::GL_TEXCOORD2_BIT_PGI;
static const GLbitfield GL_TEXCOORD3_BIT_PGI = GLbitfield::GL_TEXCOORD3_BIT_PGI;
static const GLbitfield GL_TEXCOORD4_BIT_PGI = GLbitfield::GL_TEXCOORD4_BIT_PGI;

} // namespace gl

#pragma once

#include <glbinding/nogl.h>
#include <glbinding/types.h>

#include <glbinding/enum.h>


namespace gl14
{

using namespace gl;

// import enums to namespace


// AccumOp

static const GLenum GL_ACCUM = GLenum::GL_ACCUM;
static const GLenum GL_LOAD = GLenum::GL_LOAD;
static const GLenum GL_RETURN = GLenum::GL_RETURN;
static const GLenum GL_MULT = GLenum::GL_MULT;
static const GLenum GL_ADD = GLenum::GL_ADD;

// AlphaFunction

static const GLenum GL_NEVER = GLenum::GL_NEVER;
static const GLenum GL_LESS = GLenum::GL_LESS;
static const GLenum GL_EQUAL = GLenum::GL_EQUAL;
static const GLenum GL_LEQUAL = GLenum::GL_LEQUAL;
static const GLenum GL_GREATER = GLenum::GL_GREATER;
static const GLenum GL_NOTEQUAL = GLenum::GL_NOTEQUAL;
static const GLenum GL_GEQUAL = GLenum::GL_GEQUAL;
static const GLenum GL_ALWAYS = GLenum::GL_ALWAYS;

// BlendEquationModeEXT

static const GLenum GL_LOGIC_OP = GLenum::GL_LOGIC_OP;

// BlendingFactorDest

static const GLenum GL_ZERO = GLenum::GL_ZERO;
static const GLenum GL_SRC_COLOR = GLenum::GL_SRC_COLOR;
static const GLenum GL_ONE_MINUS_SRC_COLOR = GLenum::GL_ONE_MINUS_SRC_COLOR;
static const GLenum GL_SRC_ALPHA = GLenum::GL_SRC_ALPHA;
static const GLenum GL_ONE_MINUS_SRC_ALPHA = GLenum::GL_ONE_MINUS_SRC_ALPHA;
static const GLenum GL_DST_ALPHA = GLenum::GL_DST_ALPHA;
static const GLenum GL_ONE_MINUS_DST_ALPHA = GLenum::GL_ONE_MINUS_DST_ALPHA;
static const GLenum GL_ONE = GLenum::GL_ONE;

// BlendingFactorSrc

// static const GLenum GL_ZERO = GLenum::GL_ZERO; // reuse BlendingFactorDest
// static const GLenum GL_SRC_ALPHA = GLenum::GL_SRC_ALPHA; // reuse BlendingFactorDest
// static const GLenum GL_ONE_MINUS_SRC_ALPHA = GLenum::GL_ONE_MINUS_SRC_ALPHA; // reuse BlendingFactorDest
// static const GLenum GL_DST_ALPHA = GLenum::GL_DST_ALPHA; // reuse BlendingFactorDest
// static const GLenum GL_ONE_MINUS_DST_ALPHA = GLenum::GL_ONE_MINUS_DST_ALPHA; // reuse BlendingFactorDest
static const GLenum GL_DST_COLOR = GLenum::GL_DST_COLOR;
static const GLenum GL_ONE_MINUS_DST_COLOR = GLenum::GL_ONE_MINUS_DST_COLOR;
static const GLenum GL_SRC_ALPHA_SATURATE = GLenum::GL_SRC_ALPHA_SATURATE;
// static const GLenum GL_ONE = GLenum::GL_ONE; // reuse BlendingFactorDest

// ClipPlaneName

static const GLenum GL_CLIP_DISTANCE0 = GLenum::GL_CLIP_DISTANCE0;
static const GLenum GL_CLIP_PLANE0 = GLenum::GL_CLIP_PLANE0;
static const GLenum GL_CLIP_DISTANCE1 = GLenum::GL_CLIP_DISTANCE1;
static const GLenum GL_CLIP_PLANE1 = GLenum::GL_CLIP_PLANE1;
static const GLenum GL_CLIP_DISTANCE2 = GLenum::GL_CLIP_DISTANCE2;
static const GLenum GL_CLIP_PLANE2 = GLenum::GL_CLIP_PLANE2;
static const GLenum GL_CLIP_DISTANCE3 = GLenum::GL_CLIP_DISTANCE3;
static const GLenum GL_CLIP_PLANE3 = GLenum::GL_CLIP_PLANE3;
static const GLenum GL_CLIP_DISTANCE4 = GLenum::GL_CLIP_DISTANCE4;
static const GLenum GL_CLIP_PLANE4 = GLenum::GL_CLIP_PLANE4;
static const GLenum GL_CLIP_DISTANCE5 = GLenum::GL_CLIP_DISTANCE5;
static const GLenum GL_CLIP_PLANE5 = GLenum::GL_CLIP_PLANE5;

// ColorMaterialFace

static const GLenum GL_FRONT = GLenum::GL_FRONT;
static const GLenum GL_BACK = GLenum::GL_BACK;
static const GLenum GL_FRONT_AND_BACK = GLenum::GL_FRONT_AND_BACK;

// ColorMaterialParameter

static const GLenum GL_AMBIENT = GLenum::GL_AMBIENT;
static const GLenum GL_DIFFUSE = GLenum::GL_DIFFUSE;
static const GLenum GL_SPECULAR = GLenum::GL_SPECULAR;
static const GLenum GL_EMISSION = GLenum::GL_EMISSION;
static const GLenum GL_AMBIENT_AND_DIFFUSE = GLenum::GL_AMBIENT_AND_DIFFUSE;

// ColorPointerType

static const GLenum GL_BYTE = GLenum::GL_BYTE;
static const GLenum GL_UNSIGNED_BYTE = GLenum::GL_UNSIGNED_BYTE;
static const GLenum GL_SHORT = GLenum::GL_SHORT;
static const GLenum GL_UNSIGNED_SHORT = GLenum::GL_UNSIGNED_SHORT;
static const GLenum GL_INT = GLenum::GL_INT;
static const GLenum GL_UNSIGNED_INT = GLenum::GL_UNSIGNED_INT;
static const GLenum GL_FLOAT = GLenum::GL_FLOAT;
static const GLenum GL_DOUBLE = GLenum::GL_DOUBLE;

// ColorTableParameterPNameSGI



// ColorTableTargetSGI



// ConvolutionBorderModeEXT



// ConvolutionParameterEXT



// ConvolutionTargetEXT



// CullFaceMode

// static const GLenum GL_FRONT = GLenum::GL_FRONT; // reuse ColorMaterialFace
// static const GLenum GL_BACK = GLenum::GL_BACK; // reuse ColorMaterialFace
// static const GLenum GL_FRONT_AND_BACK = GLenum::GL_FRONT_AND_BACK; // reuse ColorMaterialFace

// DepthFunction

// static const GLenum GL_NEVER = GLenum::GL_NEVER; // reuse AlphaFunction
// static const GLenum GL_LESS = GLenum::GL_LESS; // reuse AlphaFunction
// static const GLenum GL_EQUAL = GLenum::GL_EQUAL; // reuse AlphaFunction
// static const GLenum GL_LEQUAL = GLenum::GL_LEQUAL; // reuse AlphaFunction
// static const GLenum GL_GREATER = GLenum::GL_GREATER; // reuse AlphaFunction
// static const GLenum GL_NOTEQUAL = GLenum::GL_NOTEQUAL; // reuse AlphaFunction
// static const GLenum GL_GEQUAL = GLenum::GL_GEQUAL; // reuse AlphaFunction
// static const GLenum GL_ALWAYS = GLenum::GL_ALWAYS; // reuse AlphaFunction

// DrawBufferMode

static const GLenum GL_NONE = GLenum::GL_NONE;
static const GLenum GL_FRONT_LEFT = GLenum::GL_FRONT_LEFT;
static const GLenum GL_FRONT_RIGHT = GLenum::GL_FRONT_RIGHT;
static const GLenum GL_BACK_LEFT = GLenum::GL_BACK_LEFT;
static const GLenum GL_BACK_RIGHT = GLenum::GL_BACK_RIGHT;
// static const GLenum GL_FRONT = GLenum::GL_FRONT; // reuse ColorMaterialFace
// static const GLenum GL_BACK = GLenum::GL_BACK; // reuse ColorMaterialFace
static const GLenum GL_LEFT = GLenum::GL_LEFT;
static const GLenum GL_RIGHT = GLenum::GL_RIGHT;
// static const GLenum GL_FRONT_AND_BACK = GLenum::GL_FRONT_AND_BACK; // reuse ColorMaterialFace
static const GLenum GL_AUX0 = GLenum::GL_AUX0;
static const GLenum GL_AUX1 = GLenum::GL_AUX1;
static const GLenum GL_AUX2 = GLenum::GL_AUX2;
static const GLenum GL_AUX3 = GLenum::GL_AUX3;

// EnableCap

static const GLenum GL_POINT_SMOOTH = GLenum::GL_POINT_SMOOTH;
static const GLenum GL_LINE_SMOOTH = GLenum::GL_LINE_SMOOTH;
static const GLenum GL_LINE_STIPPLE = GLenum::GL_LINE_STIPPLE;
static const GLenum GL_POLYGON_SMOOTH = GLenum::GL_POLYGON_SMOOTH;
static const GLenum GL_POLYGON_STIPPLE = GLenum::GL_POLYGON_STIPPLE;
static const GLenum GL_CULL_FACE = GLenum::GL_CULL_FACE;
static const GLenum GL_LIGHTING = GLenum::GL_LIGHTING;
static const GLenum GL_COLOR_MATERIAL = GLenum::GL_COLOR_MATERIAL;
static const GLenum GL_FOG = GLenum::GL_FOG;
static const GLenum GL_DEPTH_TEST = GLenum::GL_DEPTH_TEST;
static const GLenum GL_STENCIL_TEST = GLenum::GL_STENCIL_TEST;
static const GLenum GL_NORMALIZE = GLenum::GL_NORMALIZE;
static const GLenum GL_ALPHA_TEST = GLenum::GL_ALPHA_TEST;
static const GLenum GL_DITHER = GLenum::GL_DITHER;
static const GLenum GL_BLEND = GLenum::GL_BLEND;
static const GLenum GL_INDEX_LOGIC_OP = GLenum::GL_INDEX_LOGIC_OP;
static const GLenum GL_COLOR_LOGIC_OP = GLenum::GL_COLOR_LOGIC_OP;
static const GLenum GL_SCISSOR_TEST = GLenum::GL_SCISSOR_TEST;
static const GLenum GL_TEXTURE_GEN_S = GLenum::GL_TEXTURE_GEN_S;
static const GLenum GL_TEXTURE_GEN_T = GLenum::GL_TEXTURE_GEN_T;
static const GLenum GL_TEXTURE_GEN_R = GLenum::GL_TEXTURE_GEN_R;
static const GLenum GL_TEXTURE_GEN_Q = GLenum::GL_TEXTURE_GEN_Q;
static const GLenum GL_AUTO_NORMAL = GLenum::GL_AUTO_NORMAL;
static const GLenum GL_MAP1_COLOR_4 = GLenum::GL_MAP1_COLOR_4;
static const GLenum GL_MAP1_INDEX = GLenum::GL_MAP1_INDEX;
static const GLenum GL_MAP1_NORMAL = GLenum::GL_MAP1_NORMAL;
static const GLenum GL_MAP1_TEXTURE_COORD_1 = GLenum::GL_MAP1_TEXTURE_COORD_1;
static const GLenum GL_MAP1_TEXTURE_COORD_2 = GLenum::GL_MAP1_TEXTURE_COORD_2;
static const GLenum GL_MAP1_TEXTURE_COORD_3 = GLenum::GL_MAP1_TEXTURE_COORD_3;
static const GLenum GL_MAP1_TEXTURE_COORD_4 = GLenum::GL_MAP1_TEXTURE_COORD_4;
static const GLenum GL_MAP1_VERTEX_3 = GLenum::GL_MAP1_VERTEX_3;
static const GLenum GL_MAP1_VERTEX_4 = GLenum::GL_MAP1_VERTEX_4;
static const GLenum GL_MAP2_COLOR_4 = GLenum::GL_MAP2_COLOR_4;
static const GLenum GL_MAP2_INDEX = GLenum::GL_MAP2_INDEX;
static const GLenum GL_MAP2_NORMAL = GLenum::GL_MAP2_NORMAL;
static const GLenum GL_MAP2_TEXTURE_COORD_1 = GLenum::GL_MAP2_TEXTURE_COORD_1;
static const GLenum GL_MAP2_TEXTURE_COORD_2 = GLenum::GL_MAP2_TEXTURE_COORD_2;
static const GLenum GL_MAP2_TEXTURE_COORD_3 = GLenum::GL_MAP2_TEXTURE_COORD_3;
static const GLenum GL_MAP2_TEXTURE_COORD_4 = GLenum::GL_MAP2_TEXTURE_COORD_4;
static const GLenum GL_MAP2_VERTEX_3 = GLenum::GL_MAP2_VERTEX_3;
static const GLenum GL_MAP2_VERTEX_4 = GLenum::GL_MAP2_VERTEX_4;
static const GLenum GL_TEXTURE_1D = GLenum::GL_TEXTURE_1D;
static const GLenum GL_TEXTURE_2D = GLenum::GL_TEXTURE_2D;
static const GLenum GL_POLYGON_OFFSET_POINT = GLenum::GL_POLYGON_OFFSET_POINT;
static const GLenum GL_POLYGON_OFFSET_LINE = GLenum::GL_POLYGON_OFFSET_LINE;
// static const GLenum GL_CLIP_PLANE0 = GLenum::GL_CLIP_PLANE0; // reuse ClipPlaneName
// static const GLenum GL_CLIP_PLANE1 = GLenum::GL_CLIP_PLANE1; // reuse ClipPlaneName
// static const GLenum GL_CLIP_PLANE2 = GLenum::GL_CLIP_PLANE2; // reuse ClipPlaneName
// static const GLenum GL_CLIP_PLANE3 = GLenum::GL_CLIP_PLANE3; // reuse ClipPlaneName
// static const GLenum GL_CLIP_PLANE4 = GLenum::GL_CLIP_PLANE4; // reuse ClipPlaneName
// static const GLenum GL_CLIP_PLANE5 = GLenum::GL_CLIP_PLANE5; // reuse ClipPlaneName
static const GLenum GL_LIGHT0 = GLenum::GL_LIGHT0;
static const GLenum GL_LIGHT1 = GLenum::GL_LIGHT1;
static const GLenum GL_LIGHT2 = GLenum::GL_LIGHT2;
static const GLenum GL_LIGHT3 = GLenum::GL_LIGHT3;
static const GLenum GL_LIGHT4 = GLenum::GL_LIGHT4;
static const GLenum GL_LIGHT5 = GLenum::GL_LIGHT5;
static const GLenum GL_LIGHT6 = GLenum::GL_LIGHT6;
static const GLenum GL_LIGHT7 = GLenum::GL_LIGHT7;
static const GLenum GL_POLYGON_OFFSET_FILL = GLenum::GL_POLYGON_OFFSET_FILL;
static const GLenum GL_VERTEX_ARRAY = GLenum::GL_VERTEX_ARRAY;
static const GLenum GL_NORMAL_ARRAY = GLenum::GL_NORMAL_ARRAY;
static const GLenum GL_COLOR_ARRAY = GLenum::GL_COLOR_ARRAY;
static const GLenum GL_INDEX_ARRAY = GLenum::GL_INDEX_ARRAY;
static const GLenum GL_TEXTURE_COORD_ARRAY = GLenum::GL_TEXTURE_COORD_ARRAY;
static const GLenum GL_EDGE_FLAG_ARRAY = GLenum::GL_EDGE_FLAG_ARRAY;

// ErrorCode

static const GLenum GL_NO_ERROR = GLenum::GL_NO_ERROR;
static const GLenum GL_INVALID_ENUM = GLenum::GL_INVALID_ENUM;
static const GLenum GL_INVALID_VALUE = GLenum::GL_INVALID_VALUE;
static const GLenum GL_INVALID_OPERATION = GLenum::GL_INVALID_OPERATION;
static const GLenum GL_STACK_OVERFLOW = GLenum::GL_STACK_OVERFLOW;
static const GLenum GL_STACK_UNDERFLOW = GLenum::GL_STACK_UNDERFLOW;
static const GLenum GL_OUT_OF_MEMORY = GLenum::GL_OUT_OF_MEMORY;

// FeedBackToken

static const GLenum GL_PASS_THROUGH_TOKEN = GLenum::GL_PASS_THROUGH_TOKEN;
static const GLenum GL_POINT_TOKEN = GLenum::GL_POINT_TOKEN;
static const GLenum GL_LINE_TOKEN = GLenum::GL_LINE_TOKEN;
static const GLenum GL_POLYGON_TOKEN = GLenum::GL_POLYGON_TOKEN;
static const GLenum GL_BITMAP_TOKEN = GLenum::GL_BITMAP_TOKEN;
static const GLenum GL_DRAW_PIXEL_TOKEN = GLenum::GL_DRAW_PIXEL_TOKEN;
static const GLenum GL_COPY_PIXEL_TOKEN = GLenum::GL_COPY_PIXEL_TOKEN;
static const GLenum GL_LINE_RESET_TOKEN = GLenum::GL_LINE_RESET_TOKEN;

// FeedbackType

static const GLenum GL_2D = GLenum::GL_2D;
static const GLenum GL_3D = GLenum::GL_3D;
static const GLenum GL_3D_COLOR = GLenum::GL_3D_COLOR;
static const GLenum GL_3D_COLOR_TEXTURE = GLenum::GL_3D_COLOR_TEXTURE;
static const GLenum GL_4D_COLOR_TEXTURE = GLenum::GL_4D_COLOR_TEXTURE;

// FfdTargetSGIX



// FogCoordinatePointerType

// static const GLenum GL_FLOAT = GLenum::GL_FLOAT; // reuse ColorPointerType
// static const GLenum GL_DOUBLE = GLenum::GL_DOUBLE; // reuse ColorPointerType

// FogMode

static const GLenum GL_EXP = GLenum::GL_EXP;
static const GLenum GL_EXP2 = GLenum::GL_EXP2;
static const GLenum GL_LINEAR = GLenum::GL_LINEAR;

// FogParameter

static const GLenum GL_FOG_INDEX = GLenum::GL_FOG_INDEX;
static const GLenum GL_FOG_DENSITY = GLenum::GL_FOG_DENSITY;
static const GLenum GL_FOG_START = GLenum::GL_FOG_START;
static const GLenum GL_FOG_END = GLenum::GL_FOG_END;
static const GLenum GL_FOG_MODE = GLenum::GL_FOG_MODE;
static const GLenum GL_FOG_COLOR = GLenum::GL_FOG_COLOR;

// FogPointerTypeEXT

// static const GLenum GL_FLOAT = GLenum::GL_FLOAT; // reuse ColorPointerType
// static const GLenum GL_DOUBLE = GLenum::GL_DOUBLE; // reuse ColorPointerType

// FogPointerTypeIBM

// static const GLenum GL_FLOAT = GLenum::GL_FLOAT; // reuse ColorPointerType
// static const GLenum GL_DOUBLE = GLenum::GL_DOUBLE; // reuse ColorPointerType

// FragmentLightModelParameterSGIX



// FrontFaceDirection

static const GLenum GL_CW = GLenum::GL_CW;
static const GLenum GL_CCW = GLenum::GL_CCW;

// GetColorTableParameterPNameSGI



// GetConvolutionParameter



// GetHistogramParameterPNameEXT



// GetMapQuery

static const GLenum GL_COEFF = GLenum::GL_COEFF;
static const GLenum GL_ORDER = GLenum::GL_ORDER;
static const GLenum GL_DOMAIN = GLenum::GL_DOMAIN;

// GetMinmaxParameterPNameEXT



// GetPName

static const GLenum GL_CURRENT_COLOR = GLenum::GL_CURRENT_COLOR;
static const GLenum GL_CURRENT_INDEX = GLenum::GL_CURRENT_INDEX;
static const GLenum GL_CURRENT_NORMAL = GLenum::GL_CURRENT_NORMAL;
static const GLenum GL_CURRENT_TEXTURE_COORDS = GLenum::GL_CURRENT_TEXTURE_COORDS;
static const GLenum GL_CURRENT_RASTER_COLOR = GLenum::GL_CURRENT_RASTER_COLOR;
static const GLenum GL_CURRENT_RASTER_INDEX = GLenum::GL_CURRENT_RASTER_INDEX;
static const GLenum GL_CURRENT_RASTER_TEXTURE_COORDS = GLenum::GL_CURRENT_RASTER_TEXTURE_COORDS;
static const GLenum GL_CURRENT_RASTER_POSITION = GLenum::GL_CURRENT_RASTER_POSITION;
static const GLenum GL_CURRENT_RASTER_POSITION_VALID = GLenum::GL_CURRENT_RASTER_POSITION_VALID;
static const GLenum GL_CURRENT_RASTER_DISTANCE = GLenum::GL_CURRENT_RASTER_DISTANCE;
// static const GLenum GL_POINT_SMOOTH = GLenum::GL_POINT_SMOOTH; // reuse EnableCap
static const GLenum GL_POINT_SIZE = GLenum::GL_POINT_SIZE;
static const GLenum GL_POINT_SIZE_RANGE = GLenum::GL_POINT_SIZE_RANGE;
static const GLenum GL_SMOOTH_POINT_SIZE_RANGE = GLenum::GL_SMOOTH_POINT_SIZE_RANGE;
static const GLenum GL_POINT_SIZE_GRANULARITY = GLenum::GL_POINT_SIZE_GRANULARITY;
static const GLenum GL_SMOOTH_POINT_SIZE_GRANULARITY = GLenum::GL_SMOOTH_POINT_SIZE_GRANULARITY;
// static const GLenum GL_LINE_SMOOTH = GLenum::GL_LINE_SMOOTH; // reuse EnableCap
static const GLenum GL_LINE_WIDTH = GLenum::GL_LINE_WIDTH;
static const GLenum GL_LINE_WIDTH_RANGE = GLenum::GL_LINE_WIDTH_RANGE;
static const GLenum GL_SMOOTH_LINE_WIDTH_RANGE = GLenum::GL_SMOOTH_LINE_WIDTH_RANGE;
static const GLenum GL_LINE_WIDTH_GRANULARITY = GLenum::GL_LINE_WIDTH_GRANULARITY;
static const GLenum GL_SMOOTH_LINE_WIDTH_GRANULARITY = GLenum::GL_SMOOTH_LINE_WIDTH_GRANULARITY;
// static const GLenum GL_LINE_STIPPLE = GLenum::GL_LINE_STIPPLE; // reuse EnableCap
static const GLenum GL_LINE_STIPPLE_PATTERN = GLenum::GL_LINE_STIPPLE_PATTERN;
static const GLenum GL_LINE_STIPPLE_REPEAT = GLenum::GL_LINE_STIPPLE_REPEAT;
static const GLenum GL_LIST_MODE = GLenum::GL_LIST_MODE;
static const GLenum GL_MAX_LIST_NESTING = GLenum::GL_MAX_LIST_NESTING;
static const GLenum GL_LIST_BASE = GLenum::GL_LIST_BASE;
static const GLenum GL_LIST_INDEX = GLenum::GL_LIST_INDEX;
static const GLenum GL_POLYGON_MODE = GLenum::GL_POLYGON_MODE;
// static const GLenum GL_POLYGON_SMOOTH = GLenum::GL_POLYGON_SMOOTH; // reuse EnableCap
// static const GLenum GL_POLYGON_STIPPLE = GLenum::GL_POLYGON_STIPPLE; // reuse EnableCap
static const GLenum GL_EDGE_FLAG = GLenum::GL_EDGE_FLAG;
// static const GLenum GL_CULL_FACE = GLenum::GL_CULL_FACE; // reuse EnableCap
static const GLenum GL_CULL_FACE_MODE = GLenum::GL_CULL_FACE_MODE;
static const GLenum GL_FRONT_FACE = GLenum::GL_FRONT_FACE;
// static const GLenum GL_LIGHTING = GLenum::GL_LIGHTING; // reuse EnableCap
static const GLenum GL_LIGHT_MODEL_LOCAL_VIEWER = GLenum::GL_LIGHT_MODEL_LOCAL_VIEWER;
static const GLenum GL_LIGHT_MODEL_TWO_SIDE = GLenum::GL_LIGHT_MODEL_TWO_SIDE;
static const GLenum GL_LIGHT_MODEL_AMBIENT = GLenum::GL_LIGHT_MODEL_AMBIENT;
static const GLenum GL_SHADE_MODEL = GLenum::GL_SHADE_MODEL;
static const GLenum GL_COLOR_MATERIAL_FACE = GLenum::GL_COLOR_MATERIAL_FACE;
static const GLenum GL_COLOR_MATERIAL_PARAMETER = GLenum::GL_COLOR_MATERIAL_PARAMETER;
// static const GLenum GL_COLOR_MATERIAL = GLenum::GL_COLOR_MATERIAL; // reuse EnableCap
// static const GLenum GL_FOG = GLenum::GL_FOG; // reuse EnableCap
// static const GLenum GL_FOG_INDEX = GLenum::GL_FOG_INDEX; // reuse FogParameter
// static const GLenum GL_FOG_DENSITY = GLenum::GL_FOG_DENSITY; // reuse FogParameter
// static const GLenum GL_FOG_START = GLenum::GL_FOG_START; // reuse FogParameter
// static const GLenum GL_FOG_END = GLenum::GL_FOG_END; // reuse FogParameter
// static const GLenum GL_FOG_MODE = GLenum::GL_FOG_MODE; // reuse FogParameter
// static const GLenum GL_FOG_COLOR = GLenum::GL_FOG_COLOR; // reuse FogParameter
static const GLenum GL_DEPTH_RANGE = GLenum::GL_DEPTH_RANGE;
// static const GLenum GL_DEPTH_TEST = GLenum::GL_DEPTH_TEST; // reuse EnableCap
static const GLenum GL_DEPTH_WRITEMASK = GLenum::GL_DEPTH_WRITEMASK;
static const GLenum GL_DEPTH_CLEAR_VALUE = GLenum::GL_DEPTH_CLEAR_VALUE;
static const GLenum GL_DEPTH_FUNC = GLenum::GL_DEPTH_FUNC;
static const GLenum GL_ACCUM_CLEAR_VALUE = GLenum::GL_ACCUM_CLEAR_VALUE;
// static const GLenum GL_STENCIL_TEST = GLenum::GL_STENCIL_TEST; // reuse EnableCap
static const GLenum GL_STENCIL_CLEAR_VALUE = GLenum::GL_STENCIL_CLEAR_VALUE;
static const GLenum GL_STENCIL_FUNC = GLenum::GL_STENCIL_FUNC;
static const GLenum GL_STENCIL_VALUE_MASK = GLenum::GL_STENCIL_VALUE_MASK;
static const GLenum GL_STENCIL_FAIL = GLenum::GL_STENCIL_FAIL;
static const GLenum GL_STENCIL_PASS_DEPTH_FAIL = GLenum::GL_STENCIL_PASS_DEPTH_FAIL;
static const GLenum GL_STENCIL_PASS_DEPTH_PASS = GLenum::GL_STENCIL_PASS_DEPTH_PASS;
static const GLenum GL_STENCIL_REF = GLenum::GL_STENCIL_REF;
static const GLenum GL_STENCIL_WRITEMASK = GLenum::GL_STENCIL_WRITEMASK;
static const GLenum GL_MATRIX_MODE = GLenum::GL_MATRIX_MODE;
// static const GLenum GL_NORMALIZE = GLenum::GL_NORMALIZE; // reuse EnableCap
static const GLenum GL_VIEWPORT = GLenum::GL_VIEWPORT;
static const GLenum GL_MODELVIEW_STACK_DEPTH = GLenum::GL_MODELVIEW_STACK_DEPTH;
static const GLenum GL_PROJECTION_STACK_DEPTH = GLenum::GL_PROJECTION_STACK_DEPTH;
static const GLenum GL_TEXTURE_STACK_DEPTH = GLenum::GL_TEXTURE_STACK_DEPTH;
static const GLenum GL_MODELVIEW_MATRIX = GLenum::GL_MODELVIEW_MATRIX;
static const GLenum GL_PROJECTION_MATRIX = GLenum::GL_PROJECTION_MATRIX;
static const GLenum GL_TEXTURE_MATRIX = GLenum::GL_TEXTURE_MATRIX;
static const GLenum GL_ATTRIB_STACK_DEPTH = GLenum::GL_ATTRIB_STACK_DEPTH;
static const GLenum GL_CLIENT_ATTRIB_STACK_DEPTH = GLenum::GL_CLIENT_ATTRIB_STACK_DEPTH;
// static const GLenum GL_ALPHA_TEST = GLenum::GL_ALPHA_TEST; // reuse EnableCap
static const GLenum GL_ALPHA_TEST_FUNC = GLenum::GL_ALPHA_TEST_FUNC;
static const GLenum GL_ALPHA_TEST_REF = GLenum::GL_ALPHA_TEST_REF;
// static const GLenum GL_DITHER = GLenum::GL_DITHER; // reuse EnableCap
static const GLenum GL_BLEND_DST = GLenum::GL_BLEND_DST;
static const GLenum GL_BLEND_SRC = GLenum::GL_BLEND_SRC;
// static const GLenum GL_BLEND = GLenum::GL_BLEND; // reuse EnableCap
static const GLenum GL_LOGIC_OP_MODE = GLenum::GL_LOGIC_OP_MODE;
// static const GLenum GL_INDEX_LOGIC_OP = GLenum::GL_INDEX_LOGIC_OP; // reuse EnableCap
// static const GLenum GL_LOGIC_OP = GLenum::GL_LOGIC_OP; // reuse BlendEquationModeEXT
// static const GLenum GL_COLOR_LOGIC_OP = GLenum::GL_COLOR_LOGIC_OP; // reuse EnableCap
static const GLenum GL_AUX_BUFFERS = GLenum::GL_AUX_BUFFERS;
static const GLenum GL_DRAW_BUFFER = GLenum::GL_DRAW_BUFFER;
static const GLenum GL_READ_BUFFER = GLenum::GL_READ_BUFFER;
static const GLenum GL_SCISSOR_BOX = GLenum::GL_SCISSOR_BOX;
// static const GLenum GL_SCISSOR_TEST = GLenum::GL_SCISSOR_TEST; // reuse EnableCap
static const GLenum GL_INDEX_CLEAR_VALUE = GLenum::GL_INDEX_CLEAR_VALUE;
static const GLenum GL_INDEX_WRITEMASK = GLenum::GL_INDEX_WRITEMASK;
static const GLenum GL_COLOR_CLEAR_VALUE = GLenum::GL_COLOR_CLEAR_VALUE;
static const GLenum GL_COLOR_WRITEMASK = GLenum::GL_COLOR_WRITEMASK;
static const GLenum GL_INDEX_MODE = GLenum::GL_INDEX_MODE;
static const GLenum GL_RGBA_MODE = GLenum::GL_RGBA_MODE;
static const GLenum GL_DOUBLEBUFFER = GLenum::GL_DOUBLEBUFFER;
static const GLenum GL_STEREO = GLenum::GL_STEREO;
static const GLenum GL_RENDER_MODE = GLenum::GL_RENDER_MODE;
static const GLenum GL_PERSPECTIVE_CORRECTION_HINT = GLenum::GL_PERSPECTIVE_CORRECTION_HINT;
static const GLenum GL_POINT_SMOOTH_HINT = GLenum::GL_POINT_SMOOTH_HINT;
static const GLenum GL_LINE_SMOOTH_HINT = GLenum::GL_LINE_SMOOTH_HINT;
static const GLenum GL_POLYGON_SMOOTH_HINT = GLenum::GL_POLYGON_SMOOTH_HINT;
static const GLenum GL_FOG_HINT = GLenum::GL_FOG_HINT;
// static const GLenum GL_TEXTURE_GEN_S = GLenum::GL_TEXTURE_GEN_S; // reuse EnableCap
// static const GLenum GL_TEXTURE_GEN_T = GLenum::GL_TEXTURE_GEN_T; // reuse EnableCap
// static const GLenum GL_TEXTURE_GEN_R = GLenum::GL_TEXTURE_GEN_R; // reuse EnableCap
// static const GLenum GL_TEXTURE_GEN_Q = GLenum::GL_TEXTURE_GEN_Q; // reuse EnableCap
static const GLenum GL_PIXEL_MAP_I_TO_I_SIZE = GLenum::GL_PIXEL_MAP_I_TO_I_SIZE;
static const GLenum GL_PIXEL_MAP_S_TO_S_SIZE = GLenum::GL_PIXEL_MAP_S_TO_S_SIZE;
static const GLenum GL_PIXEL_MAP_I_TO_R_SIZE = GLenum::GL_PIXEL_MAP_I_TO_R_SIZE;
static const GLenum GL_PIXEL_MAP_I_TO_G_SIZE = GLenum::GL_PIXEL_MAP_I_TO_G_SIZE;
static const GLenum GL_PIXEL_MAP_I_TO_B_SIZE = GLenum::GL_PIXEL_MAP_I_TO_B_SIZE;
static const GLenum GL_PIXEL_MAP_I_TO_A_SIZE = GLenum::GL_PIXEL_MAP_I_TO_A_SIZE;
static const GLenum GL_PIXEL_MAP_R_TO_R_SIZE = GLenum::GL_PIXEL_MAP_R_TO_R_SIZE;
static const GLenum GL_PIXEL_MAP_G_TO_G_SIZE = GLenum::GL_PIXEL_MAP_G_TO_G_SIZE;
static const GLenum GL_PIXEL_MAP_B_TO_B_SIZE = GLenum::GL_PIXEL_MAP_B_TO_B_SIZE;
static const GLenum GL_PIXEL_MAP_A_TO_A_SIZE = GLenum::GL_PIXEL_MAP_A_TO_A_SIZE;
static const GLenum GL_UNPACK_SWAP_BYTES = GLenum::GL_UNPACK_SWAP_BYTES;
static const GLenum GL_UNPACK_LSB_FIRST = GLenum::GL_UNPACK_LSB_FIRST;
static const GLenum GL_UNPACK_ROW_LENGTH = GLenum::GL_UNPACK_ROW_LENGTH;
static const GLenum GL_UNPACK_SKIP_ROWS = GLenum::GL_UNPACK_SKIP_ROWS;
static const GLenum GL_UNPACK_SKIP_PIXELS = GLenum::GL_UNPACK_SKIP_PIXELS;
static const GLenum GL_UNPACK_ALIGNMENT = GLenum::GL_UNPACK_ALIGNMENT;
static const GLenum GL_PACK_SWAP_BYTES = GLenum::GL_PACK_SWAP_BYTES;
static const GLenum GL_PACK_LSB_FIRST = GLenum::GL_PACK_LSB_FIRST;
static const GLenum GL_PACK_ROW_LENGTH = GLenum::GL_PACK_ROW_LENGTH;
static const GLenum GL_PACK_SKIP_ROWS = GLenum::GL_PACK_SKIP_ROWS;
static const GLenum GL_PACK_SKIP_PIXELS = GLenum::GL_PACK_SKIP_PIXELS;
static const GLenum GL_PACK_ALIGNMENT = GLenum::GL_PACK_ALIGNMENT;
static const GLenum GL_MAP_COLOR = GLenum::GL_MAP_COLOR;
static const GLenum GL_MAP_STENCIL = GLenum::GL_MAP_STENCIL;
static const GLenum GL_INDEX_SHIFT = GLenum::GL_INDEX_SHIFT;
static const GLenum GL_INDEX_OFFSET = GLenum::GL_INDEX_OFFSET;
static const GLenum GL_RED_SCALE = GLenum::GL_RED_SCALE;
static const GLenum GL_RED_BIAS = GLenum::GL_RED_BIAS;
static const GLenum GL_ZOOM_X = GLenum::GL_ZOOM_X;
static const GLenum GL_ZOOM_Y = GLenum::GL_ZOOM_Y;
static const GLenum GL_GREEN_SCALE = GLenum::GL_GREEN_SCALE;
static const GLenum GL_GREEN_BIAS = GLenum::GL_GREEN_BIAS;
static const GLenum GL_BLUE_SCALE = GLenum::GL_BLUE_SCALE;
static const GLenum GL_BLUE_BIAS = GLenum::GL_BLUE_BIAS;
static const GLenum GL_ALPHA_SCALE = GLenum::GL_ALPHA_SCALE;
static const GLenum GL_ALPHA_BIAS = GLenum::GL_ALPHA_BIAS;
static const GLenum GL_DEPTH_SCALE = GLenum::GL_DEPTH_SCALE;
static const GLenum GL_DEPTH_BIAS = GLenum::GL_DEPTH_BIAS;
static const GLenum GL_MAX_EVAL_ORDER = GLenum::GL_MAX_EVAL_ORDER;
static const GLenum GL_MAX_LIGHTS = GLenum::GL_MAX_LIGHTS;
static const GLenum GL_MAX_CLIP_DISTANCES = GLenum::GL_MAX_CLIP_DISTANCES;
static const GLenum GL_MAX_CLIP_PLANES = GLenum::GL_MAX_CLIP_PLANES;
static const GLenum GL_MAX_TEXTURE_SIZE = GLenum::GL_MAX_TEXTURE_SIZE;
static const GLenum GL_MAX_PIXEL_MAP_TABLE = GLenum::GL_MAX_PIXEL_MAP_TABLE;
static const GLenum GL_MAX_ATTRIB_STACK_DEPTH = GLenum::GL_MAX_ATTRIB_STACK_DEPTH;
static const GLenum GL_MAX_MODELVIEW_STACK_DEPTH = GLenum::GL_MAX_MODELVIEW_STACK_DEPTH;
static const GLenum GL_MAX_NAME_STACK_DEPTH = GLenum::GL_MAX_NAME_STACK_DEPTH;
static const GLenum GL_MAX_PROJECTION_STACK_DEPTH = GLenum::GL_MAX_PROJECTION_STACK_DEPTH;
static const GLenum GL_MAX_TEXTURE_STACK_DEPTH = GLenum::GL_MAX_TEXTURE_STACK_DEPTH;
static const GLenum GL_MAX_VIEWPORT_DIMS = GLenum::GL_MAX_VIEWPORT_DIMS;
static const GLenum GL_MAX_CLIENT_ATTRIB_STACK_DEPTH = GLenum::GL_MAX_CLIENT_ATTRIB_STACK_DEPTH;
static const GLenum GL_SUBPIXEL_BITS = GLenum::GL_SUBPIXEL_BITS;
static const GLenum GL_INDEX_BITS = GLenum::GL_INDEX_BITS;
static const GLenum GL_RED_BITS = GLenum::GL_RED_BITS;
static const GLenum GL_GREEN_BITS = GLenum::GL_GREEN_BITS;
static const GLenum GL_BLUE_BITS = GLenum::GL_BLUE_BITS;
static const GLenum GL_ALPHA_BITS = GLenum::GL_ALPHA_BITS;
static const GLenum GL_DEPTH_BITS = GLenum::GL_DEPTH_BITS;
static const GLenum GL_STENCIL_BITS = GLenum::GL_STENCIL_BITS;
static const GLenum GL_ACCUM_RED_BITS = GLenum::GL_ACCUM_RED_BITS;
static const GLenum GL_ACCUM_GREEN_BITS = GLenum::GL_ACCUM_GREEN_BITS;
static const GLenum GL_ACCUM_BLUE_BITS = GLenum::GL_ACCUM_BLUE_BITS;
static const GLenum GL_ACCUM_ALPHA_BITS = GLenum::GL_ACCUM_ALPHA_BITS;
static const GLenum GL_NAME_STACK_DEPTH = GLenum::GL_NAME_STACK_DEPTH;
// static const GLenum GL_AUTO_NORMAL = GLenum::GL_AUTO_NORMAL; // reuse EnableCap
// static const GLenum GL_MAP1_COLOR_4 = GLenum::GL_MAP1_COLOR_4; // reuse EnableCap
// static const GLenum GL_MAP1_INDEX = GLenum::GL_MAP1_INDEX; // reuse EnableCap
// static const GLenum GL_MAP1_NORMAL = GLenum::GL_MAP1_NORMAL; // reuse EnableCap
// static const GLenum GL_MAP1_TEXTURE_COORD_1 = GLenum::GL_MAP1_TEXTURE_COORD_1; // reuse EnableCap
// static const GLenum GL_MAP1_TEXTURE_COORD_2 = GLenum::GL_MAP1_TEXTURE_COORD_2; // reuse EnableCap
// static const GLenum GL_MAP1_TEXTURE_COORD_3 = GLenum::GL_MAP1_TEXTURE_COORD_3; // reuse EnableCap
// static const GLenum GL_MAP1_TEXTURE_COORD_4 = GLenum::GL_MAP1_TEXTURE_COORD_4; // reuse EnableCap
// static const GLenum GL_MAP1_VERTEX_3 = GLenum::GL_MAP1_VERTEX_3; // reuse EnableCap
// static const GLenum GL_MAP1_VERTEX_4 = GLenum::GL_MAP1_VERTEX_4; // reuse EnableCap
// static const GLenum GL_MAP2_COLOR_4 = GLenum::GL_MAP2_COLOR_4; // reuse EnableCap
// static const GLenum GL_MAP2_INDEX = GLenum::GL_MAP2_INDEX; // reuse EnableCap
// static const GLenum GL_MAP2_NORMAL = GLenum::GL_MAP2_NORMAL; // reuse EnableCap
// static const GLenum GL_MAP2_TEXTURE_COORD_1 = GLenum::GL_MAP2_TEXTURE_COORD_1; // reuse EnableCap
// static const GLenum GL_MAP2_TEXTURE_COORD_2 = GLenum::GL_MAP2_TEXTURE_COORD_2; // reuse EnableCap
// static const GLenum GL_MAP2_TEXTURE_COORD_3 = GLenum::GL_MAP2_TEXTURE_COORD_3; // reuse EnableCap
// static const GLenum GL_MAP2_TEXTURE_COORD_4 = GLenum::GL_MAP2_TEXTURE_COORD_4; // reuse EnableCap
// static const GLenum GL_MAP2_VERTEX_3 = GLenum::GL_MAP2_VERTEX_3; // reuse EnableCap
// static const GLenum GL_MAP2_VERTEX_4 = GLenum::GL_MAP2_VERTEX_4; // reuse EnableCap
static const GLenum GL_MAP1_GRID_DOMAIN = GLenum::GL_MAP1_GRID_DOMAIN;
static const GLenum GL_MAP1_GRID_SEGMENTS = GLenum::GL_MAP1_GRID_SEGMENTS;
static const GLenum GL_MAP2_GRID_DOMAIN = GLenum::GL_MAP2_GRID_DOMAIN;
static const GLenum GL_MAP2_GRID_SEGMENTS = GLenum::GL_MAP2_GRID_SEGMENTS;
// static const GLenum GL_TEXTURE_1D = GLenum::GL_TEXTURE_1D; // reuse EnableCap
// static const GLenum GL_TEXTURE_2D = GLenum::GL_TEXTURE_2D; // reuse EnableCap
static const GLenum GL_FEEDBACK_BUFFER_SIZE = GLenum::GL_FEEDBACK_BUFFER_SIZE;
static const GLenum GL_FEEDBACK_BUFFER_TYPE = GLenum::GL_FEEDBACK_BUFFER_TYPE;
static const GLenum GL_SELECTION_BUFFER_SIZE = GLenum::GL_SELECTION_BUFFER_SIZE;
static const GLenum GL_POLYGON_OFFSET_UNITS = GLenum::GL_POLYGON_OFFSET_UNITS;
// static const GLenum GL_POLYGON_OFFSET_POINT = GLenum::GL_POLYGON_OFFSET_POINT; // reuse EnableCap
// static const GLenum GL_POLYGON_OFFSET_LINE = GLenum::GL_POLYGON_OFFSET_LINE; // reuse EnableCap
// static const GLenum GL_CLIP_PLANE0 = GLenum::GL_CLIP_PLANE0; // reuse ClipPlaneName
// static const GLenum GL_CLIP_PLANE1 = GLenum::GL_CLIP_PLANE1; // reuse ClipPlaneName
// static const GLenum GL_CLIP_PLANE2 = GLenum::GL_CLIP_PLANE2; // reuse ClipPlaneName
// static const GLenum GL_CLIP_PLANE3 = GLenum::GL_CLIP_PLANE3; // reuse ClipPlaneName
// static const GLenum GL_CLIP_PLANE4 = GLenum::GL_CLIP_PLANE4; // reuse ClipPlaneName
// static const GLenum GL_CLIP_PLANE5 = GLenum::GL_CLIP_PLANE5; // reuse ClipPlaneName
// static const GLenum GL_LIGHT0 = GLenum::GL_LIGHT0; // reuse EnableCap
// static const GLenum GL_LIGHT1 = GLenum::GL_LIGHT1; // reuse EnableCap
// static const GLenum GL_LIGHT2 = GLenum::GL_LIGHT2; // reuse EnableCap
// static const GLenum GL_LIGHT3 = GLenum::GL_LIGHT3; // reuse EnableCap
// static const GLenum GL_LIGHT4 = GLenum::GL_LIGHT4; // reuse EnableCap
// static const GLenum GL_LIGHT5 = GLenum::GL_LIGHT5; // reuse EnableCap
// static const GLenum GL_LIGHT6 = GLenum::GL_LIGHT6; // reuse EnableCap
// static const GLenum GL_LIGHT7 = GLenum::GL_LIGHT7; // reuse EnableCap
// static const GLenum GL_POLYGON_OFFSET_FILL = GLenum::GL_POLYGON_OFFSET_FILL; // reuse EnableCap
static const GLenum GL_POLYGON_OFFSET_FACTOR = GLenum::GL_POLYGON_OFFSET_FACTOR;
static const GLenum GL_TEXTURE_BINDING_1D = GLenum::GL_TEXTURE_BINDING_1D;
static const GLenum GL_TEXTURE_BINDING_2D = GLenum::GL_TEXTURE_BINDING_2D;
static const GLenum GL_TEXTURE_BINDING_3D = GLenum::GL_TEXTURE_BINDING_3D;
// static const GLenum GL_VERTEX_ARRAY = GLenum::GL_VERTEX_ARRAY; // reuse EnableCap
// static const GLenum GL_NORMAL_ARRAY = GLenum::GL_NORMAL_ARRAY; // reuse EnableCap
// static const GLenum GL_COLOR_ARRAY = GLenum::GL_COLOR_ARRAY; // reuse EnableCap
// static const GLenum GL_INDEX_ARRAY = GLenum::GL_INDEX_ARRAY; // reuse EnableCap
// static const GLenum GL_TEXTURE_COORD_ARRAY = GLenum::GL_TEXTURE_COORD_ARRAY; // reuse EnableCap
// static const GLenum GL_EDGE_FLAG_ARRAY = GLenum::GL_EDGE_FLAG_ARRAY; // reuse EnableCap
static const GLenum GL_VERTEX_ARRAY_SIZE = GLenum::GL_VERTEX_ARRAY_SIZE;
static const GLenum GL_VERTEX_ARRAY_TYPE = GLenum::GL_VERTEX_ARRAY_TYPE;
static const GLenum GL_VERTEX_ARRAY_STRIDE = GLenum::GL_VERTEX_ARRAY_STRIDE;
static const GLenum GL_NORMAL_ARRAY_TYPE = GLenum::GL_NORMAL_ARRAY_TYPE;
static const GLenum GL_NORMAL_ARRAY_STRIDE = GLenum::GL_NORMAL_ARRAY_STRIDE;
static const GLenum GL_COLOR_ARRAY_SIZE = GLenum::GL_COLOR_ARRAY_SIZE;
static const GLenum GL_COLOR_ARRAY_TYPE = GLenum::GL_COLOR_ARRAY_TYPE;
static const GLenum GL_COLOR_ARRAY_STRIDE = GLenum::GL_COLOR_ARRAY_STRIDE;
static const GLenum GL_INDEX_ARRAY_TYPE = GLenum::GL_INDEX_ARRAY_TYPE;
static const GLenum GL_INDEX_ARRAY_STRIDE = GLenum::GL_INDEX_ARRAY_STRIDE;
static const GLenum GL_TEXTURE_COORD_ARRAY_SIZE = GLenum::GL_TEXTURE_COORD_ARRAY_SIZE;
static const GLenum GL_TEXTURE_COORD_ARRAY_TYPE = GLenum::GL_TEXTURE_COORD_ARRAY_TYPE;
static const GLenum GL_TEXTURE_COORD_ARRAY_STRIDE = GLenum::GL_TEXTURE_COORD_ARRAY_STRIDE;
static const GLenum GL_EDGE_FLAG_ARRAY_STRIDE = GLenum::GL_EDGE_FLAG_ARRAY_STRIDE;
static const GLenum GL_LIGHT_MODEL_COLOR_CONTROL = GLenum::GL_LIGHT_MODEL_COLOR_CONTROL;
static const GLenum GL_ALIASED_POINT_SIZE_RANGE = GLenum::GL_ALIASED_POINT_SIZE_RANGE;
static const GLenum GL_ALIASED_LINE_WIDTH_RANGE = GLenum::GL_ALIASED_LINE_WIDTH_RANGE;

// GetPixelMap

static const GLenum GL_PIXEL_MAP_I_TO_I = GLenum::GL_PIXEL_MAP_I_TO_I;
static const GLenum GL_PIXEL_MAP_S_TO_S = GLenum::GL_PIXEL_MAP_S_TO_S;
static const GLenum GL_PIXEL_MAP_I_TO_R = GLenum::GL_PIXEL_MAP_I_TO_R;
static const GLenum GL_PIXEL_MAP_I_TO_G = GLenum::GL_PIXEL_MAP_I_TO_G;
static const GLenum GL_PIXEL_MAP_I_TO_B = GLenum::GL_PIXEL_MAP_I_TO_B;
static const GLenum GL_PIXEL_MAP_I_TO_A = GLenum::GL_PIXEL_MAP_I_TO_A;
static const GLenum GL_PIXEL_MAP_R_TO_R = GLenum::GL_PIXEL_MAP_R_TO_R;
static const GLenum GL_PIXEL_MAP_G_TO_G = GLenum::GL_PIXEL_MAP_G_TO_G;
static const GLenum GL_PIXEL_MAP_B_TO_B = GLenum::GL_PIXEL_MAP_B_TO_B;
static const GLenum GL_PIXEL_MAP_A_TO_A = GLenum::GL_PIXEL_MAP_A_TO_A;

// GetPointervPName

static const GLenum GL_FEEDBACK_BUFFER_POINTER = GLenum::GL_FEEDBACK_BUFFER_POINTER;
static const GLenum GL_SELECTION_BUFFER_POINTER = GLenum::GL_SELECTION_BUFFER_POINTER;
static const GLenum GL_VERTEX_ARRAY_POINTER = GLenum::GL_VERTEX_ARRAY_POINTER;
static const GLenum GL_NORMAL_ARRAY_POINTER = GLenum::GL_NORMAL_ARRAY_POINTER;
static const GLenum GL_COLOR_ARRAY_POINTER = GLenum::GL_COLOR_ARRAY_POINTER;
static const GLenum GL_INDEX_ARRAY_POINTER = GLenum::GL_INDEX_ARRAY_POINTER;
static const GLenum GL_TEXTURE_COORD_ARRAY_POINTER = GLenum::GL_TEXTURE_COORD_ARRAY_POINTER;
static const GLenum GL_EDGE_FLAG_ARRAY_POINTER = GLenum::GL_EDGE_FLAG_ARRAY_POINTER;

// GetTextureParameter

static const GLenum GL_TEXTURE_WIDTH = GLenum::GL_TEXTURE_WIDTH;
static const GLenum GL_TEXTURE_HEIGHT = GLenum::GL_TEXTURE_HEIGHT;
static const GLenum GL_TEXTURE_COMPONENTS = GLenum::GL_TEXTURE_COMPONENTS;
static const GLenum GL_TEXTURE_INTERNAL_FORMAT = GLenum::GL_TEXTURE_INTERNAL_FORMAT;
static const GLenum GL_TEXTURE_BORDER_COLOR = GLenum::GL_TEXTURE_BORDER_COLOR;
static const GLenum GL_TEXTURE_BORDER = GLenum::GL_TEXTURE_BORDER;
static const GLenum GL_TEXTURE_MAG_FILTER = GLenum::GL_TEXTURE_MAG_FILTER;
static const GLenum GL_TEXTURE_MIN_FILTER = GLenum::GL_TEXTURE_MIN_FILTER;
static const GLenum GL_TEXTURE_WRAP_S = GLenum::GL_TEXTURE_WRAP_S;
static const GLenum GL_TEXTURE_WRAP_T = GLenum::GL_TEXTURE_WRAP_T;
static const GLenum GL_TEXTURE_RED_SIZE = GLenum::GL_TEXTURE_RED_SIZE;
static const GLenum GL_TEXTURE_GREEN_SIZE = GLenum::GL_TEXTURE_GREEN_SIZE;
static const GLenum GL_TEXTURE_BLUE_SIZE = GLenum::GL_TEXTURE_BLUE_SIZE;
static const GLenum GL_TEXTURE_ALPHA_SIZE = GLenum::GL_TEXTURE_ALPHA_SIZE;
static const GLenum GL_TEXTURE_LUMINANCE_SIZE = GLenum::GL_TEXTURE_LUMINANCE_SIZE;
static const GLenum GL_TEXTURE_INTENSITY_SIZE = GLenum::GL_TEXTURE_INTENSITY_SIZE;
static const GLenum GL_TEXTURE_PRIORITY = GLenum::GL_TEXTURE_PRIORITY;
static const GLenum GL_TEXTURE_RESIDENT = GLenum::GL_TEXTURE_RESIDENT;

// HintMode

static const GLenum GL_DONT_CARE = GLenum::GL_DONT_CARE;
static const GLenum GL_FASTEST = GLenum::GL_FASTEST;
static const GLenum GL_NICEST = GLenum::GL_NICEST;

// HintTarget

// static const GLenum GL_PERSPECTIVE_CORRECTION_HINT = GLenum::GL_PERSPECTIVE_CORRECTION_HINT; // reuse GetPName
// static const GLenum GL_POINT_SMOOTH_HINT = GLenum::GL_POINT_SMOOTH_HINT; // reuse GetPName
// static const GLenum GL_LINE_SMOOTH_HINT = GLenum::GL_LINE_SMOOTH_HINT; // reuse GetPName
// static const GLenum GL_POLYGON_SMOOTH_HINT = GLenum::GL_POLYGON_SMOOTH_HINT; // reuse GetPName
// static const GLenum GL_FOG_HINT = GLenum::GL_FOG_HINT; // reuse GetPName
static const GLenum GL_GENERATE_MIPMAP_HINT = GLenum::GL_GENERATE_MIPMAP_HINT;
static const GLenum GL_TEXTURE_COMPRESSION_HINT = GLenum::GL_TEXTURE_COMPRESSION_HINT;

// HistogramTargetEXT



// IndexPointerType

// static const GLenum GL_SHORT = GLenum::GL_SHORT; // reuse ColorPointerType
// static const GLenum GL_INT = GLenum::GL_INT; // reuse ColorPointerType
// static const GLenum GL_FLOAT = GLenum::GL_FLOAT; // reuse ColorPointerType
// static const GLenum GL_DOUBLE = GLenum::GL_DOUBLE; // reuse ColorPointerType

// InterleavedArrayFormat

static const GLenum GL_V2F = GLenum::GL_V2F;
static const GLenum GL_V3F = GLenum::GL_V3F;
static const GLenum GL_C4UB_V2F = GLenum::GL_C4UB_V2F;
static const GLenum GL_C4UB_V3F = GLenum::GL_C4UB_V3F;
static const GLenum GL_C3F_V3F = GLenum::GL_C3F_V3F;
static const GLenum GL_N3F_V3F = GLenum::GL_N3F_V3F;
static const GLenum GL_C4F_N3F_V3F = GLenum::GL_C4F_N3F_V3F;
static const GLenum GL_T2F_V3F = GLenum::GL_T2F_V3F;
static const GLenum GL_T4F_V4F = GLenum::GL_T4F_V4F;
static const GLenum GL_T2F_C4UB_V3F = GLenum::GL_T2F_C4UB_V3F;
static const GLenum GL_T2F_C3F_V3F = GLenum::GL_T2F_C3F_V3F;
static const GLenum GL_T2F_N3F_V3F = GLenum::GL_T2F_N3F_V3F;
static const GLenum GL_T2F_C4F_N3F_V3F = GLenum::GL_T2F_C4F_N3F_V3F;
static const GLenum GL_T4F_C4F_N3F_V4F = GLenum::GL_T4F_C4F_N3F_V4F;

// InternalFormat

static const GLenum GL_R3_G3_B2 = GLenum::GL_R3_G3_B2;
static const GLenum GL_ALPHA4 = GLenum::GL_ALPHA4;
static const GLenum GL_ALPHA8 = GLenum::GL_ALPHA8;
static const GLenum GL_ALPHA12 = GLenum::GL_ALPHA12;
static const GLenum GL_ALPHA16 = GLenum::GL_ALPHA16;
static const GLenum GL_LUMINANCE4 = GLenum::GL_LUMINANCE4;
static const GLenum GL_LUMINANCE8 = GLenum::GL_LUMINANCE8;
static const GLenum GL_LUMINANCE12 = GLenum::GL_LUMINANCE12;
static const GLenum GL_LUMINANCE16 = GLenum::GL_LUMINANCE16;
static const GLenum GL_LUMINANCE4_ALPHA4 = GLenum::GL_LUMINANCE4_ALPHA4;
static const GLenum GL_LUMINANCE6_ALPHA2 = GLenum::GL_LUMINANCE6_ALPHA2;
static const GLenum GL_LUMINANCE8_ALPHA8 = GLenum::GL_LUMINANCE8_ALPHA8;
static const GLenum GL_LUMINANCE12_ALPHA4 = GLenum::GL_LUMINANCE12_ALPHA4;
static const GLenum GL_LUMINANCE12_ALPHA12 = GLenum::GL_LUMINANCE12_ALPHA12;
static const GLenum GL_LUMINANCE16_ALPHA16 = GLenum::GL_LUMINANCE16_ALPHA16;
static const GLenum GL_INTENSITY = GLenum::GL_INTENSITY;
static const GLenum GL_INTENSITY4 = GLenum::GL_INTENSITY4;
static const GLenum GL_INTENSITY8 = GLenum::GL_INTENSITY8;
static const GLenum GL_INTENSITY12 = GLenum::GL_INTENSITY12;
static const GLenum GL_INTENSITY16 = GLenum::GL_INTENSITY16;
static const GLenum GL_RGB4 = GLenum::GL_RGB4;
static const GLenum GL_RGB5 = GLenum::GL_RGB5;
static const GLenum GL_RGB8 = GLenum::GL_RGB8;
static const GLenum GL_RGB10 = GLenum::GL_RGB10;
static const GLenum GL_RGB12 = GLenum::GL_RGB12;
static const GLenum GL_RGB16 = GLenum::GL_RGB16;
static const GLenum GL_RGBA2 = GLenum::GL_RGBA2;
static const GLenum GL_RGBA4 = GLenum::GL_RGBA4;
static const GLenum GL_RGB5_A1 = GLenum::GL_RGB5_A1;
static const GLenum GL_RGBA8 = GLenum::GL_RGBA8;
static const GLenum GL_RGB10_A2 = GLenum::GL_RGB10_A2;
static const GLenum GL_RGBA12 = GLenum::GL_RGBA12;
static const GLenum GL_RGBA16 = GLenum::GL_RGBA16;

// LightEnvModeSGIX

// static const GLenum GL_ADD = GLenum::GL_ADD; // reuse AccumOp
static const GLenum GL_REPLACE = GLenum::GL_REPLACE;
static const GLenum GL_MODULATE = GLenum::GL_MODULATE;

// LightEnvParameterSGIX



// LightModelColorControl

static const GLenum GL_SINGLE_COLOR = GLenum::GL_SINGLE_COLOR;
static const GLenum GL_SEPARATE_SPECULAR_COLOR = GLenum::GL_SEPARATE_SPECULAR_COLOR;

// LightModelParameter

// static const GLenum GL_LIGHT_MODEL_LOCAL_VIEWER = GLenum::GL_LIGHT_MODEL_LOCAL_VIEWER; // reuse GetPName
// static const GLenum GL_LIGHT_MODEL_TWO_SIDE = GLenum::GL_LIGHT_MODEL_TWO_SIDE; // reuse GetPName
// static const GLenum GL_LIGHT_MODEL_AMBIENT = GLenum::GL_LIGHT_MODEL_AMBIENT; // reuse GetPName
// static const GLenum GL_LIGHT_MODEL_COLOR_CONTROL = GLenum::GL_LIGHT_MODEL_COLOR_CONTROL; // reuse GetPName

// LightName

// static const GLenum GL_LIGHT0 = GLenum::GL_LIGHT0; // reuse EnableCap
// static const GLenum GL_LIGHT1 = GLenum::GL_LIGHT1; // reuse EnableCap
// static const GLenum GL_LIGHT2 = GLenum::GL_LIGHT2; // reuse EnableCap
// static const GLenum GL_LIGHT3 = GLenum::GL_LIGHT3; // reuse EnableCap
// static const GLenum GL_LIGHT4 = GLenum::GL_LIGHT4; // reuse EnableCap
// static const GLenum GL_LIGHT5 = GLenum::GL_LIGHT5; // reuse EnableCap
// static const GLenum GL_LIGHT6 = GLenum::GL_LIGHT6; // reuse EnableCap
// static const GLenum GL_LIGHT7 = GLenum::GL_LIGHT7; // reuse EnableCap

// LightParameter

// static const GLenum GL_AMBIENT = GLenum::GL_AMBIENT; // reuse ColorMaterialParameter
// static const GLenum GL_DIFFUSE = GLenum::GL_DIFFUSE; // reuse ColorMaterialParameter
// static const GLenum GL_SPECULAR = GLenum::GL_SPECULAR; // reuse ColorMaterialParameter
static const GLenum GL_POSITION = GLenum::GL_POSITION;
static const GLenum GL_SPOT_DIRECTION = GLenum::GL_SPOT_DIRECTION;
static const GLenum GL_SPOT_EXPONENT = GLenum::GL_SPOT_EXPONENT;
static const GLenum GL_SPOT_CUTOFF = GLenum::GL_SPOT_CUTOFF;
static const GLenum GL_CONSTANT_ATTENUATION = GLenum::GL_CONSTANT_ATTENUATION;
static const GLenum GL_LINEAR_ATTENUATION = GLenum::GL_LINEAR_ATTENUATION;
static const GLenum GL_QUADRATIC_ATTENUATION = GLenum::GL_QUADRATIC_ATTENUATION;

// ListMode

static const GLenum GL_COMPILE = GLenum::GL_COMPILE;
static const GLenum GL_COMPILE_AND_EXECUTE = GLenum::GL_COMPILE_AND_EXECUTE;

// ListNameType

// static const GLenum GL_BYTE = GLenum::GL_BYTE; // reuse ColorPointerType
// static const GLenum GL_UNSIGNED_BYTE = GLenum::GL_UNSIGNED_BYTE; // reuse ColorPointerType
// static const GLenum GL_SHORT = GLenum::GL_SHORT; // reuse ColorPointerType
// static const GLenum GL_UNSIGNED_SHORT = GLenum::GL_UNSIGNED_SHORT; // reuse ColorPointerType
// static const GLenum GL_INT = GLenum::GL_INT; // reuse ColorPointerType
// static const GLenum GL_UNSIGNED_INT = GLenum::GL_UNSIGNED_INT; // reuse ColorPointerType
// static const GLenum GL_FLOAT = GLenum::GL_FLOAT; // reuse ColorPointerType
static const GLenum GL_2_BYTES = GLenum::GL_2_BYTES;
static const GLenum GL_3_BYTES = GLenum::GL_3_BYTES;
static const GLenum GL_4_BYTES = GLenum::GL_4_BYTES;

// ListParameterName



// LogicOp

static const GLenum GL_CLEAR = GLenum::GL_CLEAR;
static const GLenum GL_AND = GLenum::GL_AND;
static const GLenum GL_AND_REVERSE = GLenum::GL_AND_REVERSE;
static const GLenum GL_COPY = GLenum::GL_COPY;
static const GLenum GL_AND_INVERTED = GLenum::GL_AND_INVERTED;
static const GLenum GL_NOOP = GLenum::GL_NOOP;
static const GLenum GL_XOR = GLenum::GL_XOR;
static const GLenum GL_OR = GLenum::GL_OR;
static const GLenum GL_NOR = GLenum::GL_NOR;
static const GLenum GL_EQUIV = GLenum::GL_EQUIV;
static const GLenum GL_INVERT = GLenum::GL_INVERT;
static const GLenum GL_OR_REVERSE = GLenum::GL_OR_REVERSE;
static const GLenum GL_COPY_INVERTED = GLenum::GL_COPY_INVERTED;
static const GLenum GL_OR_INVERTED = GLenum::GL_OR_INVERTED;
static const GLenum GL_NAND = GLenum::GL_NAND;
static const GLenum GL_SET = GLenum::GL_SET;

// MapTarget

// static const GLenum GL_MAP1_COLOR_4 = GLenum::GL_MAP1_COLOR_4; // reuse EnableCap
// static const GLenum GL_MAP1_INDEX = GLenum::GL_MAP1_INDEX; // reuse EnableCap
// static const GLenum GL_MAP1_NORMAL = GLenum::GL_MAP1_NORMAL; // reuse EnableCap
// static const GLenum GL_MAP1_TEXTURE_COORD_1 = GLenum::GL_MAP1_TEXTURE_COORD_1; // reuse EnableCap
// static const GLenum GL_MAP1_TEXTURE_COORD_2 = GLenum::GL_MAP1_TEXTURE_COORD_2; // reuse EnableCap
// static const GLenum GL_MAP1_TEXTURE_COORD_3 = GLenum::GL_MAP1_TEXTURE_COORD_3; // reuse EnableCap
// static const GLenum GL_MAP1_TEXTURE_COORD_4 = GLenum::GL_MAP1_TEXTURE_COORD_4; // reuse EnableCap
// static const GLenum GL_MAP1_VERTEX_3 = GLenum::GL_MAP1_VERTEX_3; // reuse EnableCap
// static const GLenum GL_MAP1_VERTEX_4 = GLenum::GL_MAP1_VERTEX_4; // reuse EnableCap
// static const GLenum GL_MAP2_COLOR_4 = GLenum::GL_MAP2_COLOR_4; // reuse EnableCap
// static const GLenum GL_MAP2_INDEX = GLenum::GL_MAP2_INDEX; // reuse EnableCap
// static const GLenum GL_MAP2_NORMAL = GLenum::GL_MAP2_NORMAL; // reuse EnableCap
// static const GLenum GL_MAP2_TEXTURE_COORD_1 = GLenum::GL_MAP2_TEXTURE_COORD_1; // reuse EnableCap
// static const GLenum GL_MAP2_TEXTURE_COORD_2 = GLenum::GL_MAP2_TEXTURE_COORD_2; // reuse EnableCap
// static const GLenum GL_MAP2_TEXTURE_COORD_3 = GLenum::GL_MAP2_TEXTURE_COORD_3; // reuse EnableCap
// static const GLenum GL_MAP2_TEXTURE_COORD_4 = GLenum::GL_MAP2_TEXTURE_COORD_4; // reuse EnableCap
// static const GLenum GL_MAP2_VERTEX_3 = GLenum::GL_MAP2_VERTEX_3; // reuse EnableCap
// static const GLenum GL_MAP2_VERTEX_4 = GLenum::GL_MAP2_VERTEX_4; // reuse EnableCap

// MapTextureFormatINTEL



// MaterialFace

// static const GLenum GL_FRONT = GLenum::GL_FRONT; // reuse ColorMaterialFace
// static const GLenum GL_BACK = GLenum::GL_BACK; // reuse ColorMaterialFace
// static const GLenum GL_FRONT_AND_BACK = GLenum::GL_FRONT_AND_BACK; // reuse ColorMaterialFace

// MaterialParameter

// static const GLenum GL_AMBIENT = GLenum::GL_AMBIENT; // reuse ColorMaterialParameter
// static const GLenum GL_DIFFUSE = GLenum::GL_DIFFUSE; // reuse ColorMaterialParameter
// static const GLenum GL_SPECULAR = GLenum::GL_SPECULAR; // reuse ColorMaterialParameter
// static const GLenum GL_EMISSION = GLenum::GL_EMISSION; // reuse ColorMaterialParameter
static const GLenum GL_SHININESS = GLenum::GL_SHININESS;
// static const GLenum GL_AMBIENT_AND_DIFFUSE = GLenum::GL_AMBIENT_AND_DIFFUSE; // reuse ColorMaterialParameter
static const GLenum GL_COLOR_INDEXES = GLenum::GL_COLOR_INDEXES;

// MatrixMode

static const GLenum GL_MODELVIEW = GLenum::GL_MODELVIEW;
static const GLenum GL_PROJECTION = GLenum::GL_PROJECTION;
static const GLenum GL_TEXTURE = GLenum::GL_TEXTURE;

// MeshMode1

static const GLenum GL_POINT = GLenum::GL_POINT;
static const GLenum GL_LINE = GLenum::GL_LINE;

// MeshMode2

// static const GLenum GL_POINT = GLenum::GL_POINT; // reuse MeshMode1
// static const GLenum GL_LINE = GLenum::GL_LINE; // reuse MeshMode1
static const GLenum GL_FILL = GLenum::GL_FILL;

// MinmaxTargetEXT



// NormalPointerType

// static const GLenum GL_BYTE = GLenum::GL_BYTE; // reuse ColorPointerType
// static const GLenum GL_SHORT = GLenum::GL_SHORT; // reuse ColorPointerType
// static const GLenum GL_INT = GLenum::GL_INT; // reuse ColorPointerType
// static const GLenum GL_FLOAT = GLenum::GL_FLOAT; // reuse ColorPointerType
// static const GLenum GL_DOUBLE = GLenum::GL_DOUBLE; // reuse ColorPointerType

// OcclusionQueryEventMaskAMD



// PixelCopyType

static const GLenum GL_COLOR = GLenum::GL_COLOR;
static const GLenum GL_DEPTH = GLenum::GL_DEPTH;
static const GLenum GL_STENCIL = GLenum::GL_STENCIL;

// PixelFormat

// static const GLenum GL_UNSIGNED_SHORT = GLenum::GL_UNSIGNED_SHORT; // reuse ColorPointerType
// static const GLenum GL_UNSIGNED_INT = GLenum::GL_UNSIGNED_INT; // reuse ColorPointerType
static const GLenum GL_COLOR_INDEX = GLenum::GL_COLOR_INDEX;
static const GLenum GL_STENCIL_INDEX = GLenum::GL_STENCIL_INDEX;
static const GLenum GL_DEPTH_COMPONENT = GLenum::GL_DEPTH_COMPONENT;
static const GLenum GL_RED = GLenum::GL_RED;
static const GLenum GL_GREEN = GLenum::GL_GREEN;
static const GLenum GL_BLUE = GLenum::GL_BLUE;
static const GLenum GL_ALPHA = GLenum::GL_ALPHA;
static const GLenum GL_RGB = GLenum::GL_RGB;
static const GLenum GL_RGBA = GLenum::GL_RGBA;
static const GLenum GL_LUMINANCE = GLenum::GL_LUMINANCE;
static const GLenum GL_LUMINANCE_ALPHA = GLenum::GL_LUMINANCE_ALPHA;

// PixelMap

// static const GLenum GL_PIXEL_MAP_I_TO_I = GLenum::GL_PIXEL_MAP_I_TO_I; // reuse GetPixelMap
// static const GLenum GL_PIXEL_MAP_S_TO_S = GLenum::GL_PIXEL_MAP_S_TO_S; // reuse GetPixelMap
// static const GLenum GL_PIXEL_MAP_I_TO_R = GLenum::GL_PIXEL_MAP_I_TO_R; // reuse GetPixelMap
// static const GLenum GL_PIXEL_MAP_I_TO_G = GLenum::GL_PIXEL_MAP_I_TO_G; // reuse GetPixelMap
// static const GLenum GL_PIXEL_MAP_I_TO_B = GLenum::GL_PIXEL_MAP_I_TO_B; // reuse GetPixelMap
// static const GLenum GL_PIXEL_MAP_I_TO_A = GLenum::GL_PIXEL_MAP_I_TO_A; // reuse GetPixelMap
// static const GLenum GL_PIXEL_MAP_R_TO_R = GLenum::GL_PIXEL_MAP_R_TO_R; // reuse GetPixelMap
// static const GLenum GL_PIXEL_MAP_G_TO_G = GLenum::GL_PIXEL_MAP_G_TO_G; // reuse GetPixelMap
// static const GLenum GL_PIXEL_MAP_B_TO_B = GLenum::GL_PIXEL_MAP_B_TO_B; // reuse GetPixelMap
// static const GLenum GL_PIXEL_MAP_A_TO_A = GLenum::GL_PIXEL_MAP_A_TO_A; // reuse GetPixelMap

// PixelStoreParameter

// static const GLenum GL_UNPACK_SWAP_BYTES = GLenum::GL_UNPACK_SWAP_BYTES; // reuse GetPName
// static const GLenum GL_UNPACK_LSB_FIRST = GLenum::GL_UNPACK_LSB_FIRST; // reuse GetPName
// static const GLenum GL_UNPACK_ROW_LENGTH = GLenum::GL_UNPACK_ROW_LENGTH; // reuse GetPName
// static const GLenum GL_UNPACK_SKIP_ROWS = GLenum::GL_UNPACK_SKIP_ROWS; // reuse GetPName
// static const GLenum GL_UNPACK_SKIP_PIXELS = GLenum::GL_UNPACK_SKIP_PIXELS; // reuse GetPName
// static const GLenum GL_UNPACK_ALIGNMENT = GLenum::GL_UNPACK_ALIGNMENT; // reuse GetPName
// static const GLenum GL_PACK_SWAP_BYTES = GLenum::GL_PACK_SWAP_BYTES; // reuse GetPName
// static const GLenum GL_PACK_LSB_FIRST = GLenum::GL_PACK_LSB_FIRST; // reuse GetPName
// static const GLenum GL_PACK_ROW_LENGTH = GLenum::GL_PACK_ROW_LENGTH; // reuse GetPName
// static const GLenum GL_PACK_SKIP_ROWS = GLenum::GL_PACK_SKIP_ROWS; // reuse GetPName
// static const GLenum GL_PACK_SKIP_PIXELS = GLenum::GL_PACK_SKIP_PIXELS; // reuse GetPName
// static const GLenum GL_PACK_ALIGNMENT = GLenum::GL_PACK_ALIGNMENT; // reuse GetPName
static const GLenum GL_PACK_SKIP_IMAGES = GLenum::GL_PACK_SKIP_IMAGES;
static const GLenum GL_PACK_IMAGE_HEIGHT = GLenum::GL_PACK_IMAGE_HEIGHT;
static const GLenum GL_UNPACK_SKIP_IMAGES = GLenum::GL_UNPACK_SKIP_IMAGES;
static const GLenum GL_UNPACK_IMAGE_HEIGHT = GLenum::GL_UNPACK_IMAGE_HEIGHT;

// PixelStoreResampleMode



// PixelStoreSubsampleRate



// PixelTexGenMode

// static const GLenum GL_NONE = GLenum::GL_NONE; // reuse DrawBufferMode
// static const GLenum GL_RGB = GLenum::GL_RGB; // reuse PixelFormat
// static const GLenum GL_RGBA = GLenum::GL_RGBA; // reuse PixelFormat
// static const GLenum GL_LUMINANCE = GLenum::GL_LUMINANCE; // reuse PixelFormat
// static const GLenum GL_LUMINANCE_ALPHA = GLenum::GL_LUMINANCE_ALPHA; // reuse PixelFormat

// PixelTexGenParameterNameSGIS



// PixelTransferParameter

// static const GLenum GL_MAP_COLOR = GLenum::GL_MAP_COLOR; // reuse GetPName
// static const GLenum GL_MAP_STENCIL = GLenum::GL_MAP_STENCIL; // reuse GetPName
// static const GLenum GL_INDEX_SHIFT = GLenum::GL_INDEX_SHIFT; // reuse GetPName
// static const GLenum GL_INDEX_OFFSET = GLenum::GL_INDEX_OFFSET; // reuse GetPName
// static const GLenum GL_RED_SCALE = GLenum::GL_RED_SCALE; // reuse GetPName
// static const GLenum GL_RED_BIAS = GLenum::GL_RED_BIAS; // reuse GetPName
// static const GLenum GL_GREEN_SCALE = GLenum::GL_GREEN_SCALE; // reuse GetPName
// static const GLenum GL_GREEN_BIAS = GLenum::GL_GREEN_BIAS; // reuse GetPName
// static const GLenum GL_BLUE_SCALE = GLenum::GL_BLUE_SCALE; // reuse GetPName
// static const GLenum GL_BLUE_BIAS = GLenum::GL_BLUE_BIAS; // reuse GetPName
// static const GLenum GL_ALPHA_SCALE = GLenum::GL_ALPHA_SCALE; // reuse GetPName
// static const GLenum GL_ALPHA_BIAS = GLenum::GL_ALPHA_BIAS; // reuse GetPName
// static const GLenum GL_DEPTH_SCALE = GLenum::GL_DEPTH_SCALE; // reuse GetPName
// static const GLenum GL_DEPTH_BIAS = GLenum::GL_DEPTH_BIAS; // reuse GetPName

// PixelType

// static const GLenum GL_BYTE = GLenum::GL_BYTE; // reuse ColorPointerType
// static const GLenum GL_UNSIGNED_BYTE = GLenum::GL_UNSIGNED_BYTE; // reuse ColorPointerType
// static const GLenum GL_SHORT = GLenum::GL_SHORT; // reuse ColorPointerType
// static const GLenum GL_UNSIGNED_SHORT = GLenum::GL_UNSIGNED_SHORT; // reuse ColorPointerType
// static const GLenum GL_INT = GLenum::GL_INT; // reuse ColorPointerType
// static const GLenum GL_UNSIGNED_INT = GLenum::GL_UNSIGNED_INT; // reuse ColorPointerType
// static const GLenum GL_FLOAT = GLenum::GL_FLOAT; // reuse ColorPointerType
static const GLenum GL_BITMAP = GLenum::GL_BITMAP;
static const GLenum GL_UNSIGNED_BYTE_3_3_2 = GLenum::GL_UNSIGNED_BYTE_3_3_2;
static const GLenum GL_UNSIGNED_SHORT_4_4_4_4 = GLenum::GL_UNSIGNED_SHORT_4_4_4_4;
static const GLenum GL_UNSIGNED_SHORT_5_5_5_1 = GLenum::GL_UNSIGNED_SHORT_5_5_5_1;
static const GLenum GL_UNSIGNED_INT_8_8_8_8 = GLenum::GL_UNSIGNED_INT_8_8_8_8;
static const GLenum GL_UNSIGNED_INT_10_10_10_2 = GLenum::GL_UNSIGNED_INT_10_10_10_2;

// PointParameterNameSGIS

static const GLenum GL_POINT_SIZE_MIN = GLenum::GL_POINT_SIZE_MIN;
static const GLenum GL_POINT_SIZE_MAX = GLenum::GL_POINT_SIZE_MAX;
static const GLenum GL_POINT_FADE_THRESHOLD_SIZE = GLenum::GL_POINT_FADE_THRESHOLD_SIZE;
static const GLenum GL_POINT_DISTANCE_ATTENUATION = GLenum::GL_POINT_DISTANCE_ATTENUATION;

// PolygonMode

// static const GLenum GL_POINT = GLenum::GL_POINT; // reuse MeshMode1
// static const GLenum GL_LINE = GLenum::GL_LINE; // reuse MeshMode1
// static const GLenum GL_FILL = GLenum::GL_FILL; // reuse MeshMode2

// PrimitiveType

static const GLenum GL_POINTS = GLenum::GL_POINTS;
static const GLenum GL_LINES = GLenum::GL_LINES;
static const GLenum GL_LINE_LOOP = GLenum::GL_LINE_LOOP;
static const GLenum GL_LINE_STRIP = GLenum::GL_LINE_STRIP;
static const GLenum GL_TRIANGLES = GLenum::GL_TRIANGLES;
static const GLenum GL_TRIANGLE_STRIP = GLenum::GL_TRIANGLE_STRIP;
static const GLenum GL_TRIANGLE_FAN = GLenum::GL_TRIANGLE_FAN;
static const GLenum GL_QUADS = GLenum::GL_QUADS;
static const GLenum GL_QUAD_STRIP = GLenum::GL_QUAD_STRIP;
static const GLenum GL_POLYGON = GLenum::GL_POLYGON;

// ReadBufferMode

// static const GLenum GL_FRONT_LEFT = GLenum::GL_FRONT_LEFT; // reuse DrawBufferMode
// static const GLenum GL_FRONT_RIGHT = GLenum::GL_FRONT_RIGHT; // reuse DrawBufferMode
// static const GLenum GL_BACK_LEFT = GLenum::GL_BACK_LEFT; // reuse DrawBufferMode
// static const GLenum GL_BACK_RIGHT = GLenum::GL_BACK_RIGHT; // reuse DrawBufferMode
// static const GLenum GL_FRONT = GLenum::GL_FRONT; // reuse ColorMaterialFace
// static const GLenum GL_BACK = GLenum::GL_BACK; // reuse ColorMaterialFace
// static const GLenum GL_LEFT = GLenum::GL_LEFT; // reuse DrawBufferMode
// static const GLenum GL_RIGHT = GLenum::GL_RIGHT; // reuse DrawBufferMode
// static const GLenum GL_AUX0 = GLenum::GL_AUX0; // reuse DrawBufferMode
// static const GLenum GL_AUX1 = GLenum::GL_AUX1; // reuse DrawBufferMode
// static const GLenum GL_AUX2 = GLenum::GL_AUX2; // reuse DrawBufferMode
// static const GLenum GL_AUX3 = GLenum::GL_AUX3; // reuse DrawBufferMode

// RenderingMode

static const GLenum GL_RENDER = GLenum::GL_RENDER;
static const GLenum GL_FEEDBACK = GLenum::GL_FEEDBACK;
static const GLenum GL_SELECT = GLenum::GL_SELECT;

// SamplePatternSGIS



// SeparableTargetEXT



// ShadingModel

static const GLenum GL_FLAT = GLenum::GL_FLAT;
static const GLenum GL_SMOOTH = GLenum::GL_SMOOTH;

// StencilFunction

// static const GLenum GL_NEVER = GLenum::GL_NEVER; // reuse AlphaFunction
// static const GLenum GL_LESS = GLenum::GL_LESS; // reuse AlphaFunction
// static const GLenum GL_EQUAL = GLenum::GL_EQUAL; // reuse AlphaFunction
// static const GLenum GL_LEQUAL = GLenum::GL_LEQUAL; // reuse AlphaFunction
// static const GLenum GL_GREATER = GLenum::GL_GREATER; // reuse AlphaFunction
// static const GLenum GL_NOTEQUAL = GLenum::GL_NOTEQUAL; // reuse AlphaFunction
// static const GLenum GL_GEQUAL = GLenum::GL_GEQUAL; // reuse AlphaFunction
// static const GLenum GL_ALWAYS = GLenum::GL_ALWAYS; // reuse AlphaFunction

// StencilOp

// static const GLenum GL_ZERO = GLenum::GL_ZERO; // reuse BlendingFactorDest
// static const GLenum GL_INVERT = GLenum::GL_INVERT; // reuse LogicOp
static const GLenum GL_KEEP = GLenum::GL_KEEP;
// static const GLenum GL_REPLACE = GLenum::GL_REPLACE; // reuse LightEnvModeSGIX
static const GLenum GL_INCR = GLenum::GL_INCR;
static const GLenum GL_DECR = GLenum::GL_DECR;

// StringName

static const GLenum GL_VENDOR = GLenum::GL_VENDOR;
static const GLenum GL_RENDERER = GLenum::GL_RENDERER;
static const GLenum GL_VERSION = GLenum::GL_VERSION;
static const GLenum GL_EXTENSIONS = GLenum::GL_EXTENSIONS;

// TexCoordPointerType

// static const GLenum GL_SHORT = GLenum::GL_SHORT; // reuse ColorPointerType
// static const GLenum GL_INT = GLenum::GL_INT; // reuse ColorPointerType
// static const GLenum GL_FLOAT = GLenum::GL_FLOAT; // reuse ColorPointerType
// static const GLenum GL_DOUBLE = GLenum::GL_DOUBLE; // reuse ColorPointerType

// TextureCoordName

static const GLenum GL_S = GLenum::GL_S;
static const GLenum GL_T = GLenum::GL_T;
static const GLenum GL_R = GLenum::GL_R;
static const GLenum GL_Q = GLenum::GL_Q;

// TextureEnvMode

// static const GLenum GL_ADD = GLenum::GL_ADD; // reuse AccumOp
// static const GLenum GL_BLEND = GLenum::GL_BLEND; // reuse EnableCap
// static const GLenum GL_MODULATE = GLenum::GL_MODULATE; // reuse LightEnvModeSGIX
static const GLenum GL_DECAL = GLenum::GL_DECAL;

// TextureEnvParameter

static const GLenum GL_TEXTURE_ENV_MODE = GLenum::GL_TEXTURE_ENV_MODE;
static const GLenum GL_TEXTURE_ENV_COLOR = GLenum::GL_TEXTURE_ENV_COLOR;

// TextureEnvTarget

static const GLenum GL_TEXTURE_ENV = GLenum::GL_TEXTURE_ENV;

// TextureFilterFuncSGIS



// TextureGenMode

static const GLenum GL_EYE_LINEAR = GLenum::GL_EYE_LINEAR;
static const GLenum GL_OBJECT_LINEAR = GLenum::GL_OBJECT_LINEAR;
static const GLenum GL_SPHERE_MAP = GLenum::GL_SPHERE_MAP;

// TextureGenParameter

static const GLenum GL_TEXTURE_GEN_MODE = GLenum::GL_TEXTURE_GEN_MODE;
static const GLenum GL_OBJECT_PLANE = GLenum::GL_OBJECT_PLANE;
static const GLenum GL_EYE_PLANE = GLenum::GL_EYE_PLANE;

// TextureMagFilter

static const GLenum GL_NEAREST = GLenum::GL_NEAREST;
// static const GLenum GL_LINEAR = GLenum::GL_LINEAR; // reuse FogMode

// TextureMinFilter

// static const GLenum GL_NEAREST = GLenum::GL_NEAREST; // reuse TextureMagFilter
// static const GLenum GL_LINEAR = GLenum::GL_LINEAR; // reuse FogMode
static const GLenum GL_NEAREST_MIPMAP_NEAREST = GLenum::GL_NEAREST_MIPMAP_NEAREST;
static const GLenum GL_LINEAR_MIPMAP_NEAREST = GLenum::GL_LINEAR_MIPMAP_NEAREST;
static const GLenum GL_NEAREST_MIPMAP_LINEAR = GLenum::GL_NEAREST_MIPMAP_LINEAR;
static const GLenum GL_LINEAR_MIPMAP_LINEAR = GLenum::GL_LINEAR_MIPMAP_LINEAR;

// TextureParameterName

// static const GLenum GL_TEXTURE_BORDER_COLOR = GLenum::GL_TEXTURE_BORDER_COLOR; // reuse GetTextureParameter
// static const GLenum GL_TEXTURE_MAG_FILTER = GLenum::GL_TEXTURE_MAG_FILTER; // reuse GetTextureParameter
// static const GLenum GL_TEXTURE_MIN_FILTER = GLenum::GL_TEXTURE_MIN_FILTER; // reuse GetTextureParameter
// static const GLenum GL_TEXTURE_WRAP_S = GLenum::GL_TEXTURE_WRAP_S; // reuse GetTextureParameter
// static const GLenum GL_TEXTURE_WRAP_T = GLenum::GL_TEXTURE_WRAP_T; // reuse GetTextureParameter
// static const GLenum GL_TEXTURE_PRIORITY = GLenum::GL_TEXTURE_PRIORITY; // reuse GetTextureParameter
static const GLenum GL_TEXTURE_WRAP_R = GLenum::GL_TEXTURE_WRAP_R;
static const GLenum GL_GENERATE_MIPMAP = GLenum::GL_GENERATE_MIPMAP;

// TextureTarget

// static const GLenum GL_TEXTURE_1D = GLenum::GL_TEXTURE_1D; // reuse EnableCap
// static const GLenum GL_TEXTURE_2D = GLenum::GL_TEXTURE_2D; // reuse EnableCap
static const GLenum GL_PROXY_TEXTURE_1D = GLenum::GL_PROXY_TEXTURE_1D;
static const GLenum GL_PROXY_TEXTURE_2D = GLenum::GL_PROXY_TEXTURE_2D;
static const GLenum GL_TEXTURE_3D = GLenum::GL_TEXTURE_3D;
static const GLenum GL_PROXY_TEXTURE_3D = GLenum::GL_PROXY_TEXTURE_3D;
static const GLenum GL_TEXTURE_MIN_LOD = GLenum::GL_TEXTURE_MIN_LOD;
static const GLenum GL_TEXTURE_MAX_LOD = GLenum::GL_TEXTURE_MAX_LOD;
static const GLenum GL_TEXTURE_BASE_LEVEL = GLenum::GL_TEXTURE_BASE_LEVEL;
static const GLenum GL_TEXTURE_MAX_LEVEL = GLenum::GL_TEXTURE_MAX_LEVEL;

// TextureWrapMode

static const GLenum GL_CLAMP = GLenum::GL_CLAMP;
static const GLenum GL_REPEAT = GLenum::GL_REPEAT;
static const GLenum GL_CLAMP_TO_BORDER = GLenum::GL_CLAMP_TO_BORDER;
static const GLenum GL_CLAMP_TO_EDGE = GLenum::GL_CLAMP_TO_EDGE;

// VertexPointerType

// static const GLenum GL_SHORT = GLenum::GL_SHORT; // reuse ColorPointerType
// static const GLenum GL_INT = GLenum::GL_INT; // reuse ColorPointerType
// static const GLenum GL_FLOAT = GLenum::GL_FLOAT; // reuse ColorPointerType
// static const GLenum GL_DOUBLE = GLenum::GL_DOUBLE; // reuse ColorPointerType

// __UNGROUPED__

static const GLenum GL_CONSTANT_COLOR = GLenum::GL_CONSTANT_COLOR;
static const GLenum GL_ONE_MINUS_CONSTANT_COLOR = GLenum::GL_ONE_MINUS_CONSTANT_COLOR;
static const GLenum GL_CONSTANT_ALPHA = GLenum::GL_CONSTANT_ALPHA;
static const GLenum GL_ONE_MINUS_CONSTANT_ALPHA = GLenum::GL_ONE_MINUS_CONSTANT_ALPHA;
static const GLenum GL_FUNC_ADD = GLenum::GL_FUNC_ADD;
static const GLenum GL_MIN = GLenum::GL_MIN;
static const GLenum GL_MAX = GLenum::GL_MAX;
static const GLenum GL_FUNC_SUBTRACT = GLenum::GL_FUNC_SUBTRACT;
static const GLenum GL_FUNC_REVERSE_SUBTRACT = GLenum::GL_FUNC_REVERSE_SUBTRACT;
static const GLenum GL_RESCALE_NORMAL = GLenum::GL_RESCALE_NORMAL;
static const GLenum GL_TEXTURE_DEPTH = GLenum::GL_TEXTURE_DEPTH;
static const GLenum GL_MAX_3D_TEXTURE_SIZE = GLenum::GL_MAX_3D_TEXTURE_SIZE;
static const GLenum GL_MULTISAMPLE = GLenum::GL_MULTISAMPLE;
static const GLenum GL_SAMPLE_ALPHA_TO_COVERAGE = GLenum::GL_SAMPLE_ALPHA_TO_COVERAGE;
static const GLenum GL_SAMPLE_ALPHA_TO_ONE = GLenum::GL_SAMPLE_ALPHA_TO_ONE;
static const GLenum GL_SAMPLE_COVERAGE = GLenum::GL_SAMPLE_COVERAGE;
static const GLenum GL_SAMPLE_BUFFERS = GLenum::GL_SAMPLE_BUFFERS;
static const GLenum GL_SAMPLES = GLenum::GL_SAMPLES;
static const GLenum GL_SAMPLE_COVERAGE_VALUE = GLenum::GL_SAMPLE_COVERAGE_VALUE;
static const GLenum GL_SAMPLE_COVERAGE_INVERT = GLenum::GL_SAMPLE_COVERAGE_INVERT;
static const GLenum GL_BLEND_DST_RGB = GLenum::GL_BLEND_DST_RGB;
static const GLenum GL_BLEND_SRC_RGB = GLenum::GL_BLEND_SRC_RGB;
static const GLenum GL_BLEND_DST_ALPHA = GLenum::GL_BLEND_DST_ALPHA;
static const GLenum GL_BLEND_SRC_ALPHA = GLenum::GL_BLEND_SRC_ALPHA;
static const GLenum GL_BGR = GLenum::GL_BGR;
static const GLenum GL_BGRA = GLenum::GL_BGRA;
static const GLenum GL_MAX_ELEMENTS_VERTICES = GLenum::GL_MAX_ELEMENTS_VERTICES;
static const GLenum GL_MAX_ELEMENTS_INDICES = GLenum::GL_MAX_ELEMENTS_INDICES;
static const GLenum GL_DEPTH_COMPONENT16 = GLenum::GL_DEPTH_COMPONENT16;
static const GLenum GL_DEPTH_COMPONENT24 = GLenum::GL_DEPTH_COMPONENT24;
static const GLenum GL_DEPTH_COMPONENT32 = GLenum::GL_DEPTH_COMPONENT32;
static const GLenum GL_UNSIGNED_BYTE_2_3_3_REV = GLenum::GL_UNSIGNED_BYTE_2_3_3_REV;
static const GLenum GL_UNSIGNED_SHORT_5_6_5 = GLenum::GL_UNSIGNED_SHORT_5_6_5;
static const GLenum GL_UNSIGNED_SHORT_5_6_5_REV = GLenum::GL_UNSIGNED_SHORT_5_6_5_REV;
static const GLenum GL_UNSIGNED_SHORT_4_4_4_4_REV = GLenum::GL_UNSIGNED_SHORT_4_4_4_4_REV;
static const GLenum GL_UNSIGNED_SHORT_1_5_5_5_REV = GLenum::GL_UNSIGNED_SHORT_1_5_5_5_REV;
static const GLenum GL_UNSIGNED_INT_8_8_8_8_REV = GLenum::GL_UNSIGNED_INT_8_8_8_8_REV;
static const GLenum GL_UNSIGNED_INT_2_10_10_10_REV = GLenum::GL_UNSIGNED_INT_2_10_10_10_REV;
static const GLenum GL_MIRRORED_REPEAT = GLenum::GL_MIRRORED_REPEAT;
static const GLenum GL_FOG_COORDINATE_SOURCE = GLenum::GL_FOG_COORDINATE_SOURCE;
static const GLenum GL_FOG_COORD_SRC = GLenum::GL_FOG_COORD_SRC;
static const GLenum GL_FOG_COORD = GLenum::GL_FOG_COORD;
static const GLenum GL_FOG_COORDINATE = GLenum::GL_FOG_COORDINATE;
static const GLenum GL_FRAGMENT_DEPTH = GLenum::GL_FRAGMENT_DEPTH;
static const GLenum GL_CURRENT_FOG_COORD = GLenum::GL_CURRENT_FOG_COORD;
static const GLenum GL_CURRENT_FOG_COORDINATE = GLenum::GL_CURRENT_FOG_COORDINATE;
static const GLenum GL_FOG_COORDINATE_ARRAY_TYPE = GLenum::GL_FOG_COORDINATE_ARRAY_TYPE;
static const GLenum GL_FOG_COORD_ARRAY_TYPE = GLenum::GL_FOG_COORD_ARRAY_TYPE;
static const GLenum GL_FOG_COORDINATE_ARRAY_STRIDE = GLenum::GL_FOG_COORDINATE_ARRAY_STRIDE;
static const GLenum GL_FOG_COORD_ARRAY_STRIDE = GLenum::GL_FOG_COORD_ARRAY_STRIDE;
static const GLenum GL_FOG_COORDINATE_ARRAY_POINTER = GLenum::GL_FOG_COORDINATE_ARRAY_POINTER;
static const GLenum GL_FOG_COORD_ARRAY_POINTER = GLenum::GL_FOG_COORD_ARRAY_POINTER;
static const GLenum GL_FOG_COORDINATE_ARRAY = GLenum::GL_FOG_COORDINATE_ARRAY;
static const GLenum GL_FOG_COORD_ARRAY = GLenum::GL_FOG_COORD_ARRAY;
static const GLenum GL_COLOR_SUM = GLenum::GL_COLOR_SUM;
static const GLenum GL_CURRENT_SECONDARY_COLOR = GLenum::GL_CURRENT_SECONDARY_COLOR;
static const GLenum GL_SECONDARY_COLOR_ARRAY_SIZE = GLenum::GL_SECONDARY_COLOR_ARRAY_SIZE;
static const GLenum GL_SECONDARY_COLOR_ARRAY_TYPE = GLenum::GL_SECONDARY_COLOR_ARRAY_TYPE;
static const GLenum GL_SECONDARY_COLOR_ARRAY_STRIDE = GLenum::GL_SECONDARY_COLOR_ARRAY_STRIDE;
static const GLenum GL_SECONDARY_COLOR_ARRAY_POINTER = GLenum::GL_SECONDARY_COLOR_ARRAY_POINTER;
static const GLenum GL_SECONDARY_COLOR_ARRAY = GLenum::GL_SECONDARY_COLOR_ARRAY;
static const GLenum GL_TEXTURE0 = GLenum::GL_TEXTURE0;
static const GLenum GL_TEXTURE1 = GLenum::GL_TEXTURE1;
static const GLenum GL_TEXTURE2 = GLenum::GL_TEXTURE2;
static const GLenum GL_TEXTURE3 = GLenum::GL_TEXTURE3;
static const GLenum GL_TEXTURE4 = GLenum::GL_TEXTURE4;
static const GLenum GL_TEXTURE5 = GLenum::GL_TEXTURE5;
static const GLenum GL_TEXTURE6 = GLenum::GL_TEXTURE6;
static const GLenum GL_TEXTURE7 = GLenum::GL_TEXTURE7;
static const GLenum GL_TEXTURE8 = GLenum::GL_TEXTURE8;
static const GLenum GL_TEXTURE9 = GLenum::GL_TEXTURE9;
static const GLenum GL_TEXTURE10 = GLenum::GL_TEXTURE10;
static const GLenum GL_TEXTURE11 = GLenum::GL_TEXTURE11;
static const GLenum GL_TEXTURE12 = GLenum::GL_TEXTURE12;
static const GLenum GL_TEXTURE13 = GLenum::GL_TEXTURE13;
static const GLenum GL_TEXTURE14 = GLenum::GL_TEXTURE14;
static const GLenum GL_TEXTURE15 = GLenum::GL_TEXTURE15;
static const GLenum GL_TEXTURE16 = GLenum::GL_TEXTURE16;
static const GLenum GL_TEXTURE17 = GLenum::GL_TEXTURE17;
static const GLenum GL_TEXTURE18 = GLenum::GL_TEXTURE18;
static const GLenum GL_TEXTURE19 = GLenum::GL_TEXTURE19;
static const GLenum GL_TEXTURE20 = GLenum::GL_TEXTURE20;
static const GLenum GL_TEXTURE21 = GLenum::GL_TEXTURE21;
static const GLenum GL_TEXTURE22 = GLenum::GL_TEXTURE22;
static const GLenum GL_TEXTURE23 = GLenum::GL_TEXTURE23;
static const GLenum GL_TEXTURE24 = GLenum::GL_TEXTURE24;
static const GLenum GL_TEXTURE25 = GLenum::GL_TEXTURE25;
static const GLenum GL_TEXTURE26 = GLenum::GL_TEXTURE26;
static const GLenum GL_TEXTURE27 = GLenum::GL_TEXTURE27;
static const GLenum GL_TEXTURE28 = GLenum::GL_TEXTURE28;
static const GLenum GL_TEXTURE29 = GLenum::GL_TEXTURE29;
static const GLenum GL_TEXTURE30 = GLenum::GL_TEXTURE30;
static const GLenum GL_TEXTURE31 = GLenum::GL_TEXTURE31;
static const GLenum GL_ACTIVE_TEXTURE = GLenum::GL_ACTIVE_TEXTURE;
static const GLenum GL_CLIENT_ACTIVE_TEXTURE = GLenum::GL_CLIENT_ACTIVE_TEXTURE;
static const GLenum GL_MAX_TEXTURE_UNITS = GLenum::GL_MAX_TEXTURE_UNITS;
static const GLenum GL_TRANSPOSE_MODELVIEW_MATRIX = GLenum::GL_TRANSPOSE_MODELVIEW_MATRIX;
static const GLenum GL_TRANSPOSE_PROJECTION_MATRIX = GLenum::GL_TRANSPOSE_PROJECTION_MATRIX;
static const GLenum GL_TRANSPOSE_TEXTURE_MATRIX = GLenum::GL_TRANSPOSE_TEXTURE_MATRIX;
static const GLenum GL_TRANSPOSE_COLOR_MATRIX = GLenum::GL_TRANSPOSE_COLOR_MATRIX;
static const GLenum GL_SUBTRACT = GLenum::GL_SUBTRACT;
static const GLenum GL_COMPRESSED_ALPHA = GLenum::GL_COMPRESSED_ALPHA;
static const GLenum GL_COMPRESSED_LUMINANCE = GLenum::GL_COMPRESSED_LUMINANCE;
static const GLenum GL_COMPRESSED_LUMINANCE_ALPHA = GLenum::GL_COMPRESSED_LUMINANCE_ALPHA;
static const GLenum GL_COMPRESSED_INTENSITY = GLenum::GL_COMPRESSED_INTENSITY;
static const GLenum GL_COMPRESSED_RGB = GLenum::GL_COMPRESSED_RGB;
static const GLenum GL_COMPRESSED_RGBA = GLenum::GL_COMPRESSED_RGBA;
static const GLenum GL_MAX_TEXTURE_LOD_BIAS = GLenum::GL_MAX_TEXTURE_LOD_BIAS;
static const GLenum GL_TEXTURE_FILTER_CONTROL = GLenum::GL_TEXTURE_FILTER_CONTROL;
static const GLenum GL_TEXTURE_LOD_BIAS = GLenum::GL_TEXTURE_LOD_BIAS;
static const GLenum GL_INCR_WRAP = GLenum::GL_INCR_WRAP;
static const GLenum GL_DECR_WRAP = GLenum::GL_DECR_WRAP;
static const GLenum GL_NORMAL_MAP = GLenum::GL_NORMAL_MAP;
static const GLenum GL_REFLECTION_MAP = GLenum::GL_REFLECTION_MAP;
static const GLenum GL_TEXTURE_CUBE_MAP = GLenum::GL_TEXTURE_CUBE_MAP;
static const GLenum GL_TEXTURE_BINDING_CUBE_MAP = GLenum::GL_TEXTURE_BINDING_CUBE_MAP;
static const GLenum GL_TEXTURE_CUBE_MAP_POSITIVE_X = GLenum::GL_TEXTURE_CUBE_MAP_POSITIVE_X;
static const GLenum GL_TEXTURE_CUBE_MAP_NEGATIVE_X = GLenum::GL_TEXTURE_CUBE_MAP_NEGATIVE_X;
static const GLenum GL_TEXTURE_CUBE_MAP_POSITIVE_Y = GLenum::GL_TEXTURE_CUBE_MAP_POSITIVE_Y;
static const GLenum GL_TEXTURE_CUBE_MAP_NEGATIVE_Y = GLenum::GL_TEXTURE_CUBE_MAP_NEGATIVE_Y;
static const GLenum GL_TEXTURE_CUBE_MAP_POSITIVE_Z = GLenum::GL_TEXTURE_CUBE_MAP_POSITIVE_Z;
static const GLenum GL_TEXTURE_CUBE_MAP_NEGATIVE_Z = GLenum::GL_TEXTURE_CUBE_MAP_NEGATIVE_Z;
static const GLenum GL_PROXY_TEXTURE_CUBE_MAP = GLenum::GL_PROXY_TEXTURE_CUBE_MAP;
static const GLenum GL_MAX_CUBE_MAP_TEXTURE_SIZE = GLenum::GL_MAX_CUBE_MAP_TEXTURE_SIZE;
static const GLenum GL_COMBINE = GLenum::GL_COMBINE;
static const GLenum GL_COMBINE_RGB = GLenum::GL_COMBINE_RGB;
static const GLenum GL_COMBINE_ALPHA = GLenum::GL_COMBINE_ALPHA;
static const GLenum GL_RGB_SCALE = GLenum::GL_RGB_SCALE;
static const GLenum GL_ADD_SIGNED = GLenum::GL_ADD_SIGNED;
static const GLenum GL_INTERPOLATE = GLenum::GL_INTERPOLATE;
static const GLenum GL_CONSTANT = GLenum::GL_CONSTANT;
static const GLenum GL_PRIMARY_COLOR = GLenum::GL_PRIMARY_COLOR;
static const GLenum GL_PREVIOUS = GLenum::GL_PREVIOUS;
static const GLenum GL_SOURCE0_RGB = GLenum::GL_SOURCE0_RGB;
static const GLenum GL_SRC0_RGB = GLenum::GL_SRC0_RGB;
static const GLenum GL_SOURCE1_RGB = GLenum::GL_SOURCE1_RGB;
static const GLenum GL_SRC1_RGB = GLenum::GL_SRC1_RGB;
static const GLenum GL_SOURCE2_RGB = GLenum::GL_SOURCE2_RGB;
static const GLenum GL_SRC2_RGB = GLenum::GL_SRC2_RGB;
static const GLenum GL_SOURCE0_ALPHA = GLenum::GL_SOURCE0_ALPHA;
static const GLenum GL_SRC0_ALPHA = GLenum::GL_SRC0_ALPHA;
static const GLenum GL_SOURCE1_ALPHA = GLenum::GL_SOURCE1_ALPHA;
static const GLenum GL_SRC1_ALPHA = GLenum::GL_SRC1_ALPHA;
static const GLenum GL_SOURCE2_ALPHA = GLenum::GL_SOURCE2_ALPHA;
static const GLenum GL_SRC2_ALPHA = GLenum::GL_SRC2_ALPHA;
static const GLenum GL_OPERAND0_RGB = GLenum::GL_OPERAND0_RGB;
static const GLenum GL_OPERAND1_RGB = GLenum::GL_OPERAND1_RGB;
static const GLenum GL_OPERAND2_RGB = GLenum::GL_OPERAND2_RGB;
static const GLenum GL_OPERAND0_ALPHA = GLenum::GL_OPERAND0_ALPHA;
static const GLenum GL_OPERAND1_ALPHA = GLenum::GL_OPERAND1_ALPHA;
static const GLenum GL_OPERAND2_ALPHA = GLenum::GL_OPERAND2_ALPHA;
static const GLenum GL_TEXTURE_COMPRESSED_IMAGE_SIZE = GLenum::GL_TEXTURE_COMPRESSED_IMAGE_SIZE;
static const GLenum GL_TEXTURE_COMPRESSED = GLenum::GL_TEXTURE_COMPRESSED;
static const GLenum GL_NUM_COMPRESSED_TEXTURE_FORMATS = GLenum::GL_NUM_COMPRESSED_TEXTURE_FORMATS;
static const GLenum GL_COMPRESSED_TEXTURE_FORMATS = GLenum::GL_COMPRESSED_TEXTURE_FORMATS;
static const GLenum GL_DOT3_RGB = GLenum::GL_DOT3_RGB;
static const GLenum GL_DOT3_RGBA = GLenum::GL_DOT3_RGBA;
static const GLenum GL_TEXTURE_DEPTH_SIZE = GLenum::GL_TEXTURE_DEPTH_SIZE;
static const GLenum GL_DEPTH_TEXTURE_MODE = GLenum::GL_DEPTH_TEXTURE_MODE;
static const GLenum GL_TEXTURE_COMPARE_MODE = GLenum::GL_TEXTURE_COMPARE_MODE;
static const GLenum GL_TEXTURE_COMPARE_FUNC = GLenum::GL_TEXTURE_COMPARE_FUNC;
static const GLenum GL_COMPARE_REF_TO_TEXTURE = GLenum::GL_COMPARE_REF_TO_TEXTURE;
static const GLenum GL_COMPARE_R_TO_TEXTURE = GLenum::GL_COMPARE_R_TO_TEXTURE;

} // namespace gl14

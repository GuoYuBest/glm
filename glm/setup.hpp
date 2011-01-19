///////////////////////////////////////////////////////////////////////////////////////////////////
// OpenGL Mathematics Copyright (c) 2005 - 2010 G-Truc Creation (www.g-truc.net)
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Created : 2006-11-13
// Updated : 2010-01-28
// Licence : This source is under MIT License
// File    : glm/setup.hpp
///////////////////////////////////////////////////////////////////////////////////////////////////

#ifndef glm_setup
#define glm_setup

///////////////////////////////////////////////////////////////////////////////////////////////////
// Version

#define GLM_VERSION					91
#define GLM_VERSION_MAJOR			0
#define GLM_VERSION_MINOR			9
#define GLM_VERSION_PATCH			1
#define GLM_VERSION_REVISION		0

///////////////////////////////////////////////////////////////////////////////////////////////////
// Common values

#define GLM_DISABLE					0x00000000
#define GLM_ENABLE					0x00000001

///////////////////////////////////////////////////////////////////////////////////////////////////
// Message

//#define GLM_MESSAGE_QUIET			0x00000000
//
//#define GLM_MESSAGE_WARNING			0x00000001
//#define GLM_MESSAGE_NOTIFICATION	0x00000002
//#define GLM_MESSAGE_CORE			0x00000004
//#define GLM_MESSAGE_EXTS			0x00000008
//#define GLM_MESSAGE_SETUP			0x00000010
//
//#define GLM_MESSAGE_ALL				GLM_MESSAGE_WARNING | GLM_MESSAGE_NOTIFICATION | GLM_MESSAGE_CORE | GLM_MESSAGE_EXTS | GLM_MESSAGE_SETUP

//! By default:
// #define GLM_MESSAGE				GLM_DISABLE

///////////////////////////////////////////////////////////////////////////////////////////////////
// Precision

#define GLM_PRECISION_NONE			0x00000000

#define GLM_PRECISION_LOWP_FLOAT	0x00000011
#define GLM_PRECISION_MEDIUMP_FLOAT	0x00000012
#define GLM_PRECISION_HIGHP_FLOAT	0x00000013	

#define GLM_PRECISION_LOWP_INT		0x00001100
#define GLM_PRECISION_MEDIUMP_INT	0x00001200
#define GLM_PRECISION_HIGHP_INT		0x00001300

#define GLM_PRECISION_LOWP_UINT		0x00110000
#define GLM_PRECISION_MEDIUMP_UINT	0x00120000
#define GLM_PRECISION_HIGHP_UINT	0x00130000	

///////////////////////////////////////////////////////////////////////////////////////////////////
// Compiler

#define GLM_COMPILER_UNKNOWNED		0x00000000

// Visual C++ defines
#define GLM_COMPILER_VC				0x01000000
#define GLM_COMPILER_VC2005			0x01000010
#define GLM_COMPILER_VC2008			0x01000020
#define GLM_COMPILER_VC2010			0x01000040

// GCC defines
#define GLM_COMPILER_GCC            0x02000000
#define GLM_COMPILER_GCC32			0x02000040
#define GLM_COMPILER_GCC33			0x02000080
#define GLM_COMPILER_GCC34			0x02000100
#define GLM_COMPILER_GCC35			0x02000200
#define GLM_COMPILER_GCC40			0x02000400
#define GLM_COMPILER_GCC41			0x02000800
#define GLM_COMPILER_GCC42			0x02001000
#define GLM_COMPILER_GCC43			0x02002000
#define GLM_COMPILER_GCC44			0x02004000
#define GLM_COMPILER_GCC45			0x02008000
#define GLM_COMPILER_GCC46			0x02010000
#define GLM_COMPILER_GCC47			0x02020000
#define GLM_COMPILER_GCC48			0x02040000
#define GLM_COMPILER_GCC49			0x02080000
#define GLM_COMPILER_GCC50			0x02100000

// Borland C++ defines. How to identify BC?
#define GLM_COMPILER_BC				0x03000000
#define GLM_COMPILER_BCB4			0x03000400
#define GLM_COMPILER_BCB5			0x03000800
#define GLM_COMPILER_BCB6			0x03001000
//#define GLM_COMPILER_BCBX			0x03002000 // What's the version value?
#define GLM_COMPILER_BCB2009                    0x03004000

#define GLM_MODEL_32				0x00000010
#define GLM_MODEL_64				0x00000020

#ifndef GLM_COMPILER

// CodeWarrior
#define GLM_COMPILER_CODEWARRIOR                0x04000000

/////////////////
// Visual C++ //

#ifdef _MSC_VER

#if defined(_M_X64)
#define GLM_MODEL	GLM_MODEL_64
#else
#define GLM_MODEL	GLM_MODEL_32
#endif//_WIN64

#if _MSC_VER == 1400
#define GLM_COMPILER GLM_COMPILER_VC2005
#elif _MSC_VER == 1500
#define GLM_COMPILER GLM_COMPILER_VC2008
#elif _MSC_VER == 1600
#define GLM_COMPILER GLM_COMPILER_VC2010
#else//_MSC_VER
#define GLM_COMPILER GLM_COMPILER_VC
#endif//_MSC_VER

//////////////////
// GCC defines //

#elif defined(__GNUC__)

#if(defined(__WORDSIZE) && (__WORDSIZE == 64)) || defined(__arch64__) || defined(__LP64__)
#define GLM_MODEL	GLM_MODEL_64
#else
#define GLM_MODEL	GLM_MODEL_32
#endif//

#if   (__GNUC__ == 3) && (__GNUC_MINOR__ == 2)
#define GLM_COMPILER GLM_COMPILER_GCC32
#elif (__GNUC__ == 3) && (__GNUC_MINOR__ == 3)
#define GLM_COMPILER GLM_COMPILER_GCC33
#elif (__GNUC__ == 3) && (__GNUC_MINOR__ == 4)
#define GLM_COMPILER GLM_COMPILER_GCC34
#elif (__GNUC__ == 3) && (__GNUC_MINOR__ == 5)
#define GLM_COMPILER GLM_COMPILER_GCC35
#elif (__GNUC__ == 4) && (__GNUC_MINOR__ == 0)
#define GLM_COMPILER GLM_COMPILER_GCC40
#elif (__GNUC__ == 4) && (__GNUC_MINOR__ == 1)
#define GLM_COMPILER GLM_COMPILER_GCC41
#elif (__GNUC__ == 4) && (__GNUC_MINOR__ == 2)
#define GLM_COMPILER GLM_COMPILER_GCC42
#elif (__GNUC__ == 4) && (__GNUC_MINOR__ == 3)
#define GLM_COMPILER GLM_COMPILER_GCC43
#elif (__GNUC__ == 4) && (__GNUC_MINOR__ == 4)
#define GLM_COMPILER GLM_COMPILER_GCC44
#elif (__GNUC__ == 4) && (__GNUC_MINOR__ == 5)
#define GLM_COMPILER GLM_COMPILER_GCC45
#elif (__GNUC__ == 4) && (__GNUC_MINOR__ == 6)
#define GLM_COMPILER GLM_COMPILER_GCC46
#elif (__GNUC__ == 4) && (__GNUC_MINOR__ == 7)
#define GLM_COMPILER GLM_COMPILER_GCC47
#elif (__GNUC__ == 4) && (__GNUC_MINOR__ == 8)
#define GLM_COMPILER GLM_COMPILER_GCC48
#elif (__GNUC__ == 4) && (__GNUC_MINOR__ == 9)
#define GLM_COMPILER GLM_COMPILER_GCC49
#elif (__GNUC__ == 5) && (__GNUC_MINOR__ == 0)
#define GLM_COMPILER GLM_COMPILER_GCC50
#else
#define GLM_COMPILER GLM_COMPILER_GCC
#endif

#elif defined(_BORLANDC_)

#if defined(VER125)
#define GLM_COMPILER GLM_COMPILER_BCB4
#elif defined(VER130)
#define GLM_COMPILER GLM_COMPILER_BCB5
#elif defined(VER140)
#define GLM_COMPILER GLM_COMPILER_BCB6
#elif defined(VER200)
#define GLM_COMPILER GLM_COMPILER_BCB2009
#else
#define GLM_COMPILER GLM_COMPILER_BC
#endif

#elif defined(__MWERKS__)

#define GLM_COMPILER GLM_COMPILER_CODEWARRIOR

#else
#define GLM_COMPILER GLM_COMPILER_UNKNOWNED
#endif//__GNUC__

#endif//GLM_COMPILER

#ifndef GLM_COMPILER
#error "GLM_COMPILER undefined, your compiler may not be supported by GLM. Add #define GLM_COMPILER 0 to ignore this message."
#endif//GLM_COMPILER

#if(!defined(GLM_MODEL) && GLM_COMPILER != 0)
#error "GLM_MODEL undefined, your compiler may not be supported by GLM. Add #define GLM_MODEL 0 to ignore this message."
#endif//GLM_MODEL

/////////////////
// C++ Version //

#define GLM_LANG_CPP98 1
#define GLM_LANG_CPP0X 2

#if((GLM_COMPILER & GLM_COMPILER_GCC) && defined(__GXX_EXPERIMENTAL_CXX0X__)) // -std=c++0x or -std=gnu++0x
#	define GLM_LANG GLM_LANG_CPP0X
#elif GLM_COMPILER & GLM_COMPILER_VC2010
#	define GLM_LANG GLM_LANG_CPP0X
#else
#	define GLM_LANG GLM_LANG_CPP98
#endif

/////////////
// Message //

#if(defined(GLM_MESSAGE) && (GLM_MESSAGE & (GLM_MESSAGE_SETUP | GLM_MESSAGE_NOTIFICATION)))
#	if(defined(GLM_COMPILER) && GLM_COMPILER & GLM_COMPILER_VC)
#		pragma message("GLM message: Compiled with Visual C++")
#	elif(defined(GLM_COMPILER) && GLM_COMPILER & GLM_COMPILER_GCC)
#		pragma message("GLM message: Compiled with GCC")
#	else
#		pragma message("GLM warning: Compiler not detected")
#	endif
#endif//GLM_MESSAGE

#if(defined(GLM_MESSAGE) && (GLM_MESSAGE & (GLM_MESSAGE_SETUP | GLM_MESSAGE_NOTIFICATION)))
#	if(GLM_MODEL == GLM_MODEL_64)
#		pragma message("GLM message: 64 bits model")
#	elif(GLM_MODEL == GLM_MODEL_32)
#		pragma message("GLM message: 32 bits model")
#	endif//GLM_MODEL
#endif//GLM_MESSAGE

///////////////////////////////////////////////////////////////////////////////////////////////////
// Compiler instruction set

//#define GLM_INSTRUCTION_SET_NULL	0x00000000 // 
#define GLM_INSTRUCTION_SET_PURE	0x00000001 // x86intrin.h
//#define GLM_INSTRUCTION_SET_MMX		0x00000002 // mmintrin.h (MMX)
//#define GLM_INSTRUCTION_SET_3DNOW	0x00000004 // mm3dnow.h (3DNOW!)
//#define GLM_INSTRUCTION_SET_SSE		0x00000008 // xmmintrin.h (SSE + MMX)
#define GLM_INSTRUCTION_SET_SSE2	0x00000010 // emmintrin.h (SSE2 + SSE)
#define GLM_INSTRUCTION_SET_SSE3	0x00000020 | GLM_INSTRUCTION_SET_SSE2 // pmmintrin.h (SSE3 + SSE2 + SSE1)
//#define GLM_INSTRUCTION_SET_SSSE3	0x00000040 // tmmintrin.h (SSSE3 + SSE3 + SSE2 + SSE1)
//#define GLM_INSTRUCTION_SET_POPCNT	0x00000080 // popcntintrin.h
//#define GLM_INSTRUCTION_SET_SSE4A	0x00000100 // ammintrin.h (SSE4A + POPCNT + SSE3 + SSE2 + SSE)
//#define GLM_INSTRUCTION_SET_SSE4_1	0x00000200 // smmintrin.h (SSE4_1 + SSSE3 + SSE3 + SSE2 + SSE)
//#define GLM_INSTRUCTION_SET_SSE4_2	0x00000400 // nmmintrin.h (SSE4_2 + SSE4_1 + SSSE3 + SSE3 + SSE2 + SSE)
//#define GLM_INSTRUCTION_SET_AES		0x00000800 // wmmintrin.h (AES + PCLMUL + SSE2 + SSE1)
//#define GLM_INSTRUCTION_SET_PCLMUL	0x00001000 // wmmintrin.h (AES + PCLMUL + SSE2 + SSE1)
#define GLM_INSTRUCTION_SET_AVX		0x00002000 | GLM_INSTRUCTION_SET_SSE3 // immintrin.h (AES + PCLMUL + SSE4_2 + SSE4_1 + SSSE3 + SSE3 + SSE2 + SSE)

/////////////////
// Platform 

#define GLM_SUPPORT_PURE		0
#define GLM_SUPPORT_SSE2		1
#define GLM_SUPPORT_SSE3		2
#define GLM_SUPPORT_AVX			3

#if(GLM_COMPILER & GLM_COMPILER_VC)
#	if(GLM_COMPILER >= GLM_COMPILER_VC2010)
#		define GLM_SUPPORT GLM_SUPPORT_SSE3 //GLM_SUPPORT_AVX (Require SP1)
#	elif(GLM_COMPILER >= GLM_COMPILER_VC2008)
#		define GLM_SUPPORT GLM_SUPPORT_SSE3
#	elif(GLM_COMPILER >= GLM_COMPILER_VC2005)
#		define GLM_SUPPORT GLM_SUPPORT_SSE2
#	else
#		define GLM_SUPPORT GLM_SUPPORT_PURE
#	endif
#elif(GLM_COMPILER & GLM_COMPILER_GCC)
#	if(GLM_COMPILER >= GLM_COMPILER_GCC44)
#		define GLM_SUPPORT GLM_SUPPORT_AVX
#	elif(GLM_COMPILER >= GLM_COMPILER_GCC40)
#		define GLM_SUPPORT GLM_SUPPORT_SSE3
#	else
#		define GLM_SUPPORT GLM_SUPPORT_PURE
#	endif
#else
#	define GLM_SUPPORT GLM_SUPPORT_PURE
#endif

#define GLM_PLATFORM_PURE		0
#define GLM_PLATFORM_SSE2		1
#define GLM_PLATFORM_SSE3		2
#define GLM_PLATFORM_AVX		3

#ifdef GLM_INSTRUCTION_SET
#	if((GLM_INSTRUCTION_SET & GLM_INSTRUCTION_SET_AVX) && GLM_SUPPORT >= GLM_SUPPORT_AVX)
#		include <immintrin.h>
#		define GLM_PLATFORM GLM_PLATFORM_AVX
#	elif((GLM_INSTRUCTION_SET & GLM_INSTRUCTION_SET_SSE3) && GLM_SUPPORT >= GLM_SUPPORT_SSE3)
#		include <pmmintrin.h>
#		define GLM_PLATFORM GLM_PLATFORM_SSE3
#	elif((GLM_INSTRUCTION_SET & GLM_INSTRUCTION_SET_SSE2) && GLM_SUPPORT >= GLM_SUPPORT_SSE2)
#		include <emmintrin.h>
#		define GLM_PLATFORM GLM_PLATFORM_SSE2
#	else
#		define GLM_PLATFORM GLM_PLATFORM_PURE
#	endif
#else
#	if(GLM_MODEL == GLM_MODEL_64)
#		include <emmintrin.h>
#		define GLM_PLATFORM GLM_PLATFORM_SSE2
#	else
#		define GLM_PLATFORM GLM_PLATFORM_PURE
#	endif
#endif

/*
#if(GLM_INSTRUCTION_SET != GLM_INSTRUCTION_SET_NULL)
#	if(GLM_INSTRUCTION_SET & GLM_INSTRUCTION_SET_MMX)
#		include <mmintrin.h>
#	endif
#	if(GLM_INSTRUCTION_SET & GLM_INSTRUCTION_SET_3DNOW)
#		include <mm3dnow.h>
#	endif
#	if(GLM_INSTRUCTION_SET & GLM_INSTRUCTION_SET_SSE)
#		include <xmmintrin.h>
#	endif
#	if(GLM_INSTRUCTION_SET & GLM_INSTRUCTION_SET_SSE2)
#		include <emmintrin.h>
#	endif
#	if(GLM_INSTRUCTION_SET & GLM_INSTRUCTION_SET_SSE3)
#		include <pmmintrin.h>
#	endif
#	if(GLM_INSTRUCTION_SET & GLM_INSTRUCTION_SET_SSSE3)
#		include <tmmintrin.h>
#	endif
#	if(GLM_INSTRUCTION_SET & GLM_INSTRUCTION_SET_POPCNT)
//#		include <popcntintrin.h>
#	endif
#	if(GLM_INSTRUCTION_SET & GLM_INSTRUCTION_SET_SSE4A)
//#		include <ammintrin.h>
#	endif
#	if(GLM_INSTRUCTION_SET & GLM_INSTRUCTION_SET_SSE4_1)
#		include <smmintrin.h>
#	endif
#	if(GLM_INSTRUCTION_SET & GLM_INSTRUCTION_SET_SSE4_2)
#		include <nmmintrin.h>
#	endif
#	if(GLM_INSTRUCTION_SET & GLM_INSTRUCTION_SET_AES)
#		include <wmmintrin.h>
#	endif
#	if(GLM_INSTRUCTION_SET & GLM_INSTRUCTION_SET_PCLMUL)
#		include <wmmintrin.h>
#	endif
#	if(GLM_INSTRUCTION_SET & GLM_INSTRUCTION_SET_AVX)
#		include <immintrin.h>
#	endif
#endif
*/
///////////////////////////////////////////////////////////////////////////////////////////////////
// Swizzle operators

#define GLM_SWIZZLE_NONE            0x00000000
#define GLM_SWIZZLE_XYZW            0x00000002
#define GLM_SWIZZLE_RGBA            0x00000004
#define GLM_SWIZZLE_STQP            0x00000008
#define GLM_SWIZZLE_FULL            (GLM_SWIZZLE_XYZW | GLM_SWIZZLE_RGBA | GLM_SWIZZLE_STQP)

//! By default:
// #define GLM_SWIZZLE GLM_SWIZZLE_NONE

#if(defined(GLM_MESSAGE) && (GLM_MESSAGE & (GLM_MESSAGE_SETUP | GLM_MESSAGE_NOTIFICATION)))
#	if !defined(GLM_SWIZZLE)|| (defined(GLM_SWIZZLE) && GLM_SWIZZLE == GLM_SWIZZLE_NONE)
#		pragma message("GLM message: No swizzling operator used")
#	elif(defined(GLM_SWIZZLE) && GLM_SWIZZLE == GLM_SWIZZLE_FULL)
#		pragma message("GLM message: Full swizzling operator support enabled")
#	elif(defined(GLM_SWIZZLE) && GLM_SWIZZLE & GLM_SWIZZLE_FULL)
#		pragma message("GLM message: Partial swizzling operator support enabled")
#	endif//GLM_SWIZZLE
#endif//GLM_MESSAGE

///////////////////////////////////////////////////////////////////////////////////////////////////
// Use options

// To disable multiple vector component names access.
// GLM_USE_ONLY_XYZW

// To use anonymous union to provide multiple component names access for class valType. Visual C++ only.
// GLM_USE_ANONYMOUS_UNION

#if(defined(GLM_USE_ANONYMOUS_UNION) && !(GLM_COMPILER & GLM_COMPILER_VC))
#error "GLM_USE_ANONYMOUS_UNION is defined to use anonymous union implementation of vector types. Anonymous unions can't be used with GCC."
#endif//GLM_USE_ANONYMOUS_UNION

///////////////////////////////////////////////////////////////////////////////////////////////////
// Static assert

 #if(GLM_LANG == GLM_LANG_CPP0X)
#	define GLM_STATIC_ASSERT(x, message) static_assert(x, message)
#elif(defined(BOOST_STATIC_ASSERT))
#	define GLM_STATIC_ASSERT(x, message) BOOST_STATIC_ASSERT(x)
#else
#	define GLM_STATIC_ASSERT(x, message) typedef char __CASSERT__##__LINE__[(x) ? 1 : -1]
#endif//GLM_DEPENDENCE

///////////////////////////////////////////////////////////////////////////////////////////////////

#endif//glm_setup

#include <iostream>
#include "../include/vector_like_glsl.h"
#include "../include/CodeMaker/code_maker.h"

int main() {
	VectorLikeGLSL::MakeVectorSwizzleCode("vec2_swizzle.h",2);
	VectorLikeGLSL::MakeVectorSwizzleCode("vec3_swizzle.h",3);
	VectorLikeGLSL::MakeVectorSwizzleCode("vec4_swizzle.h",4);

	VectorLikeGLSL::MakeVectorSwizzleUnitTest("test_vec2_swizzle.cpp", 2);
	VectorLikeGLSL::MakeVectorSwizzleUnitTest("test_vec3_swizzle.cpp", 3);
	VectorLikeGLSL::MakeVectorSwizzleUnitTest("test_vec4_swizzle.cpp", 4);

	return 0;
}
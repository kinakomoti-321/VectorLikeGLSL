#include <iostream>
#include "../include/vector_like_glsl.h"
#include "../include/CodeMaker/code_maker.h"

int main() {
	VectorLikeGLSL::MakeVectorSwizzleCode("bvec2_swizzle.h",2,VectorLikeGLSL::VectorType::BVECTOR);
	VectorLikeGLSL::MakeVectorSwizzleCode("bvec3_swizzle.h",3,VectorLikeGLSL::VectorType::BVECTOR);
	VectorLikeGLSL::MakeVectorSwizzleCode("bvec4_swizzle.h",4,VectorLikeGLSL::VectorType::BVECTOR);

	//VectorLikeGLSL::MakeVectorSwizzleUnitTest("test_vec2_swizzle.cpp", 2);
	//VectorLikeGLSL::MakeVectorSwizzleUnitTest("test_vec3_swizzle.cpp", 3);
	//VectorLikeGLSL::MakeVectorSwizzleUnitTest("test_vec4_swizzle.cpp", 4);

	return 0;
}
#include <iostream>
#include "../include/vector_like_glsl.h"
#include "../include/CodeMaker/code_maker.h"

using namespace VectorLikeGLSL;
int main() {
	//VectorLikeGLSL::MakeVectorSwizzleCode("ivec2_swizzle.h",2,VectorLikeGLSL::VectorType::IVECTOR);
	//VectorLikeGLSL::MakeVectorSwizzleCode("ivec3_swizzle.h",3,VectorLikeGLSL::VectorType::IVECTOR);
	//VectorLikeGLSL::MakeVectorSwizzleCode("ivec4_swizzle.h",4,VectorLikeGLSL::VectorType::IVECTOR);

	//VectorLikeGLSL::MakeVectorSwizzleCode("uvec2_swizzle.h",2,VectorLikeGLSL::VectorType::UVECTOR);
	//VectorLikeGLSL::MakeVectorSwizzleCode("uvec3_swizzle.h",3,VectorLikeGLSL::VectorType::UVECTOR);
	//VectorLikeGLSL::MakeVectorSwizzleCode("uvec4_swizzle.h",4,VectorLikeGLSL::VectorType::UVECTOR);

	//VectorLikeGLSL::MakeVectorSwizzleUnitTest("test_vec2_swizzle.cpp", 2);
	//VectorLikeGLSL::MakeVectorSwizzleUnitTest("test_vec3_swizzle.cpp", 3);
	//VectorLikeGLSL::MakeVectorSwizzleUnitTest("test_vec4_swizzle.cpp", 4);
	vec4 a = vec4(0.0);
	bvec3 b = bvec3(true,false,false);
	a = vec4(b,23.0);

	std::cout << a.x << " " << a.y << " " << a.z << " " << a.w << std::endl;
	return 0;
}
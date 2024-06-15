#include "pch.h" 
#include "vector_like_glsl.h" 
using namespace VectorLikeGLSL;
namespace Functions{
	TEST(FunctionTest, sin_Vec2) {
		vec2 v1 = vec2(1.0f, 2.0f);
		vec2 v2 = sin(v1);

		EXPECT_EQ(float(v2.x), std::sin(1.0f));
		EXPECT_EQ(float(v2.y), std::sin(2.0f));
	}
}
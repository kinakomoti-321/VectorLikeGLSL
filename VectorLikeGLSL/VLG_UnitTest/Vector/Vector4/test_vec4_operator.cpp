#include "pch.h" 
#include "vector_like_glsl.h" 
using namespace VectorLikeGLSL;
namespace Vector4 {
	
	TEST(OperatorTest, Operator_Add_Vec4_Vec4) {
		vec4 v1 = vec4(1.0f, 2.0f, 3.0f, 4.0f);
		vec4 v2 = vec4(1.0f, 2.0f, 3.0f, 4.0f);
		vec4 v3 = v1 + v2;
		EXPECT_EQ(float(v3.x), 1.0f + 1.0f);
		EXPECT_EQ(float(v3.y), 2.0f + 2.0f);
		EXPECT_EQ(float(v3.z), 3.0f + 3.0f);
		EXPECT_EQ(float(v3.w), 4.0f + 4.0f);
	}

	TEST(OperatorTest, Operator_Subtract_Vec4_Vec4) {
		vec4 v1 = vec4(1.0f, 2.0f, 3.0f, 4.0f);
		vec4 v2 = vec4(1.0f, 2.0f, 3.0f, 4.0f);
		vec4 v3 = v1 - v2;
		EXPECT_EQ(float(v3.x), 1.0f - 1.0f);
		EXPECT_EQ(float(v3.y), 2.0f - 2.0f);
		EXPECT_EQ(float(v3.z), 3.0f - 3.0f);
		EXPECT_EQ(float(v3.w), 4.0f - 4.0f);
	}

	TEST(OperatorTest, Operator_Multiply_Vec4_Vec4) {
		vec4 v1 = vec4(1.0f, 2.0f, 3.0f, 4.0f);
		vec4 v2 = vec4(1.0f, 2.0f, 3.0f, 4.0f);
		vec4 v3 = v1 * v2;
		EXPECT_EQ(float(v3.x), 1.0f * 1.0f);
		EXPECT_EQ(float(v3.y), 2.0f * 2.0f);
		EXPECT_EQ(float(v3.z), 3.0f * 3.0f);
		EXPECT_EQ(float(v3.w), 4.0f * 4.0f);
	}

	TEST(OperatorTest, Operator_Divide_Vec4_Vec4) {
		vec4 v1 = vec4(1.0f, 2.0f, 3.0f, 4.0f);
		vec4 v2 = vec4(1.0f, 2.0f, 3.0f, 4.0f);
		vec4 v3 = v1 / v2;
		EXPECT_EQ(float(v3.x), 1.0f / 1.0f);
		EXPECT_EQ(float(v3.y), 2.0f / 2.0f);
		EXPECT_EQ(float(v3.z), 3.0f / 3.0f);
		EXPECT_EQ(float(v3.w), 4.0f / 4.0f);
	}

	TEST(OperatorTest, Operator_Add_Vec4_Float) {
		vec4 v1 = vec4(1.0f, 2.0f, 3.0f, 4.0f);
		float f = 1.0f;
		vec4 v2 = v1 + f;
		vec4 v3 = f + v1;
		EXPECT_EQ(float(v2.x), 1.0f + 1.0f);
		EXPECT_EQ(float(v2.y), 2.0f + 1.0f);
		EXPECT_EQ(float(v2.z), 3.0f + 1.0f);
		EXPECT_EQ(float(v2.w), 4.0f + 1.0f);

		EXPECT_EQ(float(v3.x), 1.0f + 1.0f);
		EXPECT_EQ(float(v3.y), 2.0f + 1.0f);
		EXPECT_EQ(float(v3.z), 3.0f + 1.0f);
		EXPECT_EQ(float(v3.w), 4.0f + 1.0f);
	}

	TEST(OperatorTest, Operator_Subtract_Vec4_Float) {
		vec4 v1 = vec4(1.0f, 2.0f, 3.0f, 4.0f);
		float f = 1.0f;
		vec4 v2 = v1 - f;
		vec4 v3 = f - v1;
		EXPECT_EQ(float(v2.x), 1.0f - 1.0f);
		EXPECT_EQ(float(v2.y), 2.0f - 1.0f);
		EXPECT_EQ(float(v2.z), 3.0f - 1.0f);
		EXPECT_EQ(float(v2.w), 4.0f - 1.0f);

		EXPECT_EQ(float(v3.x), 1.0f - 1.0f);
		EXPECT_EQ(float(v3.y), 1.0f - 2.0f);
		EXPECT_EQ(float(v3.z), 1.0f - 3.0f);
		EXPECT_EQ(float(v3.w), 1.0f - 4.0f);
	}

	TEST(OperatorTest, Operator_Multiply_Vec4_Float) {
		vec4 v1 = vec4(1.0f, 2.0f, 3.0f, 4.0f);
		float f = 2.0f;
		vec4 v2 = v1 * f;
		vec4 v3 = f * v1;
		EXPECT_EQ(float(v2.x), 1.0f * 2.0f);
		EXPECT_EQ(float(v2.y), 2.0f * 2.0f);
		EXPECT_EQ(float(v2.z), 3.0f * 2.0f);
		EXPECT_EQ(float(v2.w), 4.0f * 2.0f);

		EXPECT_EQ(float(v3.x), 2.0f * 1.0f);
		EXPECT_EQ(float(v3.y), 2.0f * 2.0f);
		EXPECT_EQ(float(v3.z), 2.0f * 3.0f);
		EXPECT_EQ(float(v3.w), 2.0f * 4.0f);
	}

	TEST(OperatorTest, Operator_Divide_Vec4_Float) {
		vec4 v1 = vec4(1.0f, 2.0f, 3.0f, 4.0f);
		float f = 2.0f;
		vec4 v2 = v1 / f;
		vec4 v3 = f / v1;
		EXPECT_EQ(float(v2.x), 1.0f / 2.0f);
		EXPECT_EQ(float(v2.y), 2.0f / 2.0f);
		EXPECT_EQ(float(v2.z), 3.0f / 2.0f);
		EXPECT_EQ(float(v2.w), 4.0f / 2.0f);

		EXPECT_EQ(float(v3.x), 2.0f / 1.0f);
		EXPECT_EQ(float(v3.y), 2.0f / 2.0f);
		EXPECT_EQ(float(v3.z), 2.0f / 3.0f);
		EXPECT_EQ(float(v3.w), 2.0f / 4.0f);
	}

	TEST(OperatorTest, Operator_Negative_Vec4) {
		vec4 v1 = vec4(1.0f, 2.0f, 3.0f, 4.0f);
		vec4 v2 = -v1;
		EXPECT_EQ(float(v2.x), -1.0f);
		EXPECT_EQ(float(v2.y), -2.0f);
		EXPECT_EQ(float(v2.z), -3.0f);
		EXPECT_EQ(float(v2.w), -4.0f);
	}
}
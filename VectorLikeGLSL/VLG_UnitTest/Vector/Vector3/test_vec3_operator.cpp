
#include "pch.h" 
#include "vector_like_glsl.h" 
using namespace VectorLikeGLSL;
namespace Vector3 {
	TEST(OperatorTest, Operator_Add_Vec3_Vec3) {
		vec3 v1 = vec3(1.0f, 2.0f, 3.0f);
		vec3 v2 = vec3(1.0f, 2.0f, 3.0f);
		vec3 v3 = v1 + v2;
		EXPECT_EQ(float(v3.x), 1.0f + 1.0f);
		EXPECT_EQ(float(v3.y), 2.0f + 2.0f);
		EXPECT_EQ(float(v3.z), 3.0f + 3.0f);
	}

	TEST(OperatorTest, Operator_Subtract_Vec3_Vec3) {
		vec3 v1 = vec3(1.0f, 2.0f, 3.0f);
		vec3 v2 = vec3(1.0f, 2.0f, 3.0f);
		vec3 v3 = v1 - v2;
		EXPECT_EQ(float(v3.x), 1.0f - 1.0f);
		EXPECT_EQ(float(v3.y), 2.0f - 2.0f);
		EXPECT_EQ(float(v3.z), 3.0f - 3.0f);
	}

	TEST(OperatorTest, Operator_Multiply_Vec3_Vec3) {
		vec3 v1 = vec3(1.0f, 2.0f, 3.0f);
		vec3 v2 = vec3(1.0f, 2.0f, 3.0f);
		vec3 v3 = v1 * v2;
		EXPECT_EQ(float(v3.x), 1.0f * 1.0f);
		EXPECT_EQ(float(v3.y), 2.0f * 2.0f);
		EXPECT_EQ(float(v3.z), 3.0f * 3.0f);
	}

	TEST(OperatorTest, Operator_Divide_Vec3_Vec3) {
		vec3 v1 = vec3(1.0f, 2.0f, 3.0f);
		vec3 v2 = vec3(1.0f, 2.0f, 3.0f);
		vec3 v3 = v1 / v2;
		EXPECT_EQ(float(v3.x), 1.0f / 1.0f);
		EXPECT_EQ(float(v3.y), 2.0f / 2.0f);
		EXPECT_EQ(float(v3.z), 3.0f / 3.0f);
	}

	TEST(OperatorTest, Operator_Add_Vec3_Float) {
		vec3 v1 = vec3(1.0f, 2.0f, 3.0f);
		float f = 1.0f;
		vec3 v2 = v1 + f;
		vec3 v3 = f + v1;
		EXPECT_EQ(float(v2.x), 1.0f + 1.0f);
		EXPECT_EQ(float(v2.y), 2.0f + 1.0f);
		EXPECT_EQ(float(v2.z), 3.0f + 1.0f);

		EXPECT_EQ(float(v3.x), 1.0f + 1.0f);
		EXPECT_EQ(float(v3.y), 2.0f + 1.0f);
		EXPECT_EQ(float(v3.z), 3.0f + 1.0f);
	}

	TEST(OperatorTest, Operator_Subtract_Vec3_Float) {
		vec3 v1 = vec3(1.0f, 2.0f, 3.0f);
		float f = 1.0f;
		vec3 v2 = v1 - f;
		vec3 v3 = f - v1;
		EXPECT_EQ(float(v2.x), 1.0f - 1.0f);
		EXPECT_EQ(float(v2.y), 2.0f - 1.0f);
		EXPECT_EQ(float(v2.z), 3.0f - 1.0f);

		EXPECT_EQ(float(v3.x), 1.0f - 1.0f);
		EXPECT_EQ(float(v3.y), 1.0f - 2.0f);
		EXPECT_EQ(float(v3.z), 1.0f - 3.0f);
	}
	

	TEST(OperatorTest, Operator_Multiply_Vec3_Float) {
		vec3 v1 = vec3(1.0f, 2.0f, 3.0f);
		float f = 2.0f;
		vec3 v2 = v1 * f;
		vec3 v3 = f * v1;
		EXPECT_EQ(float(v2.x), 1.0f * 2.0f);
		EXPECT_EQ(float(v2.y), 2.0f * 2.0f);
		EXPECT_EQ(float(v2.z), 3.0f * 2.0f);

		EXPECT_EQ(float(v3.x), 1.0f * 2.0f);
		EXPECT_EQ(float(v3.y), 2.0f * 2.0f);
		EXPECT_EQ(float(v3.z), 3.0f * 2.0f);
	}

	TEST(OperatorTest, Operator_Divide_Vec3_Float) {
		vec3 v1 = vec3(1.0f, 2.0f, 3.0f);
		float f = 2.0f;
		vec3 v2 = v1 / f;
		vec3 v3 = f / v1;
		EXPECT_EQ(float(v2.x), 1.0f / 2.0f);
		EXPECT_EQ(float(v2.y), 2.0f / 2.0f);
		EXPECT_EQ(float(v2.z), 3.0f / 2.0f);

		EXPECT_EQ(float(v3.x), 2.0f / 1.0f);
		EXPECT_EQ(float(v3.y), 2.0f / 2.0f);
		EXPECT_EQ(float(v3.z), 2.0f / 3.0f);
	}
}


#include "pch.h" 
#include "vector_like_glsl.h" 
using namespace VectorLikeGLSL;
namespace Vector2 {
	TEST(OperatorTest, Operator_Add_Vec2_Vec2) {
		vec2 v1 = vec2(1.0f, 2.0f);
		vec2 v2 = vec2(1.0f, 2.0f);
		vec2 v3 = v1 + v2;
		EXPECT_EQ(float(v3.x), 1.0f + 1.0f);
		EXPECT_EQ(float(v3.y), 2.0f + 2.0f);
	}

	TEST(OperatorTest, Operator_Subtract_Vec2_Vec2) {
		vec2 v1 = vec2(1.0f, 2.0f);
		vec2 v2 = vec2(1.0f, 2.0f);
		vec2 v3 = v1 - v2;
		EXPECT_EQ(float(v3.x), 1.0f - 1.0f);
		EXPECT_EQ(float(v3.y), 2.0f - 2.0f);
	}

	TEST(OperatorTest, Operator_Multiply_Vec2_Vec2) {
		vec2 v1 = vec2(1.0f, 2.0f);
		vec2 v2 = vec2(1.0f, 2.0f);
		vec2 v3 = v1 * v2;
		EXPECT_EQ(float(v3.x), 1.0f * 1.0f);
		EXPECT_EQ(float(v3.y), 2.0f * 2.0f);
	}

	TEST(OperatorTest, Operator_Divide_Vec2_Vec2) {
		vec2 v1 = vec2(1.0f, 2.0f);
		vec2 v2 = vec2(1.0f, 2.0f);
		vec2 v3 = v1 / v2;
		EXPECT_EQ(float(v3.x), 1.0f / 1.0f);
		EXPECT_EQ(float(v3.y), 2.0f / 2.0f);
	}

	TEST(OperatorTest, Operator_Add_Vec2_Float) {
		vec2 v1 = vec2(1.0f, 2.0f);
		float f = 1.0f;
		vec2 v2 = v1 + f;
		vec2 v3 = f + v1;
		EXPECT_EQ(float(v2.x), 1.0f + 1.0f);
		EXPECT_EQ(float(v2.y), 2.0f + 1.0f);

		EXPECT_EQ(float(v3.x), 1.0f + 1.0f);
		EXPECT_EQ(float(v3.y), 2.0f + 1.0f);
	}

	TEST(OperatorTest, Operator_Subtract_Vec2_Float) {
		vec2 v1 = vec2(1.0f, 2.0f);
		float f = 1.0f;
		vec2 v2 = v1 - f;
		vec2 v3 = f - v1;
		EXPECT_EQ(float(v2.x), 1.0f - 1.0f);
		EXPECT_EQ(float(v2.y), 2.0f - 1.0f);

		EXPECT_EQ(float(v3.x), 1.0f - 1.0f);
		EXPECT_EQ(float(v3.y), 1.0f - 2.0f);
	}

	TEST(OperatorTest, Operator_Multiply_Vec2_Float) {
		vec2 v1 = vec2(1.0f, 2.0f);
		float f = 2.0f;
		vec2 v2 = v1 * f;
		vec2 v3 = f * v1;
		EXPECT_EQ(float(v2.x), 1.0f * 2.0f);
		EXPECT_EQ(float(v2.y), 2.0f * 2.0f);

		EXPECT_EQ(float(v3.x), 1.0f * 2.0f);
		EXPECT_EQ(float(v3.y), 2.0f * 2.0f);
	}

	TEST(OperatorTest, Operator_Divide_Vec2_Float) {
		vec2 v1 = vec2(1.0f, 2.0f);
		float f = 2.0f;
		vec2 v2 = v1 / f;
		vec2 v3 = f / v1;
		EXPECT_EQ(float(v2.x), 1.0f / 2.0f);
		EXPECT_EQ(float(v2.y), 2.0f / 2.0f);

		EXPECT_EQ(float(v3.x), 2.0f / 1.0f);
		EXPECT_EQ(float(v3.y), 2.0f / 2.0f);
	}
}
#include "pch.h" 
#include "vector_like_glsl.h" 
using namespace VectorLikeGLSL;
namespace Vector3 {
	TEST(SwittzleTest, vec3_x) {
		vec3 v1 = vec3(1.000000, 2.000000, 3.000000);
		EXPECT_EQ(float(v1.x), 1.000000);
	}

	TEST(SwittzleTest, vec3_y) {
		vec3 v1 = vec3(1.000000, 2.000000, 3.000000);
		EXPECT_EQ(float(v1.y), 2.000000);
	}

	TEST(SwittzleTest, vec3_z) {
		vec3 v1 = vec3(1.000000, 2.000000, 3.000000);
		EXPECT_EQ(float(v1.z), 3.000000);
	}

	TEST(SwittzleTest, vec3_xx) {
		vec3 v1 = vec3(1.000000, 2.000000, 3.000000);
		vec2 v2 = v1.xx;
		EXPECT_EQ(float(v2.x), 1.000000);
		EXPECT_EQ(float(v2.y), 1.000000);
	}

	TEST(SwittzleTest, vec3_xy) {
		vec3 v1 = vec3(1.000000, 2.000000, 3.000000);
		vec2 v2 = v1.xy;
		EXPECT_EQ(float(v2.x), 1.000000);
		EXPECT_EQ(float(v2.y), 2.000000);
	}

	TEST(SwittzleTest, vec3_xz) {
		vec3 v1 = vec3(1.000000, 2.000000, 3.000000);
		vec2 v2 = v1.xz;
		EXPECT_EQ(float(v2.x), 1.000000);
		EXPECT_EQ(float(v2.y), 3.000000);
	}

	TEST(SwittzleTest, vec3_yx) {
		vec3 v1 = vec3(1.000000, 2.000000, 3.000000);
		vec2 v2 = v1.yx;
		EXPECT_EQ(float(v2.x), 2.000000);
		EXPECT_EQ(float(v2.y), 1.000000);
	}

	TEST(SwittzleTest, vec3_yy) {
		vec3 v1 = vec3(1.000000, 2.000000, 3.000000);
		vec2 v2 = v1.yy;
		EXPECT_EQ(float(v2.x), 2.000000);
		EXPECT_EQ(float(v2.y), 2.000000);
	}

	TEST(SwittzleTest, vec3_yz) {
		vec3 v1 = vec3(1.000000, 2.000000, 3.000000);
		vec2 v2 = v1.yz;
		EXPECT_EQ(float(v2.x), 2.000000);
		EXPECT_EQ(float(v2.y), 3.000000);
	}

	TEST(SwittzleTest, vec3_zx) {
		vec3 v1 = vec3(1.000000, 2.000000, 3.000000);
		vec2 v2 = v1.zx;
		EXPECT_EQ(float(v2.x), 3.000000);
		EXPECT_EQ(float(v2.y), 1.000000);
	}

	TEST(SwittzleTest, vec3_zy) {
		vec3 v1 = vec3(1.000000, 2.000000, 3.000000);
		vec2 v2 = v1.zy;
		EXPECT_EQ(float(v2.x), 3.000000);
		EXPECT_EQ(float(v2.y), 2.000000);
	}

	TEST(SwittzleTest, vec3_zz) {
		vec3 v1 = vec3(1.000000, 2.000000, 3.000000);
		vec2 v2 = v1.zz;
		EXPECT_EQ(float(v2.x), 3.000000);
		EXPECT_EQ(float(v2.y), 3.000000);
	}

	TEST(SwittzleTest, vec3_xxx) {
		vec3 v1 = vec3(1.000000, 2.000000, 3.000000);
		vec3 v2 = v1.xxx;
		EXPECT_EQ(float(v2.x), 1.000000);
		EXPECT_EQ(float(v2.y), 1.000000);
		EXPECT_EQ(float(v2.z), 1.000000);
	}

	TEST(SwittzleTest, vec3_xxy) {
		vec3 v1 = vec3(1.000000, 2.000000, 3.000000);
		vec3 v2 = v1.xxy;
		EXPECT_EQ(float(v2.x), 1.000000);
		EXPECT_EQ(float(v2.y), 1.000000);
		EXPECT_EQ(float(v2.z), 2.000000);
	}

	TEST(SwittzleTest, vec3_xxz) {
		vec3 v1 = vec3(1.000000, 2.000000, 3.000000);
		vec3 v2 = v1.xxz;
		EXPECT_EQ(float(v2.x), 1.000000);
		EXPECT_EQ(float(v2.y), 1.000000);
		EXPECT_EQ(float(v2.z), 3.000000);
	}

	TEST(SwittzleTest, vec3_xyx) {
		vec3 v1 = vec3(1.000000, 2.000000, 3.000000);
		vec3 v2 = v1.xyx;
		EXPECT_EQ(float(v2.x), 1.000000);
		EXPECT_EQ(float(v2.y), 2.000000);
		EXPECT_EQ(float(v2.z), 1.000000);
	}

	TEST(SwittzleTest, vec3_xyy) {
		vec3 v1 = vec3(1.000000, 2.000000, 3.000000);
		vec3 v2 = v1.xyy;
		EXPECT_EQ(float(v2.x), 1.000000);
		EXPECT_EQ(float(v2.y), 2.000000);
		EXPECT_EQ(float(v2.z), 2.000000);
	}

	TEST(SwittzleTest, vec3_xyz) {
		vec3 v1 = vec3(1.000000, 2.000000, 3.000000);
		vec3 v2 = v1.xyz;
		EXPECT_EQ(float(v2.x), 1.000000);
		EXPECT_EQ(float(v2.y), 2.000000);
		EXPECT_EQ(float(v2.z), 3.000000);
	}

	TEST(SwittzleTest, vec3_xzx) {
		vec3 v1 = vec3(1.000000, 2.000000, 3.000000);
		vec3 v2 = v1.xzx;
		EXPECT_EQ(float(v2.x), 1.000000);
		EXPECT_EQ(float(v2.y), 3.000000);
		EXPECT_EQ(float(v2.z), 1.000000);
	}

	TEST(SwittzleTest, vec3_xzy) {
		vec3 v1 = vec3(1.000000, 2.000000, 3.000000);
		vec3 v2 = v1.xzy;
		EXPECT_EQ(float(v2.x), 1.000000);
		EXPECT_EQ(float(v2.y), 3.000000);
		EXPECT_EQ(float(v2.z), 2.000000);
	}

	TEST(SwittzleTest, vec3_xzz) {
		vec3 v1 = vec3(1.000000, 2.000000, 3.000000);
		vec3 v2 = v1.xzz;
		EXPECT_EQ(float(v2.x), 1.000000);
		EXPECT_EQ(float(v2.y), 3.000000);
		EXPECT_EQ(float(v2.z), 3.000000);
	}

	TEST(SwittzleTest, vec3_yxx) {
		vec3 v1 = vec3(1.000000, 2.000000, 3.000000);
		vec3 v2 = v1.yxx;
		EXPECT_EQ(float(v2.x), 2.000000);
		EXPECT_EQ(float(v2.y), 1.000000);
		EXPECT_EQ(float(v2.z), 1.000000);
	}

	TEST(SwittzleTest, vec3_yxy) {
		vec3 v1 = vec3(1.000000, 2.000000, 3.000000);
		vec3 v2 = v1.yxy;
		EXPECT_EQ(float(v2.x), 2.000000);
		EXPECT_EQ(float(v2.y), 1.000000);
		EXPECT_EQ(float(v2.z), 2.000000);
	}

	TEST(SwittzleTest, vec3_yxz) {
		vec3 v1 = vec3(1.000000, 2.000000, 3.000000);
		vec3 v2 = v1.yxz;
		EXPECT_EQ(float(v2.x), 2.000000);
		EXPECT_EQ(float(v2.y), 1.000000);
		EXPECT_EQ(float(v2.z), 3.000000);
	}

	TEST(SwittzleTest, vec3_yyx) {
		vec3 v1 = vec3(1.000000, 2.000000, 3.000000);
		vec3 v2 = v1.yyx;
		EXPECT_EQ(float(v2.x), 2.000000);
		EXPECT_EQ(float(v2.y), 2.000000);
		EXPECT_EQ(float(v2.z), 1.000000);
	}

	TEST(SwittzleTest, vec3_yyy) {
		vec3 v1 = vec3(1.000000, 2.000000, 3.000000);
		vec3 v2 = v1.yyy;
		EXPECT_EQ(float(v2.x), 2.000000);
		EXPECT_EQ(float(v2.y), 2.000000);
		EXPECT_EQ(float(v2.z), 2.000000);
	}

	TEST(SwittzleTest, vec3_yyz) {
		vec3 v1 = vec3(1.000000, 2.000000, 3.000000);
		vec3 v2 = v1.yyz;
		EXPECT_EQ(float(v2.x), 2.000000);
		EXPECT_EQ(float(v2.y), 2.000000);
		EXPECT_EQ(float(v2.z), 3.000000);
	}

	TEST(SwittzleTest, vec3_yzx) {
		vec3 v1 = vec3(1.000000, 2.000000, 3.000000);
		vec3 v2 = v1.yzx;
		EXPECT_EQ(float(v2.x), 2.000000);
		EXPECT_EQ(float(v2.y), 3.000000);
		EXPECT_EQ(float(v2.z), 1.000000);
	}

	TEST(SwittzleTest, vec3_yzy) {
		vec3 v1 = vec3(1.000000, 2.000000, 3.000000);
		vec3 v2 = v1.yzy;
		EXPECT_EQ(float(v2.x), 2.000000);
		EXPECT_EQ(float(v2.y), 3.000000);
		EXPECT_EQ(float(v2.z), 2.000000);
	}

	TEST(SwittzleTest, vec3_yzz) {
		vec3 v1 = vec3(1.000000, 2.000000, 3.000000);
		vec3 v2 = v1.yzz;
		EXPECT_EQ(float(v2.x), 2.000000);
		EXPECT_EQ(float(v2.y), 3.000000);
		EXPECT_EQ(float(v2.z), 3.000000);
	}

	TEST(SwittzleTest, vec3_zxx) {
		vec3 v1 = vec3(1.000000, 2.000000, 3.000000);
		vec3 v2 = v1.zxx;
		EXPECT_EQ(float(v2.x), 3.000000);
		EXPECT_EQ(float(v2.y), 1.000000);
		EXPECT_EQ(float(v2.z), 1.000000);
	}

	TEST(SwittzleTest, vec3_zxy) {
		vec3 v1 = vec3(1.000000, 2.000000, 3.000000);
		vec3 v2 = v1.zxy;
		EXPECT_EQ(float(v2.x), 3.000000);
		EXPECT_EQ(float(v2.y), 1.000000);
		EXPECT_EQ(float(v2.z), 2.000000);
	}

	TEST(SwittzleTest, vec3_zxz) {
		vec3 v1 = vec3(1.000000, 2.000000, 3.000000);
		vec3 v2 = v1.zxz;
		EXPECT_EQ(float(v2.x), 3.000000);
		EXPECT_EQ(float(v2.y), 1.000000);
		EXPECT_EQ(float(v2.z), 3.000000);
	}

	TEST(SwittzleTest, vec3_zyx) {
		vec3 v1 = vec3(1.000000, 2.000000, 3.000000);
		vec3 v2 = v1.zyx;
		EXPECT_EQ(float(v2.x), 3.000000);
		EXPECT_EQ(float(v2.y), 2.000000);
		EXPECT_EQ(float(v2.z), 1.000000);
	}

	TEST(SwittzleTest, vec3_zyy) {
		vec3 v1 = vec3(1.000000, 2.000000, 3.000000);
		vec3 v2 = v1.zyy;
		EXPECT_EQ(float(v2.x), 3.000000);
		EXPECT_EQ(float(v2.y), 2.000000);
		EXPECT_EQ(float(v2.z), 2.000000);
	}

	TEST(SwittzleTest, vec3_zyz) {
		vec3 v1 = vec3(1.000000, 2.000000, 3.000000);
		vec3 v2 = v1.zyz;
		EXPECT_EQ(float(v2.x), 3.000000);
		EXPECT_EQ(float(v2.y), 2.000000);
		EXPECT_EQ(float(v2.z), 3.000000);
	}

	TEST(SwittzleTest, vec3_zzx) {
		vec3 v1 = vec3(1.000000, 2.000000, 3.000000);
		vec3 v2 = v1.zzx;
		EXPECT_EQ(float(v2.x), 3.000000);
		EXPECT_EQ(float(v2.y), 3.000000);
		EXPECT_EQ(float(v2.z), 1.000000);
	}

	TEST(SwittzleTest, vec3_zzy) {
		vec3 v1 = vec3(1.000000, 2.000000, 3.000000);
		vec3 v2 = v1.zzy;
		EXPECT_EQ(float(v2.x), 3.000000);
		EXPECT_EQ(float(v2.y), 3.000000);
		EXPECT_EQ(float(v2.z), 2.000000);
	}

	TEST(SwittzleTest, vec3_zzz) {
		vec3 v1 = vec3(1.000000, 2.000000, 3.000000);
		vec3 v2 = v1.zzz;
		EXPECT_EQ(float(v2.x), 3.000000);
		EXPECT_EQ(float(v2.y), 3.000000);
		EXPECT_EQ(float(v2.z), 3.000000);
	}

	TEST(SwittzleTest, vec3_xxxx) {
		vec3 v1 = vec3(1.000000, 2.000000, 3.000000);
		vec4 v2 = v1.xxxx;
		EXPECT_EQ(float(v2.x), 1.000000);
		EXPECT_EQ(float(v2.y), 1.000000);
		EXPECT_EQ(float(v2.z), 1.000000);
		EXPECT_EQ(float(v2.w), 1.000000);
	}

	TEST(SwittzleTest, vec3_xxxy) {
		vec3 v1 = vec3(1.000000, 2.000000, 3.000000);
		vec4 v2 = v1.xxxy;
		EXPECT_EQ(float(v2.x), 1.000000);
		EXPECT_EQ(float(v2.y), 1.000000);
		EXPECT_EQ(float(v2.z), 1.000000);
		EXPECT_EQ(float(v2.w), 2.000000);
	}

	TEST(SwittzleTest, vec3_xxxz) {
		vec3 v1 = vec3(1.000000, 2.000000, 3.000000);
		vec4 v2 = v1.xxxz;
		EXPECT_EQ(float(v2.x), 1.000000);
		EXPECT_EQ(float(v2.y), 1.000000);
		EXPECT_EQ(float(v2.z), 1.000000);
		EXPECT_EQ(float(v2.w), 3.000000);
	}

	TEST(SwittzleTest, vec3_xxyx) {
		vec3 v1 = vec3(1.000000, 2.000000, 3.000000);
		vec4 v2 = v1.xxyx;
		EXPECT_EQ(float(v2.x), 1.000000);
		EXPECT_EQ(float(v2.y), 1.000000);
		EXPECT_EQ(float(v2.z), 2.000000);
		EXPECT_EQ(float(v2.w), 1.000000);
	}

	TEST(SwittzleTest, vec3_xxyy) {
		vec3 v1 = vec3(1.000000, 2.000000, 3.000000);
		vec4 v2 = v1.xxyy;
		EXPECT_EQ(float(v2.x), 1.000000);
		EXPECT_EQ(float(v2.y), 1.000000);
		EXPECT_EQ(float(v2.z), 2.000000);
		EXPECT_EQ(float(v2.w), 2.000000);
	}

	TEST(SwittzleTest, vec3_xxyz) {
		vec3 v1 = vec3(1.000000, 2.000000, 3.000000);
		vec4 v2 = v1.xxyz;
		EXPECT_EQ(float(v2.x), 1.000000);
		EXPECT_EQ(float(v2.y), 1.000000);
		EXPECT_EQ(float(v2.z), 2.000000);
		EXPECT_EQ(float(v2.w), 3.000000);
	}

	TEST(SwittzleTest, vec3_xxzx) {
		vec3 v1 = vec3(1.000000, 2.000000, 3.000000);
		vec4 v2 = v1.xxzx;
		EXPECT_EQ(float(v2.x), 1.000000);
		EXPECT_EQ(float(v2.y), 1.000000);
		EXPECT_EQ(float(v2.z), 3.000000);
		EXPECT_EQ(float(v2.w), 1.000000);
	}

	TEST(SwittzleTest, vec3_xxzy) {
		vec3 v1 = vec3(1.000000, 2.000000, 3.000000);
		vec4 v2 = v1.xxzy;
		EXPECT_EQ(float(v2.x), 1.000000);
		EXPECT_EQ(float(v2.y), 1.000000);
		EXPECT_EQ(float(v2.z), 3.000000);
		EXPECT_EQ(float(v2.w), 2.000000);
	}

	TEST(SwittzleTest, vec3_xxzz) {
		vec3 v1 = vec3(1.000000, 2.000000, 3.000000);
		vec4 v2 = v1.xxzz;
		EXPECT_EQ(float(v2.x), 1.000000);
		EXPECT_EQ(float(v2.y), 1.000000);
		EXPECT_EQ(float(v2.z), 3.000000);
		EXPECT_EQ(float(v2.w), 3.000000);
	}

	TEST(SwittzleTest, vec3_xyxx) {
		vec3 v1 = vec3(1.000000, 2.000000, 3.000000);
		vec4 v2 = v1.xyxx;
		EXPECT_EQ(float(v2.x), 1.000000);
		EXPECT_EQ(float(v2.y), 2.000000);
		EXPECT_EQ(float(v2.z), 1.000000);
		EXPECT_EQ(float(v2.w), 1.000000);
	}

	TEST(SwittzleTest, vec3_xyxy) {
		vec3 v1 = vec3(1.000000, 2.000000, 3.000000);
		vec4 v2 = v1.xyxy;
		EXPECT_EQ(float(v2.x), 1.000000);
		EXPECT_EQ(float(v2.y), 2.000000);
		EXPECT_EQ(float(v2.z), 1.000000);
		EXPECT_EQ(float(v2.w), 2.000000);
	}

	TEST(SwittzleTest, vec3_xyxz) {
		vec3 v1 = vec3(1.000000, 2.000000, 3.000000);
		vec4 v2 = v1.xyxz;
		EXPECT_EQ(float(v2.x), 1.000000);
		EXPECT_EQ(float(v2.y), 2.000000);
		EXPECT_EQ(float(v2.z), 1.000000);
		EXPECT_EQ(float(v2.w), 3.000000);
	}

	TEST(SwittzleTest, vec3_xyyx) {
		vec3 v1 = vec3(1.000000, 2.000000, 3.000000);
		vec4 v2 = v1.xyyx;
		EXPECT_EQ(float(v2.x), 1.000000);
		EXPECT_EQ(float(v2.y), 2.000000);
		EXPECT_EQ(float(v2.z), 2.000000);
		EXPECT_EQ(float(v2.w), 1.000000);
	}

	TEST(SwittzleTest, vec3_xyyy) {
		vec3 v1 = vec3(1.000000, 2.000000, 3.000000);
		vec4 v2 = v1.xyyy;
		EXPECT_EQ(float(v2.x), 1.000000);
		EXPECT_EQ(float(v2.y), 2.000000);
		EXPECT_EQ(float(v2.z), 2.000000);
		EXPECT_EQ(float(v2.w), 2.000000);
	}

	TEST(SwittzleTest, vec3_xyyz) {
		vec3 v1 = vec3(1.000000, 2.000000, 3.000000);
		vec4 v2 = v1.xyyz;
		EXPECT_EQ(float(v2.x), 1.000000);
		EXPECT_EQ(float(v2.y), 2.000000);
		EXPECT_EQ(float(v2.z), 2.000000);
		EXPECT_EQ(float(v2.w), 3.000000);
	}

	TEST(SwittzleTest, vec3_xyzx) {
		vec3 v1 = vec3(1.000000, 2.000000, 3.000000);
		vec4 v2 = v1.xyzx;
		EXPECT_EQ(float(v2.x), 1.000000);
		EXPECT_EQ(float(v2.y), 2.000000);
		EXPECT_EQ(float(v2.z), 3.000000);
		EXPECT_EQ(float(v2.w), 1.000000);
	}

	TEST(SwittzleTest, vec3_xyzy) {
		vec3 v1 = vec3(1.000000, 2.000000, 3.000000);
		vec4 v2 = v1.xyzy;
		EXPECT_EQ(float(v2.x), 1.000000);
		EXPECT_EQ(float(v2.y), 2.000000);
		EXPECT_EQ(float(v2.z), 3.000000);
		EXPECT_EQ(float(v2.w), 2.000000);
	}

	TEST(SwittzleTest, vec3_xyzz) {
		vec3 v1 = vec3(1.000000, 2.000000, 3.000000);
		vec4 v2 = v1.xyzz;
		EXPECT_EQ(float(v2.x), 1.000000);
		EXPECT_EQ(float(v2.y), 2.000000);
		EXPECT_EQ(float(v2.z), 3.000000);
		EXPECT_EQ(float(v2.w), 3.000000);
	}

	TEST(SwittzleTest, vec3_xzxx) {
		vec3 v1 = vec3(1.000000, 2.000000, 3.000000);
		vec4 v2 = v1.xzxx;
		EXPECT_EQ(float(v2.x), 1.000000);
		EXPECT_EQ(float(v2.y), 3.000000);
		EXPECT_EQ(float(v2.z), 1.000000);
		EXPECT_EQ(float(v2.w), 1.000000);
	}

	TEST(SwittzleTest, vec3_xzxy) {
		vec3 v1 = vec3(1.000000, 2.000000, 3.000000);
		vec4 v2 = v1.xzxy;
		EXPECT_EQ(float(v2.x), 1.000000);
		EXPECT_EQ(float(v2.y), 3.000000);
		EXPECT_EQ(float(v2.z), 1.000000);
		EXPECT_EQ(float(v2.w), 2.000000);
	}

	TEST(SwittzleTest, vec3_xzxz) {
		vec3 v1 = vec3(1.000000, 2.000000, 3.000000);
		vec4 v2 = v1.xzxz;
		EXPECT_EQ(float(v2.x), 1.000000);
		EXPECT_EQ(float(v2.y), 3.000000);
		EXPECT_EQ(float(v2.z), 1.000000);
		EXPECT_EQ(float(v2.w), 3.000000);
	}

	TEST(SwittzleTest, vec3_xzyx) {
		vec3 v1 = vec3(1.000000, 2.000000, 3.000000);
		vec4 v2 = v1.xzyx;
		EXPECT_EQ(float(v2.x), 1.000000);
		EXPECT_EQ(float(v2.y), 3.000000);
		EXPECT_EQ(float(v2.z), 2.000000);
		EXPECT_EQ(float(v2.w), 1.000000);
	}

	TEST(SwittzleTest, vec3_xzyy) {
		vec3 v1 = vec3(1.000000, 2.000000, 3.000000);
		vec4 v2 = v1.xzyy;
		EXPECT_EQ(float(v2.x), 1.000000);
		EXPECT_EQ(float(v2.y), 3.000000);
		EXPECT_EQ(float(v2.z), 2.000000);
		EXPECT_EQ(float(v2.w), 2.000000);
	}

	TEST(SwittzleTest, vec3_xzyz) {
		vec3 v1 = vec3(1.000000, 2.000000, 3.000000);
		vec4 v2 = v1.xzyz;
		EXPECT_EQ(float(v2.x), 1.000000);
		EXPECT_EQ(float(v2.y), 3.000000);
		EXPECT_EQ(float(v2.z), 2.000000);
		EXPECT_EQ(float(v2.w), 3.000000);
	}

	TEST(SwittzleTest, vec3_xzzx) {
		vec3 v1 = vec3(1.000000, 2.000000, 3.000000);
		vec4 v2 = v1.xzzx;
		EXPECT_EQ(float(v2.x), 1.000000);
		EXPECT_EQ(float(v2.y), 3.000000);
		EXPECT_EQ(float(v2.z), 3.000000);
		EXPECT_EQ(float(v2.w), 1.000000);
	}

	TEST(SwittzleTest, vec3_xzzy) {
		vec3 v1 = vec3(1.000000, 2.000000, 3.000000);
		vec4 v2 = v1.xzzy;
		EXPECT_EQ(float(v2.x), 1.000000);
		EXPECT_EQ(float(v2.y), 3.000000);
		EXPECT_EQ(float(v2.z), 3.000000);
		EXPECT_EQ(float(v2.w), 2.000000);
	}

	TEST(SwittzleTest, vec3_xzzz) {
		vec3 v1 = vec3(1.000000, 2.000000, 3.000000);
		vec4 v2 = v1.xzzz;
		EXPECT_EQ(float(v2.x), 1.000000);
		EXPECT_EQ(float(v2.y), 3.000000);
		EXPECT_EQ(float(v2.z), 3.000000);
		EXPECT_EQ(float(v2.w), 3.000000);
	}

	TEST(SwittzleTest, vec3_yxxx) {
		vec3 v1 = vec3(1.000000, 2.000000, 3.000000);
		vec4 v2 = v1.yxxx;
		EXPECT_EQ(float(v2.x), 2.000000);
		EXPECT_EQ(float(v2.y), 1.000000);
		EXPECT_EQ(float(v2.z), 1.000000);
		EXPECT_EQ(float(v2.w), 1.000000);
	}

	TEST(SwittzleTest, vec3_yxxy) {
		vec3 v1 = vec3(1.000000, 2.000000, 3.000000);
		vec4 v2 = v1.yxxy;
		EXPECT_EQ(float(v2.x), 2.000000);
		EXPECT_EQ(float(v2.y), 1.000000);
		EXPECT_EQ(float(v2.z), 1.000000);
		EXPECT_EQ(float(v2.w), 2.000000);
	}

	TEST(SwittzleTest, vec3_yxxz) {
		vec3 v1 = vec3(1.000000, 2.000000, 3.000000);
		vec4 v2 = v1.yxxz;
		EXPECT_EQ(float(v2.x), 2.000000);
		EXPECT_EQ(float(v2.y), 1.000000);
		EXPECT_EQ(float(v2.z), 1.000000);
		EXPECT_EQ(float(v2.w), 3.000000);
	}

	TEST(SwittzleTest, vec3_yxyx) {
		vec3 v1 = vec3(1.000000, 2.000000, 3.000000);
		vec4 v2 = v1.yxyx;
		EXPECT_EQ(float(v2.x), 2.000000);
		EXPECT_EQ(float(v2.y), 1.000000);
		EXPECT_EQ(float(v2.z), 2.000000);
		EXPECT_EQ(float(v2.w), 1.000000);
	}

	TEST(SwittzleTest, vec3_yxyy) {
		vec3 v1 = vec3(1.000000, 2.000000, 3.000000);
		vec4 v2 = v1.yxyy;
		EXPECT_EQ(float(v2.x), 2.000000);
		EXPECT_EQ(float(v2.y), 1.000000);
		EXPECT_EQ(float(v2.z), 2.000000);
		EXPECT_EQ(float(v2.w), 2.000000);
	}

	TEST(SwittzleTest, vec3_yxyz) {
		vec3 v1 = vec3(1.000000, 2.000000, 3.000000);
		vec4 v2 = v1.yxyz;
		EXPECT_EQ(float(v2.x), 2.000000);
		EXPECT_EQ(float(v2.y), 1.000000);
		EXPECT_EQ(float(v2.z), 2.000000);
		EXPECT_EQ(float(v2.w), 3.000000);
	}

	TEST(SwittzleTest, vec3_yxzx) {
		vec3 v1 = vec3(1.000000, 2.000000, 3.000000);
		vec4 v2 = v1.yxzx;
		EXPECT_EQ(float(v2.x), 2.000000);
		EXPECT_EQ(float(v2.y), 1.000000);
		EXPECT_EQ(float(v2.z), 3.000000);
		EXPECT_EQ(float(v2.w), 1.000000);
	}

	TEST(SwittzleTest, vec3_yxzy) {
		vec3 v1 = vec3(1.000000, 2.000000, 3.000000);
		vec4 v2 = v1.yxzy;
		EXPECT_EQ(float(v2.x), 2.000000);
		EXPECT_EQ(float(v2.y), 1.000000);
		EXPECT_EQ(float(v2.z), 3.000000);
		EXPECT_EQ(float(v2.w), 2.000000);
	}

	TEST(SwittzleTest, vec3_yxzz) {
		vec3 v1 = vec3(1.000000, 2.000000, 3.000000);
		vec4 v2 = v1.yxzz;
		EXPECT_EQ(float(v2.x), 2.000000);
		EXPECT_EQ(float(v2.y), 1.000000);
		EXPECT_EQ(float(v2.z), 3.000000);
		EXPECT_EQ(float(v2.w), 3.000000);
	}

	TEST(SwittzleTest, vec3_yyxx) {
		vec3 v1 = vec3(1.000000, 2.000000, 3.000000);
		vec4 v2 = v1.yyxx;
		EXPECT_EQ(float(v2.x), 2.000000);
		EXPECT_EQ(float(v2.y), 2.000000);
		EXPECT_EQ(float(v2.z), 1.000000);
		EXPECT_EQ(float(v2.w), 1.000000);
	}

	TEST(SwittzleTest, vec3_yyxy) {
		vec3 v1 = vec3(1.000000, 2.000000, 3.000000);
		vec4 v2 = v1.yyxy;
		EXPECT_EQ(float(v2.x), 2.000000);
		EXPECT_EQ(float(v2.y), 2.000000);
		EXPECT_EQ(float(v2.z), 1.000000);
		EXPECT_EQ(float(v2.w), 2.000000);
	}

	TEST(SwittzleTest, vec3_yyxz) {
		vec3 v1 = vec3(1.000000, 2.000000, 3.000000);
		vec4 v2 = v1.yyxz;
		EXPECT_EQ(float(v2.x), 2.000000);
		EXPECT_EQ(float(v2.y), 2.000000);
		EXPECT_EQ(float(v2.z), 1.000000);
		EXPECT_EQ(float(v2.w), 3.000000);
	}

	TEST(SwittzleTest, vec3_yyyx) {
		vec3 v1 = vec3(1.000000, 2.000000, 3.000000);
		vec4 v2 = v1.yyyx;
		EXPECT_EQ(float(v2.x), 2.000000);
		EXPECT_EQ(float(v2.y), 2.000000);
		EXPECT_EQ(float(v2.z), 2.000000);
		EXPECT_EQ(float(v2.w), 1.000000);
	}

	TEST(SwittzleTest, vec3_yyyy) {
		vec3 v1 = vec3(1.000000, 2.000000, 3.000000);
		vec4 v2 = v1.yyyy;
		EXPECT_EQ(float(v2.x), 2.000000);
		EXPECT_EQ(float(v2.y), 2.000000);
		EXPECT_EQ(float(v2.z), 2.000000);
		EXPECT_EQ(float(v2.w), 2.000000);
	}

	TEST(SwittzleTest, vec3_yyyz) {
		vec3 v1 = vec3(1.000000, 2.000000, 3.000000);
		vec4 v2 = v1.yyyz;
		EXPECT_EQ(float(v2.x), 2.000000);
		EXPECT_EQ(float(v2.y), 2.000000);
		EXPECT_EQ(float(v2.z), 2.000000);
		EXPECT_EQ(float(v2.w), 3.000000);
	}

	TEST(SwittzleTest, vec3_yyzx) {
		vec3 v1 = vec3(1.000000, 2.000000, 3.000000);
		vec4 v2 = v1.yyzx;
		EXPECT_EQ(float(v2.x), 2.000000);
		EXPECT_EQ(float(v2.y), 2.000000);
		EXPECT_EQ(float(v2.z), 3.000000);
		EXPECT_EQ(float(v2.w), 1.000000);
	}

	TEST(SwittzleTest, vec3_yyzy) {
		vec3 v1 = vec3(1.000000, 2.000000, 3.000000);
		vec4 v2 = v1.yyzy;
		EXPECT_EQ(float(v2.x), 2.000000);
		EXPECT_EQ(float(v2.y), 2.000000);
		EXPECT_EQ(float(v2.z), 3.000000);
		EXPECT_EQ(float(v2.w), 2.000000);
	}

	TEST(SwittzleTest, vec3_yyzz) {
		vec3 v1 = vec3(1.000000, 2.000000, 3.000000);
		vec4 v2 = v1.yyzz;
		EXPECT_EQ(float(v2.x), 2.000000);
		EXPECT_EQ(float(v2.y), 2.000000);
		EXPECT_EQ(float(v2.z), 3.000000);
		EXPECT_EQ(float(v2.w), 3.000000);
	}

	TEST(SwittzleTest, vec3_yzxx) {
		vec3 v1 = vec3(1.000000, 2.000000, 3.000000);
		vec4 v2 = v1.yzxx;
		EXPECT_EQ(float(v2.x), 2.000000);
		EXPECT_EQ(float(v2.y), 3.000000);
		EXPECT_EQ(float(v2.z), 1.000000);
		EXPECT_EQ(float(v2.w), 1.000000);
	}

	TEST(SwittzleTest, vec3_yzxy) {
		vec3 v1 = vec3(1.000000, 2.000000, 3.000000);
		vec4 v2 = v1.yzxy;
		EXPECT_EQ(float(v2.x), 2.000000);
		EXPECT_EQ(float(v2.y), 3.000000);
		EXPECT_EQ(float(v2.z), 1.000000);
		EXPECT_EQ(float(v2.w), 2.000000);
	}

	TEST(SwittzleTest, vec3_yzxz) {
		vec3 v1 = vec3(1.000000, 2.000000, 3.000000);
		vec4 v2 = v1.yzxz;
		EXPECT_EQ(float(v2.x), 2.000000);
		EXPECT_EQ(float(v2.y), 3.000000);
		EXPECT_EQ(float(v2.z), 1.000000);
		EXPECT_EQ(float(v2.w), 3.000000);
	}

	TEST(SwittzleTest, vec3_yzyx) {
		vec3 v1 = vec3(1.000000, 2.000000, 3.000000);
		vec4 v2 = v1.yzyx;
		EXPECT_EQ(float(v2.x), 2.000000);
		EXPECT_EQ(float(v2.y), 3.000000);
		EXPECT_EQ(float(v2.z), 2.000000);
		EXPECT_EQ(float(v2.w), 1.000000);
	}

	TEST(SwittzleTest, vec3_yzyy) {
		vec3 v1 = vec3(1.000000, 2.000000, 3.000000);
		vec4 v2 = v1.yzyy;
		EXPECT_EQ(float(v2.x), 2.000000);
		EXPECT_EQ(float(v2.y), 3.000000);
		EXPECT_EQ(float(v2.z), 2.000000);
		EXPECT_EQ(float(v2.w), 2.000000);
	}

	TEST(SwittzleTest, vec3_yzyz) {
		vec3 v1 = vec3(1.000000, 2.000000, 3.000000);
		vec4 v2 = v1.yzyz;
		EXPECT_EQ(float(v2.x), 2.000000);
		EXPECT_EQ(float(v2.y), 3.000000);
		EXPECT_EQ(float(v2.z), 2.000000);
		EXPECT_EQ(float(v2.w), 3.000000);
	}

	TEST(SwittzleTest, vec3_yzzx) {
		vec3 v1 = vec3(1.000000, 2.000000, 3.000000);
		vec4 v2 = v1.yzzx;
		EXPECT_EQ(float(v2.x), 2.000000);
		EXPECT_EQ(float(v2.y), 3.000000);
		EXPECT_EQ(float(v2.z), 3.000000);
		EXPECT_EQ(float(v2.w), 1.000000);
	}

	TEST(SwittzleTest, vec3_yzzy) {
		vec3 v1 = vec3(1.000000, 2.000000, 3.000000);
		vec4 v2 = v1.yzzy;
		EXPECT_EQ(float(v2.x), 2.000000);
		EXPECT_EQ(float(v2.y), 3.000000);
		EXPECT_EQ(float(v2.z), 3.000000);
		EXPECT_EQ(float(v2.w), 2.000000);
	}

	TEST(SwittzleTest, vec3_yzzz) {
		vec3 v1 = vec3(1.000000, 2.000000, 3.000000);
		vec4 v2 = v1.yzzz;
		EXPECT_EQ(float(v2.x), 2.000000);
		EXPECT_EQ(float(v2.y), 3.000000);
		EXPECT_EQ(float(v2.z), 3.000000);
		EXPECT_EQ(float(v2.w), 3.000000);
	}

	TEST(SwittzleTest, vec3_zxxx) {
		vec3 v1 = vec3(1.000000, 2.000000, 3.000000);
		vec4 v2 = v1.zxxx;
		EXPECT_EQ(float(v2.x), 3.000000);
		EXPECT_EQ(float(v2.y), 1.000000);
		EXPECT_EQ(float(v2.z), 1.000000);
		EXPECT_EQ(float(v2.w), 1.000000);
	}

	TEST(SwittzleTest, vec3_zxxy) {
		vec3 v1 = vec3(1.000000, 2.000000, 3.000000);
		vec4 v2 = v1.zxxy;
		EXPECT_EQ(float(v2.x), 3.000000);
		EXPECT_EQ(float(v2.y), 1.000000);
		EXPECT_EQ(float(v2.z), 1.000000);
		EXPECT_EQ(float(v2.w), 2.000000);
	}

	TEST(SwittzleTest, vec3_zxxz) {
		vec3 v1 = vec3(1.000000, 2.000000, 3.000000);
		vec4 v2 = v1.zxxz;
		EXPECT_EQ(float(v2.x), 3.000000);
		EXPECT_EQ(float(v2.y), 1.000000);
		EXPECT_EQ(float(v2.z), 1.000000);
		EXPECT_EQ(float(v2.w), 3.000000);
	}

	TEST(SwittzleTest, vec3_zxyx) {
		vec3 v1 = vec3(1.000000, 2.000000, 3.000000);
		vec4 v2 = v1.zxyx;
		EXPECT_EQ(float(v2.x), 3.000000);
		EXPECT_EQ(float(v2.y), 1.000000);
		EXPECT_EQ(float(v2.z), 2.000000);
		EXPECT_EQ(float(v2.w), 1.000000);
	}

	TEST(SwittzleTest, vec3_zxyy) {
		vec3 v1 = vec3(1.000000, 2.000000, 3.000000);
		vec4 v2 = v1.zxyy;
		EXPECT_EQ(float(v2.x), 3.000000);
		EXPECT_EQ(float(v2.y), 1.000000);
		EXPECT_EQ(float(v2.z), 2.000000);
		EXPECT_EQ(float(v2.w), 2.000000);
	}

	TEST(SwittzleTest, vec3_zxyz) {
		vec3 v1 = vec3(1.000000, 2.000000, 3.000000);
		vec4 v2 = v1.zxyz;
		EXPECT_EQ(float(v2.x), 3.000000);
		EXPECT_EQ(float(v2.y), 1.000000);
		EXPECT_EQ(float(v2.z), 2.000000);
		EXPECT_EQ(float(v2.w), 3.000000);
	}

	TEST(SwittzleTest, vec3_zxzx) {
		vec3 v1 = vec3(1.000000, 2.000000, 3.000000);
		vec4 v2 = v1.zxzx;
		EXPECT_EQ(float(v2.x), 3.000000);
		EXPECT_EQ(float(v2.y), 1.000000);
		EXPECT_EQ(float(v2.z), 3.000000);
		EXPECT_EQ(float(v2.w), 1.000000);
	}

	TEST(SwittzleTest, vec3_zxzy) {
		vec3 v1 = vec3(1.000000, 2.000000, 3.000000);
		vec4 v2 = v1.zxzy;
		EXPECT_EQ(float(v2.x), 3.000000);
		EXPECT_EQ(float(v2.y), 1.000000);
		EXPECT_EQ(float(v2.z), 3.000000);
		EXPECT_EQ(float(v2.w), 2.000000);
	}

	TEST(SwittzleTest, vec3_zxzz) {
		vec3 v1 = vec3(1.000000, 2.000000, 3.000000);
		vec4 v2 = v1.zxzz;
		EXPECT_EQ(float(v2.x), 3.000000);
		EXPECT_EQ(float(v2.y), 1.000000);
		EXPECT_EQ(float(v2.z), 3.000000);
		EXPECT_EQ(float(v2.w), 3.000000);
	}

	TEST(SwittzleTest, vec3_zyxx) {
		vec3 v1 = vec3(1.000000, 2.000000, 3.000000);
		vec4 v2 = v1.zyxx;
		EXPECT_EQ(float(v2.x), 3.000000);
		EXPECT_EQ(float(v2.y), 2.000000);
		EXPECT_EQ(float(v2.z), 1.000000);
		EXPECT_EQ(float(v2.w), 1.000000);
	}

	TEST(SwittzleTest, vec3_zyxy) {
		vec3 v1 = vec3(1.000000, 2.000000, 3.000000);
		vec4 v2 = v1.zyxy;
		EXPECT_EQ(float(v2.x), 3.000000);
		EXPECT_EQ(float(v2.y), 2.000000);
		EXPECT_EQ(float(v2.z), 1.000000);
		EXPECT_EQ(float(v2.w), 2.000000);
	}

	TEST(SwittzleTest, vec3_zyxz) {
		vec3 v1 = vec3(1.000000, 2.000000, 3.000000);
		vec4 v2 = v1.zyxz;
		EXPECT_EQ(float(v2.x), 3.000000);
		EXPECT_EQ(float(v2.y), 2.000000);
		EXPECT_EQ(float(v2.z), 1.000000);
		EXPECT_EQ(float(v2.w), 3.000000);
	}

	TEST(SwittzleTest, vec3_zyyx) {
		vec3 v1 = vec3(1.000000, 2.000000, 3.000000);
		vec4 v2 = v1.zyyx;
		EXPECT_EQ(float(v2.x), 3.000000);
		EXPECT_EQ(float(v2.y), 2.000000);
		EXPECT_EQ(float(v2.z), 2.000000);
		EXPECT_EQ(float(v2.w), 1.000000);
	}

	TEST(SwittzleTest, vec3_zyyy) {
		vec3 v1 = vec3(1.000000, 2.000000, 3.000000);
		vec4 v2 = v1.zyyy;
		EXPECT_EQ(float(v2.x), 3.000000);
		EXPECT_EQ(float(v2.y), 2.000000);
		EXPECT_EQ(float(v2.z), 2.000000);
		EXPECT_EQ(float(v2.w), 2.000000);
	}

	TEST(SwittzleTest, vec3_zyyz) {
		vec3 v1 = vec3(1.000000, 2.000000, 3.000000);
		vec4 v2 = v1.zyyz;
		EXPECT_EQ(float(v2.x), 3.000000);
		EXPECT_EQ(float(v2.y), 2.000000);
		EXPECT_EQ(float(v2.z), 2.000000);
		EXPECT_EQ(float(v2.w), 3.000000);
	}

	TEST(SwittzleTest, vec3_zyzx) {
		vec3 v1 = vec3(1.000000, 2.000000, 3.000000);
		vec4 v2 = v1.zyzx;
		EXPECT_EQ(float(v2.x), 3.000000);
		EXPECT_EQ(float(v2.y), 2.000000);
		EXPECT_EQ(float(v2.z), 3.000000);
		EXPECT_EQ(float(v2.w), 1.000000);
	}

	TEST(SwittzleTest, vec3_zyzy) {
		vec3 v1 = vec3(1.000000, 2.000000, 3.000000);
		vec4 v2 = v1.zyzy;
		EXPECT_EQ(float(v2.x), 3.000000);
		EXPECT_EQ(float(v2.y), 2.000000);
		EXPECT_EQ(float(v2.z), 3.000000);
		EXPECT_EQ(float(v2.w), 2.000000);
	}

	TEST(SwittzleTest, vec3_zyzz) {
		vec3 v1 = vec3(1.000000, 2.000000, 3.000000);
		vec4 v2 = v1.zyzz;
		EXPECT_EQ(float(v2.x), 3.000000);
		EXPECT_EQ(float(v2.y), 2.000000);
		EXPECT_EQ(float(v2.z), 3.000000);
		EXPECT_EQ(float(v2.w), 3.000000);
	}

	TEST(SwittzleTest, vec3_zzxx) {
		vec3 v1 = vec3(1.000000, 2.000000, 3.000000);
		vec4 v2 = v1.zzxx;
		EXPECT_EQ(float(v2.x), 3.000000);
		EXPECT_EQ(float(v2.y), 3.000000);
		EXPECT_EQ(float(v2.z), 1.000000);
		EXPECT_EQ(float(v2.w), 1.000000);
	}

	TEST(SwittzleTest, vec3_zzxy) {
		vec3 v1 = vec3(1.000000, 2.000000, 3.000000);
		vec4 v2 = v1.zzxy;
		EXPECT_EQ(float(v2.x), 3.000000);
		EXPECT_EQ(float(v2.y), 3.000000);
		EXPECT_EQ(float(v2.z), 1.000000);
		EXPECT_EQ(float(v2.w), 2.000000);
	}

	TEST(SwittzleTest, vec3_zzxz) {
		vec3 v1 = vec3(1.000000, 2.000000, 3.000000);
		vec4 v2 = v1.zzxz;
		EXPECT_EQ(float(v2.x), 3.000000);
		EXPECT_EQ(float(v2.y), 3.000000);
		EXPECT_EQ(float(v2.z), 1.000000);
		EXPECT_EQ(float(v2.w), 3.000000);
	}

	TEST(SwittzleTest, vec3_zzyx) {
		vec3 v1 = vec3(1.000000, 2.000000, 3.000000);
		vec4 v2 = v1.zzyx;
		EXPECT_EQ(float(v2.x), 3.000000);
		EXPECT_EQ(float(v2.y), 3.000000);
		EXPECT_EQ(float(v2.z), 2.000000);
		EXPECT_EQ(float(v2.w), 1.000000);
	}

	TEST(SwittzleTest, vec3_zzyy) {
		vec3 v1 = vec3(1.000000, 2.000000, 3.000000);
		vec4 v2 = v1.zzyy;
		EXPECT_EQ(float(v2.x), 3.000000);
		EXPECT_EQ(float(v2.y), 3.000000);
		EXPECT_EQ(float(v2.z), 2.000000);
		EXPECT_EQ(float(v2.w), 2.000000);
	}

	TEST(SwittzleTest, vec3_zzyz) {
		vec3 v1 = vec3(1.000000, 2.000000, 3.000000);
		vec4 v2 = v1.zzyz;
		EXPECT_EQ(float(v2.x), 3.000000);
		EXPECT_EQ(float(v2.y), 3.000000);
		EXPECT_EQ(float(v2.z), 2.000000);
		EXPECT_EQ(float(v2.w), 3.000000);
	}

	TEST(SwittzleTest, vec3_zzzx) {
		vec3 v1 = vec3(1.000000, 2.000000, 3.000000);
		vec4 v2 = v1.zzzx;
		EXPECT_EQ(float(v2.x), 3.000000);
		EXPECT_EQ(float(v2.y), 3.000000);
		EXPECT_EQ(float(v2.z), 3.000000);
		EXPECT_EQ(float(v2.w), 1.000000);
	}

	TEST(SwittzleTest, vec3_zzzy) {
		vec3 v1 = vec3(1.000000, 2.000000, 3.000000);
		vec4 v2 = v1.zzzy;
		EXPECT_EQ(float(v2.x), 3.000000);
		EXPECT_EQ(float(v2.y), 3.000000);
		EXPECT_EQ(float(v2.z), 3.000000);
		EXPECT_EQ(float(v2.w), 2.000000);
	}

	TEST(SwittzleTest, vec3_zzzz) {
		vec3 v1 = vec3(1.000000, 2.000000, 3.000000);
		vec4 v2 = v1.zzzz;
		EXPECT_EQ(float(v2.x), 3.000000);
		EXPECT_EQ(float(v2.y), 3.000000);
		EXPECT_EQ(float(v2.z), 3.000000);
		EXPECT_EQ(float(v2.w), 3.000000);
	}

	TEST(SwittzleTest, vec3_r) {
		vec3 v1 = vec3(1.000000, 2.000000, 3.000000);
		EXPECT_EQ(float(v1.r), 1.000000);
	}

	TEST(SwittzleTest, vec3_g) {
		vec3 v1 = vec3(1.000000, 2.000000, 3.000000);
		EXPECT_EQ(float(v1.g), 2.000000);
	}

	TEST(SwittzleTest, vec3_b) {
		vec3 v1 = vec3(1.000000, 2.000000, 3.000000);
		EXPECT_EQ(float(v1.b), 3.000000);
	}

	TEST(SwittzleTest, vec3_rr) {
		vec3 v1 = vec3(1.000000, 2.000000, 3.000000);
		vec2 v2 = v1.rr;
		EXPECT_EQ(float(v2.x), 1.000000);
		EXPECT_EQ(float(v2.y), 1.000000);
	}

	TEST(SwittzleTest, vec3_rg) {
		vec3 v1 = vec3(1.000000, 2.000000, 3.000000);
		vec2 v2 = v1.rg;
		EXPECT_EQ(float(v2.x), 1.000000);
		EXPECT_EQ(float(v2.y), 2.000000);
	}

	TEST(SwittzleTest, vec3_rb) {
		vec3 v1 = vec3(1.000000, 2.000000, 3.000000);
		vec2 v2 = v1.rb;
		EXPECT_EQ(float(v2.x), 1.000000);
		EXPECT_EQ(float(v2.y), 3.000000);
	}

	TEST(SwittzleTest, vec3_gr) {
		vec3 v1 = vec3(1.000000, 2.000000, 3.000000);
		vec2 v2 = v1.gr;
		EXPECT_EQ(float(v2.x), 2.000000);
		EXPECT_EQ(float(v2.y), 1.000000);
	}

	TEST(SwittzleTest, vec3_gg) {
		vec3 v1 = vec3(1.000000, 2.000000, 3.000000);
		vec2 v2 = v1.gg;
		EXPECT_EQ(float(v2.x), 2.000000);
		EXPECT_EQ(float(v2.y), 2.000000);
	}

	TEST(SwittzleTest, vec3_gb) {
		vec3 v1 = vec3(1.000000, 2.000000, 3.000000);
		vec2 v2 = v1.gb;
		EXPECT_EQ(float(v2.x), 2.000000);
		EXPECT_EQ(float(v2.y), 3.000000);
	}

	TEST(SwittzleTest, vec3_br) {
		vec3 v1 = vec3(1.000000, 2.000000, 3.000000);
		vec2 v2 = v1.br;
		EXPECT_EQ(float(v2.x), 3.000000);
		EXPECT_EQ(float(v2.y), 1.000000);
	}

	TEST(SwittzleTest, vec3_bg) {
		vec3 v1 = vec3(1.000000, 2.000000, 3.000000);
		vec2 v2 = v1.bg;
		EXPECT_EQ(float(v2.x), 3.000000);
		EXPECT_EQ(float(v2.y), 2.000000);
	}

	TEST(SwittzleTest, vec3_bb) {
		vec3 v1 = vec3(1.000000, 2.000000, 3.000000);
		vec2 v2 = v1.bb;
		EXPECT_EQ(float(v2.x), 3.000000);
		EXPECT_EQ(float(v2.y), 3.000000);
	}

	TEST(SwittzleTest, vec3_rrr) {
		vec3 v1 = vec3(1.000000, 2.000000, 3.000000);
		vec3 v2 = v1.rrr;
		EXPECT_EQ(float(v2.x), 1.000000);
		EXPECT_EQ(float(v2.y), 1.000000);
		EXPECT_EQ(float(v2.z), 1.000000);
	}

	TEST(SwittzleTest, vec3_rrg) {
		vec3 v1 = vec3(1.000000, 2.000000, 3.000000);
		vec3 v2 = v1.rrg;
		EXPECT_EQ(float(v2.x), 1.000000);
		EXPECT_EQ(float(v2.y), 1.000000);
		EXPECT_EQ(float(v2.z), 2.000000);
	}

	TEST(SwittzleTest, vec3_rrb) {
		vec3 v1 = vec3(1.000000, 2.000000, 3.000000);
		vec3 v2 = v1.rrb;
		EXPECT_EQ(float(v2.x), 1.000000);
		EXPECT_EQ(float(v2.y), 1.000000);
		EXPECT_EQ(float(v2.z), 3.000000);
	}

	TEST(SwittzleTest, vec3_rgr) {
		vec3 v1 = vec3(1.000000, 2.000000, 3.000000);
		vec3 v2 = v1.rgr;
		EXPECT_EQ(float(v2.x), 1.000000);
		EXPECT_EQ(float(v2.y), 2.000000);
		EXPECT_EQ(float(v2.z), 1.000000);
	}

	TEST(SwittzleTest, vec3_rgg) {
		vec3 v1 = vec3(1.000000, 2.000000, 3.000000);
		vec3 v2 = v1.rgg;
		EXPECT_EQ(float(v2.x), 1.000000);
		EXPECT_EQ(float(v2.y), 2.000000);
		EXPECT_EQ(float(v2.z), 2.000000);
	}

	TEST(SwittzleTest, vec3_rgb) {
		vec3 v1 = vec3(1.000000, 2.000000, 3.000000);
		vec3 v2 = v1.rgb;
		EXPECT_EQ(float(v2.x), 1.000000);
		EXPECT_EQ(float(v2.y), 2.000000);
		EXPECT_EQ(float(v2.z), 3.000000);
	}

	TEST(SwittzleTest, vec3_rbr) {
		vec3 v1 = vec3(1.000000, 2.000000, 3.000000);
		vec3 v2 = v1.rbr;
		EXPECT_EQ(float(v2.x), 1.000000);
		EXPECT_EQ(float(v2.y), 3.000000);
		EXPECT_EQ(float(v2.z), 1.000000);
	}

	TEST(SwittzleTest, vec3_rbg) {
		vec3 v1 = vec3(1.000000, 2.000000, 3.000000);
		vec3 v2 = v1.rbg;
		EXPECT_EQ(float(v2.x), 1.000000);
		EXPECT_EQ(float(v2.y), 3.000000);
		EXPECT_EQ(float(v2.z), 2.000000);
	}

	TEST(SwittzleTest, vec3_rbb) {
		vec3 v1 = vec3(1.000000, 2.000000, 3.000000);
		vec3 v2 = v1.rbb;
		EXPECT_EQ(float(v2.x), 1.000000);
		EXPECT_EQ(float(v2.y), 3.000000);
		EXPECT_EQ(float(v2.z), 3.000000);
	}

	TEST(SwittzleTest, vec3_grr) {
		vec3 v1 = vec3(1.000000, 2.000000, 3.000000);
		vec3 v2 = v1.grr;
		EXPECT_EQ(float(v2.x), 2.000000);
		EXPECT_EQ(float(v2.y), 1.000000);
		EXPECT_EQ(float(v2.z), 1.000000);
	}

	TEST(SwittzleTest, vec3_grg) {
		vec3 v1 = vec3(1.000000, 2.000000, 3.000000);
		vec3 v2 = v1.grg;
		EXPECT_EQ(float(v2.x), 2.000000);
		EXPECT_EQ(float(v2.y), 1.000000);
		EXPECT_EQ(float(v2.z), 2.000000);
	}

	TEST(SwittzleTest, vec3_grb) {
		vec3 v1 = vec3(1.000000, 2.000000, 3.000000);
		vec3 v2 = v1.grb;
		EXPECT_EQ(float(v2.x), 2.000000);
		EXPECT_EQ(float(v2.y), 1.000000);
		EXPECT_EQ(float(v2.z), 3.000000);
	}

	TEST(SwittzleTest, vec3_ggr) {
		vec3 v1 = vec3(1.000000, 2.000000, 3.000000);
		vec3 v2 = v1.ggr;
		EXPECT_EQ(float(v2.x), 2.000000);
		EXPECT_EQ(float(v2.y), 2.000000);
		EXPECT_EQ(float(v2.z), 1.000000);
	}

	TEST(SwittzleTest, vec3_ggg) {
		vec3 v1 = vec3(1.000000, 2.000000, 3.000000);
		vec3 v2 = v1.ggg;
		EXPECT_EQ(float(v2.x), 2.000000);
		EXPECT_EQ(float(v2.y), 2.000000);
		EXPECT_EQ(float(v2.z), 2.000000);
	}

	TEST(SwittzleTest, vec3_ggb) {
		vec3 v1 = vec3(1.000000, 2.000000, 3.000000);
		vec3 v2 = v1.ggb;
		EXPECT_EQ(float(v2.x), 2.000000);
		EXPECT_EQ(float(v2.y), 2.000000);
		EXPECT_EQ(float(v2.z), 3.000000);
	}

	TEST(SwittzleTest, vec3_gbr) {
		vec3 v1 = vec3(1.000000, 2.000000, 3.000000);
		vec3 v2 = v1.gbr;
		EXPECT_EQ(float(v2.x), 2.000000);
		EXPECT_EQ(float(v2.y), 3.000000);
		EXPECT_EQ(float(v2.z), 1.000000);
	}

	TEST(SwittzleTest, vec3_gbg) {
		vec3 v1 = vec3(1.000000, 2.000000, 3.000000);
		vec3 v2 = v1.gbg;
		EXPECT_EQ(float(v2.x), 2.000000);
		EXPECT_EQ(float(v2.y), 3.000000);
		EXPECT_EQ(float(v2.z), 2.000000);
	}

	TEST(SwittzleTest, vec3_gbb) {
		vec3 v1 = vec3(1.000000, 2.000000, 3.000000);
		vec3 v2 = v1.gbb;
		EXPECT_EQ(float(v2.x), 2.000000);
		EXPECT_EQ(float(v2.y), 3.000000);
		EXPECT_EQ(float(v2.z), 3.000000);
	}

	TEST(SwittzleTest, vec3_brr) {
		vec3 v1 = vec3(1.000000, 2.000000, 3.000000);
		vec3 v2 = v1.brr;
		EXPECT_EQ(float(v2.x), 3.000000);
		EXPECT_EQ(float(v2.y), 1.000000);
		EXPECT_EQ(float(v2.z), 1.000000);
	}

	TEST(SwittzleTest, vec3_brg) {
		vec3 v1 = vec3(1.000000, 2.000000, 3.000000);
		vec3 v2 = v1.brg;
		EXPECT_EQ(float(v2.x), 3.000000);
		EXPECT_EQ(float(v2.y), 1.000000);
		EXPECT_EQ(float(v2.z), 2.000000);
	}

	TEST(SwittzleTest, vec3_brb) {
		vec3 v1 = vec3(1.000000, 2.000000, 3.000000);
		vec3 v2 = v1.brb;
		EXPECT_EQ(float(v2.x), 3.000000);
		EXPECT_EQ(float(v2.y), 1.000000);
		EXPECT_EQ(float(v2.z), 3.000000);
	}

	TEST(SwittzleTest, vec3_bgr) {
		vec3 v1 = vec3(1.000000, 2.000000, 3.000000);
		vec3 v2 = v1.bgr;
		EXPECT_EQ(float(v2.x), 3.000000);
		EXPECT_EQ(float(v2.y), 2.000000);
		EXPECT_EQ(float(v2.z), 1.000000);
	}

	TEST(SwittzleTest, vec3_bgg) {
		vec3 v1 = vec3(1.000000, 2.000000, 3.000000);
		vec3 v2 = v1.bgg;
		EXPECT_EQ(float(v2.x), 3.000000);
		EXPECT_EQ(float(v2.y), 2.000000);
		EXPECT_EQ(float(v2.z), 2.000000);
	}

	TEST(SwittzleTest, vec3_bgb) {
		vec3 v1 = vec3(1.000000, 2.000000, 3.000000);
		vec3 v2 = v1.bgb;
		EXPECT_EQ(float(v2.x), 3.000000);
		EXPECT_EQ(float(v2.y), 2.000000);
		EXPECT_EQ(float(v2.z), 3.000000);
	}

	TEST(SwittzleTest, vec3_bbr) {
		vec3 v1 = vec3(1.000000, 2.000000, 3.000000);
		vec3 v2 = v1.bbr;
		EXPECT_EQ(float(v2.x), 3.000000);
		EXPECT_EQ(float(v2.y), 3.000000);
		EXPECT_EQ(float(v2.z), 1.000000);
	}

	TEST(SwittzleTest, vec3_bbg) {
		vec3 v1 = vec3(1.000000, 2.000000, 3.000000);
		vec3 v2 = v1.bbg;
		EXPECT_EQ(float(v2.x), 3.000000);
		EXPECT_EQ(float(v2.y), 3.000000);
		EXPECT_EQ(float(v2.z), 2.000000);
	}

	TEST(SwittzleTest, vec3_bbb) {
		vec3 v1 = vec3(1.000000, 2.000000, 3.000000);
		vec3 v2 = v1.bbb;
		EXPECT_EQ(float(v2.x), 3.000000);
		EXPECT_EQ(float(v2.y), 3.000000);
		EXPECT_EQ(float(v2.z), 3.000000);
	}

	TEST(SwittzleTest, vec3_rrrr) {
		vec3 v1 = vec3(1.000000, 2.000000, 3.000000);
		vec4 v2 = v1.rrrr;
		EXPECT_EQ(float(v2.x), 1.000000);
		EXPECT_EQ(float(v2.y), 1.000000);
		EXPECT_EQ(float(v2.z), 1.000000);
		EXPECT_EQ(float(v2.w), 1.000000);
	}

	TEST(SwittzleTest, vec3_rrrg) {
		vec3 v1 = vec3(1.000000, 2.000000, 3.000000);
		vec4 v2 = v1.rrrg;
		EXPECT_EQ(float(v2.x), 1.000000);
		EXPECT_EQ(float(v2.y), 1.000000);
		EXPECT_EQ(float(v2.z), 1.000000);
		EXPECT_EQ(float(v2.w), 2.000000);
	}

	TEST(SwittzleTest, vec3_rrrb) {
		vec3 v1 = vec3(1.000000, 2.000000, 3.000000);
		vec4 v2 = v1.rrrb;
		EXPECT_EQ(float(v2.x), 1.000000);
		EXPECT_EQ(float(v2.y), 1.000000);
		EXPECT_EQ(float(v2.z), 1.000000);
		EXPECT_EQ(float(v2.w), 3.000000);
	}

	TEST(SwittzleTest, vec3_rrgr) {
		vec3 v1 = vec3(1.000000, 2.000000, 3.000000);
		vec4 v2 = v1.rrgr;
		EXPECT_EQ(float(v2.x), 1.000000);
		EXPECT_EQ(float(v2.y), 1.000000);
		EXPECT_EQ(float(v2.z), 2.000000);
		EXPECT_EQ(float(v2.w), 1.000000);
	}

	TEST(SwittzleTest, vec3_rrgg) {
		vec3 v1 = vec3(1.000000, 2.000000, 3.000000);
		vec4 v2 = v1.rrgg;
		EXPECT_EQ(float(v2.x), 1.000000);
		EXPECT_EQ(float(v2.y), 1.000000);
		EXPECT_EQ(float(v2.z), 2.000000);
		EXPECT_EQ(float(v2.w), 2.000000);
	}

	TEST(SwittzleTest, vec3_rrgb) {
		vec3 v1 = vec3(1.000000, 2.000000, 3.000000);
		vec4 v2 = v1.rrgb;
		EXPECT_EQ(float(v2.x), 1.000000);
		EXPECT_EQ(float(v2.y), 1.000000);
		EXPECT_EQ(float(v2.z), 2.000000);
		EXPECT_EQ(float(v2.w), 3.000000);
	}

	TEST(SwittzleTest, vec3_rrbr) {
		vec3 v1 = vec3(1.000000, 2.000000, 3.000000);
		vec4 v2 = v1.rrbr;
		EXPECT_EQ(float(v2.x), 1.000000);
		EXPECT_EQ(float(v2.y), 1.000000);
		EXPECT_EQ(float(v2.z), 3.000000);
		EXPECT_EQ(float(v2.w), 1.000000);
	}

	TEST(SwittzleTest, vec3_rrbg) {
		vec3 v1 = vec3(1.000000, 2.000000, 3.000000);
		vec4 v2 = v1.rrbg;
		EXPECT_EQ(float(v2.x), 1.000000);
		EXPECT_EQ(float(v2.y), 1.000000);
		EXPECT_EQ(float(v2.z), 3.000000);
		EXPECT_EQ(float(v2.w), 2.000000);
	}

	TEST(SwittzleTest, vec3_rrbb) {
		vec3 v1 = vec3(1.000000, 2.000000, 3.000000);
		vec4 v2 = v1.rrbb;
		EXPECT_EQ(float(v2.x), 1.000000);
		EXPECT_EQ(float(v2.y), 1.000000);
		EXPECT_EQ(float(v2.z), 3.000000);
		EXPECT_EQ(float(v2.w), 3.000000);
	}

	TEST(SwittzleTest, vec3_rgrr) {
		vec3 v1 = vec3(1.000000, 2.000000, 3.000000);
		vec4 v2 = v1.rgrr;
		EXPECT_EQ(float(v2.x), 1.000000);
		EXPECT_EQ(float(v2.y), 2.000000);
		EXPECT_EQ(float(v2.z), 1.000000);
		EXPECT_EQ(float(v2.w), 1.000000);
	}

	TEST(SwittzleTest, vec3_rgrg) {
		vec3 v1 = vec3(1.000000, 2.000000, 3.000000);
		vec4 v2 = v1.rgrg;
		EXPECT_EQ(float(v2.x), 1.000000);
		EXPECT_EQ(float(v2.y), 2.000000);
		EXPECT_EQ(float(v2.z), 1.000000);
		EXPECT_EQ(float(v2.w), 2.000000);
	}

	TEST(SwittzleTest, vec3_rgrb) {
		vec3 v1 = vec3(1.000000, 2.000000, 3.000000);
		vec4 v2 = v1.rgrb;
		EXPECT_EQ(float(v2.x), 1.000000);
		EXPECT_EQ(float(v2.y), 2.000000);
		EXPECT_EQ(float(v2.z), 1.000000);
		EXPECT_EQ(float(v2.w), 3.000000);
	}

	TEST(SwittzleTest, vec3_rggr) {
		vec3 v1 = vec3(1.000000, 2.000000, 3.000000);
		vec4 v2 = v1.rggr;
		EXPECT_EQ(float(v2.x), 1.000000);
		EXPECT_EQ(float(v2.y), 2.000000);
		EXPECT_EQ(float(v2.z), 2.000000);
		EXPECT_EQ(float(v2.w), 1.000000);
	}

	TEST(SwittzleTest, vec3_rggg) {
		vec3 v1 = vec3(1.000000, 2.000000, 3.000000);
		vec4 v2 = v1.rggg;
		EXPECT_EQ(float(v2.x), 1.000000);
		EXPECT_EQ(float(v2.y), 2.000000);
		EXPECT_EQ(float(v2.z), 2.000000);
		EXPECT_EQ(float(v2.w), 2.000000);
	}

	TEST(SwittzleTest, vec3_rggb) {
		vec3 v1 = vec3(1.000000, 2.000000, 3.000000);
		vec4 v2 = v1.rggb;
		EXPECT_EQ(float(v2.x), 1.000000);
		EXPECT_EQ(float(v2.y), 2.000000);
		EXPECT_EQ(float(v2.z), 2.000000);
		EXPECT_EQ(float(v2.w), 3.000000);
	}

	TEST(SwittzleTest, vec3_rgbr) {
		vec3 v1 = vec3(1.000000, 2.000000, 3.000000);
		vec4 v2 = v1.rgbr;
		EXPECT_EQ(float(v2.x), 1.000000);
		EXPECT_EQ(float(v2.y), 2.000000);
		EXPECT_EQ(float(v2.z), 3.000000);
		EXPECT_EQ(float(v2.w), 1.000000);
	}

	TEST(SwittzleTest, vec3_rgbg) {
		vec3 v1 = vec3(1.000000, 2.000000, 3.000000);
		vec4 v2 = v1.rgbg;
		EXPECT_EQ(float(v2.x), 1.000000);
		EXPECT_EQ(float(v2.y), 2.000000);
		EXPECT_EQ(float(v2.z), 3.000000);
		EXPECT_EQ(float(v2.w), 2.000000);
	}

	TEST(SwittzleTest, vec3_rgbb) {
		vec3 v1 = vec3(1.000000, 2.000000, 3.000000);
		vec4 v2 = v1.rgbb;
		EXPECT_EQ(float(v2.x), 1.000000);
		EXPECT_EQ(float(v2.y), 2.000000);
		EXPECT_EQ(float(v2.z), 3.000000);
		EXPECT_EQ(float(v2.w), 3.000000);
	}

	TEST(SwittzleTest, vec3_rbrr) {
		vec3 v1 = vec3(1.000000, 2.000000, 3.000000);
		vec4 v2 = v1.rbrr;
		EXPECT_EQ(float(v2.x), 1.000000);
		EXPECT_EQ(float(v2.y), 3.000000);
		EXPECT_EQ(float(v2.z), 1.000000);
		EXPECT_EQ(float(v2.w), 1.000000);
	}

	TEST(SwittzleTest, vec3_rbrg) {
		vec3 v1 = vec3(1.000000, 2.000000, 3.000000);
		vec4 v2 = v1.rbrg;
		EXPECT_EQ(float(v2.x), 1.000000);
		EXPECT_EQ(float(v2.y), 3.000000);
		EXPECT_EQ(float(v2.z), 1.000000);
		EXPECT_EQ(float(v2.w), 2.000000);
	}

	TEST(SwittzleTest, vec3_rbrb) {
		vec3 v1 = vec3(1.000000, 2.000000, 3.000000);
		vec4 v2 = v1.rbrb;
		EXPECT_EQ(float(v2.x), 1.000000);
		EXPECT_EQ(float(v2.y), 3.000000);
		EXPECT_EQ(float(v2.z), 1.000000);
		EXPECT_EQ(float(v2.w), 3.000000);
	}

	TEST(SwittzleTest, vec3_rbgr) {
		vec3 v1 = vec3(1.000000, 2.000000, 3.000000);
		vec4 v2 = v1.rbgr;
		EXPECT_EQ(float(v2.x), 1.000000);
		EXPECT_EQ(float(v2.y), 3.000000);
		EXPECT_EQ(float(v2.z), 2.000000);
		EXPECT_EQ(float(v2.w), 1.000000);
	}

	TEST(SwittzleTest, vec3_rbgg) {
		vec3 v1 = vec3(1.000000, 2.000000, 3.000000);
		vec4 v2 = v1.rbgg;
		EXPECT_EQ(float(v2.x), 1.000000);
		EXPECT_EQ(float(v2.y), 3.000000);
		EXPECT_EQ(float(v2.z), 2.000000);
		EXPECT_EQ(float(v2.w), 2.000000);
	}

	TEST(SwittzleTest, vec3_rbgb) {
		vec3 v1 = vec3(1.000000, 2.000000, 3.000000);
		vec4 v2 = v1.rbgb;
		EXPECT_EQ(float(v2.x), 1.000000);
		EXPECT_EQ(float(v2.y), 3.000000);
		EXPECT_EQ(float(v2.z), 2.000000);
		EXPECT_EQ(float(v2.w), 3.000000);
	}

	TEST(SwittzleTest, vec3_rbbr) {
		vec3 v1 = vec3(1.000000, 2.000000, 3.000000);
		vec4 v2 = v1.rbbr;
		EXPECT_EQ(float(v2.x), 1.000000);
		EXPECT_EQ(float(v2.y), 3.000000);
		EXPECT_EQ(float(v2.z), 3.000000);
		EXPECT_EQ(float(v2.w), 1.000000);
	}

	TEST(SwittzleTest, vec3_rbbg) {
		vec3 v1 = vec3(1.000000, 2.000000, 3.000000);
		vec4 v2 = v1.rbbg;
		EXPECT_EQ(float(v2.x), 1.000000);
		EXPECT_EQ(float(v2.y), 3.000000);
		EXPECT_EQ(float(v2.z), 3.000000);
		EXPECT_EQ(float(v2.w), 2.000000);
	}

	TEST(SwittzleTest, vec3_rbbb) {
		vec3 v1 = vec3(1.000000, 2.000000, 3.000000);
		vec4 v2 = v1.rbbb;
		EXPECT_EQ(float(v2.x), 1.000000);
		EXPECT_EQ(float(v2.y), 3.000000);
		EXPECT_EQ(float(v2.z), 3.000000);
		EXPECT_EQ(float(v2.w), 3.000000);
	}

	TEST(SwittzleTest, vec3_grrr) {
		vec3 v1 = vec3(1.000000, 2.000000, 3.000000);
		vec4 v2 = v1.grrr;
		EXPECT_EQ(float(v2.x), 2.000000);
		EXPECT_EQ(float(v2.y), 1.000000);
		EXPECT_EQ(float(v2.z), 1.000000);
		EXPECT_EQ(float(v2.w), 1.000000);
	}

	TEST(SwittzleTest, vec3_grrg) {
		vec3 v1 = vec3(1.000000, 2.000000, 3.000000);
		vec4 v2 = v1.grrg;
		EXPECT_EQ(float(v2.x), 2.000000);
		EXPECT_EQ(float(v2.y), 1.000000);
		EXPECT_EQ(float(v2.z), 1.000000);
		EXPECT_EQ(float(v2.w), 2.000000);
	}

	TEST(SwittzleTest, vec3_grrb) {
		vec3 v1 = vec3(1.000000, 2.000000, 3.000000);
		vec4 v2 = v1.grrb;
		EXPECT_EQ(float(v2.x), 2.000000);
		EXPECT_EQ(float(v2.y), 1.000000);
		EXPECT_EQ(float(v2.z), 1.000000);
		EXPECT_EQ(float(v2.w), 3.000000);
	}

	TEST(SwittzleTest, vec3_grgr) {
		vec3 v1 = vec3(1.000000, 2.000000, 3.000000);
		vec4 v2 = v1.grgr;
		EXPECT_EQ(float(v2.x), 2.000000);
		EXPECT_EQ(float(v2.y), 1.000000);
		EXPECT_EQ(float(v2.z), 2.000000);
		EXPECT_EQ(float(v2.w), 1.000000);
	}

	TEST(SwittzleTest, vec3_grgg) {
		vec3 v1 = vec3(1.000000, 2.000000, 3.000000);
		vec4 v2 = v1.grgg;
		EXPECT_EQ(float(v2.x), 2.000000);
		EXPECT_EQ(float(v2.y), 1.000000);
		EXPECT_EQ(float(v2.z), 2.000000);
		EXPECT_EQ(float(v2.w), 2.000000);
	}

	TEST(SwittzleTest, vec3_grgb) {
		vec3 v1 = vec3(1.000000, 2.000000, 3.000000);
		vec4 v2 = v1.grgb;
		EXPECT_EQ(float(v2.x), 2.000000);
		EXPECT_EQ(float(v2.y), 1.000000);
		EXPECT_EQ(float(v2.z), 2.000000);
		EXPECT_EQ(float(v2.w), 3.000000);
	}

	TEST(SwittzleTest, vec3_grbr) {
		vec3 v1 = vec3(1.000000, 2.000000, 3.000000);
		vec4 v2 = v1.grbr;
		EXPECT_EQ(float(v2.x), 2.000000);
		EXPECT_EQ(float(v2.y), 1.000000);
		EXPECT_EQ(float(v2.z), 3.000000);
		EXPECT_EQ(float(v2.w), 1.000000);
	}

	TEST(SwittzleTest, vec3_grbg) {
		vec3 v1 = vec3(1.000000, 2.000000, 3.000000);
		vec4 v2 = v1.grbg;
		EXPECT_EQ(float(v2.x), 2.000000);
		EXPECT_EQ(float(v2.y), 1.000000);
		EXPECT_EQ(float(v2.z), 3.000000);
		EXPECT_EQ(float(v2.w), 2.000000);
	}

	TEST(SwittzleTest, vec3_grbb) {
		vec3 v1 = vec3(1.000000, 2.000000, 3.000000);
		vec4 v2 = v1.grbb;
		EXPECT_EQ(float(v2.x), 2.000000);
		EXPECT_EQ(float(v2.y), 1.000000);
		EXPECT_EQ(float(v2.z), 3.000000);
		EXPECT_EQ(float(v2.w), 3.000000);
	}

	TEST(SwittzleTest, vec3_ggrr) {
		vec3 v1 = vec3(1.000000, 2.000000, 3.000000);
		vec4 v2 = v1.ggrr;
		EXPECT_EQ(float(v2.x), 2.000000);
		EXPECT_EQ(float(v2.y), 2.000000);
		EXPECT_EQ(float(v2.z), 1.000000);
		EXPECT_EQ(float(v2.w), 1.000000);
	}

	TEST(SwittzleTest, vec3_ggrg) {
		vec3 v1 = vec3(1.000000, 2.000000, 3.000000);
		vec4 v2 = v1.ggrg;
		EXPECT_EQ(float(v2.x), 2.000000);
		EXPECT_EQ(float(v2.y), 2.000000);
		EXPECT_EQ(float(v2.z), 1.000000);
		EXPECT_EQ(float(v2.w), 2.000000);
	}

	TEST(SwittzleTest, vec3_ggrb) {
		vec3 v1 = vec3(1.000000, 2.000000, 3.000000);
		vec4 v2 = v1.ggrb;
		EXPECT_EQ(float(v2.x), 2.000000);
		EXPECT_EQ(float(v2.y), 2.000000);
		EXPECT_EQ(float(v2.z), 1.000000);
		EXPECT_EQ(float(v2.w), 3.000000);
	}

	TEST(SwittzleTest, vec3_gggr) {
		vec3 v1 = vec3(1.000000, 2.000000, 3.000000);
		vec4 v2 = v1.gggr;
		EXPECT_EQ(float(v2.x), 2.000000);
		EXPECT_EQ(float(v2.y), 2.000000);
		EXPECT_EQ(float(v2.z), 2.000000);
		EXPECT_EQ(float(v2.w), 1.000000);
	}

	TEST(SwittzleTest, vec3_gggg) {
		vec3 v1 = vec3(1.000000, 2.000000, 3.000000);
		vec4 v2 = v1.gggg;
		EXPECT_EQ(float(v2.x), 2.000000);
		EXPECT_EQ(float(v2.y), 2.000000);
		EXPECT_EQ(float(v2.z), 2.000000);
		EXPECT_EQ(float(v2.w), 2.000000);
	}

	TEST(SwittzleTest, vec3_gggb) {
		vec3 v1 = vec3(1.000000, 2.000000, 3.000000);
		vec4 v2 = v1.gggb;
		EXPECT_EQ(float(v2.x), 2.000000);
		EXPECT_EQ(float(v2.y), 2.000000);
		EXPECT_EQ(float(v2.z), 2.000000);
		EXPECT_EQ(float(v2.w), 3.000000);
	}

	TEST(SwittzleTest, vec3_ggbr) {
		vec3 v1 = vec3(1.000000, 2.000000, 3.000000);
		vec4 v2 = v1.ggbr;
		EXPECT_EQ(float(v2.x), 2.000000);
		EXPECT_EQ(float(v2.y), 2.000000);
		EXPECT_EQ(float(v2.z), 3.000000);
		EXPECT_EQ(float(v2.w), 1.000000);
	}

	TEST(SwittzleTest, vec3_ggbg) {
		vec3 v1 = vec3(1.000000, 2.000000, 3.000000);
		vec4 v2 = v1.ggbg;
		EXPECT_EQ(float(v2.x), 2.000000);
		EXPECT_EQ(float(v2.y), 2.000000);
		EXPECT_EQ(float(v2.z), 3.000000);
		EXPECT_EQ(float(v2.w), 2.000000);
	}

	TEST(SwittzleTest, vec3_ggbb) {
		vec3 v1 = vec3(1.000000, 2.000000, 3.000000);
		vec4 v2 = v1.ggbb;
		EXPECT_EQ(float(v2.x), 2.000000);
		EXPECT_EQ(float(v2.y), 2.000000);
		EXPECT_EQ(float(v2.z), 3.000000);
		EXPECT_EQ(float(v2.w), 3.000000);
	}

	TEST(SwittzleTest, vec3_gbrr) {
		vec3 v1 = vec3(1.000000, 2.000000, 3.000000);
		vec4 v2 = v1.gbrr;
		EXPECT_EQ(float(v2.x), 2.000000);
		EXPECT_EQ(float(v2.y), 3.000000);
		EXPECT_EQ(float(v2.z), 1.000000);
		EXPECT_EQ(float(v2.w), 1.000000);
	}

	TEST(SwittzleTest, vec3_gbrg) {
		vec3 v1 = vec3(1.000000, 2.000000, 3.000000);
		vec4 v2 = v1.gbrg;
		EXPECT_EQ(float(v2.x), 2.000000);
		EXPECT_EQ(float(v2.y), 3.000000);
		EXPECT_EQ(float(v2.z), 1.000000);
		EXPECT_EQ(float(v2.w), 2.000000);
	}

	TEST(SwittzleTest, vec3_gbrb) {
		vec3 v1 = vec3(1.000000, 2.000000, 3.000000);
		vec4 v2 = v1.gbrb;
		EXPECT_EQ(float(v2.x), 2.000000);
		EXPECT_EQ(float(v2.y), 3.000000);
		EXPECT_EQ(float(v2.z), 1.000000);
		EXPECT_EQ(float(v2.w), 3.000000);
	}

	TEST(SwittzleTest, vec3_gbgr) {
		vec3 v1 = vec3(1.000000, 2.000000, 3.000000);
		vec4 v2 = v1.gbgr;
		EXPECT_EQ(float(v2.x), 2.000000);
		EXPECT_EQ(float(v2.y), 3.000000);
		EXPECT_EQ(float(v2.z), 2.000000);
		EXPECT_EQ(float(v2.w), 1.000000);
	}

	TEST(SwittzleTest, vec3_gbgg) {
		vec3 v1 = vec3(1.000000, 2.000000, 3.000000);
		vec4 v2 = v1.gbgg;
		EXPECT_EQ(float(v2.x), 2.000000);
		EXPECT_EQ(float(v2.y), 3.000000);
		EXPECT_EQ(float(v2.z), 2.000000);
		EXPECT_EQ(float(v2.w), 2.000000);
	}

	TEST(SwittzleTest, vec3_gbgb) {
		vec3 v1 = vec3(1.000000, 2.000000, 3.000000);
		vec4 v2 = v1.gbgb;
		EXPECT_EQ(float(v2.x), 2.000000);
		EXPECT_EQ(float(v2.y), 3.000000);
		EXPECT_EQ(float(v2.z), 2.000000);
		EXPECT_EQ(float(v2.w), 3.000000);
	}

	TEST(SwittzleTest, vec3_gbbr) {
		vec3 v1 = vec3(1.000000, 2.000000, 3.000000);
		vec4 v2 = v1.gbbr;
		EXPECT_EQ(float(v2.x), 2.000000);
		EXPECT_EQ(float(v2.y), 3.000000);
		EXPECT_EQ(float(v2.z), 3.000000);
		EXPECT_EQ(float(v2.w), 1.000000);
	}

	TEST(SwittzleTest, vec3_gbbg) {
		vec3 v1 = vec3(1.000000, 2.000000, 3.000000);
		vec4 v2 = v1.gbbg;
		EXPECT_EQ(float(v2.x), 2.000000);
		EXPECT_EQ(float(v2.y), 3.000000);
		EXPECT_EQ(float(v2.z), 3.000000);
		EXPECT_EQ(float(v2.w), 2.000000);
	}

	TEST(SwittzleTest, vec3_gbbb) {
		vec3 v1 = vec3(1.000000, 2.000000, 3.000000);
		vec4 v2 = v1.gbbb;
		EXPECT_EQ(float(v2.x), 2.000000);
		EXPECT_EQ(float(v2.y), 3.000000);
		EXPECT_EQ(float(v2.z), 3.000000);
		EXPECT_EQ(float(v2.w), 3.000000);
	}

	TEST(SwittzleTest, vec3_brrr) {
		vec3 v1 = vec3(1.000000, 2.000000, 3.000000);
		vec4 v2 = v1.brrr;
		EXPECT_EQ(float(v2.x), 3.000000);
		EXPECT_EQ(float(v2.y), 1.000000);
		EXPECT_EQ(float(v2.z), 1.000000);
		EXPECT_EQ(float(v2.w), 1.000000);
	}

	TEST(SwittzleTest, vec3_brrg) {
		vec3 v1 = vec3(1.000000, 2.000000, 3.000000);
		vec4 v2 = v1.brrg;
		EXPECT_EQ(float(v2.x), 3.000000);
		EXPECT_EQ(float(v2.y), 1.000000);
		EXPECT_EQ(float(v2.z), 1.000000);
		EXPECT_EQ(float(v2.w), 2.000000);
	}

	TEST(SwittzleTest, vec3_brrb) {
		vec3 v1 = vec3(1.000000, 2.000000, 3.000000);
		vec4 v2 = v1.brrb;
		EXPECT_EQ(float(v2.x), 3.000000);
		EXPECT_EQ(float(v2.y), 1.000000);
		EXPECT_EQ(float(v2.z), 1.000000);
		EXPECT_EQ(float(v2.w), 3.000000);
	}

	TEST(SwittzleTest, vec3_brgr) {
		vec3 v1 = vec3(1.000000, 2.000000, 3.000000);
		vec4 v2 = v1.brgr;
		EXPECT_EQ(float(v2.x), 3.000000);
		EXPECT_EQ(float(v2.y), 1.000000);
		EXPECT_EQ(float(v2.z), 2.000000);
		EXPECT_EQ(float(v2.w), 1.000000);
	}

	TEST(SwittzleTest, vec3_brgg) {
		vec3 v1 = vec3(1.000000, 2.000000, 3.000000);
		vec4 v2 = v1.brgg;
		EXPECT_EQ(float(v2.x), 3.000000);
		EXPECT_EQ(float(v2.y), 1.000000);
		EXPECT_EQ(float(v2.z), 2.000000);
		EXPECT_EQ(float(v2.w), 2.000000);
	}

	TEST(SwittzleTest, vec3_brgb) {
		vec3 v1 = vec3(1.000000, 2.000000, 3.000000);
		vec4 v2 = v1.brgb;
		EXPECT_EQ(float(v2.x), 3.000000);
		EXPECT_EQ(float(v2.y), 1.000000);
		EXPECT_EQ(float(v2.z), 2.000000);
		EXPECT_EQ(float(v2.w), 3.000000);
	}

	TEST(SwittzleTest, vec3_brbr) {
		vec3 v1 = vec3(1.000000, 2.000000, 3.000000);
		vec4 v2 = v1.brbr;
		EXPECT_EQ(float(v2.x), 3.000000);
		EXPECT_EQ(float(v2.y), 1.000000);
		EXPECT_EQ(float(v2.z), 3.000000);
		EXPECT_EQ(float(v2.w), 1.000000);
	}

	TEST(SwittzleTest, vec3_brbg) {
		vec3 v1 = vec3(1.000000, 2.000000, 3.000000);
		vec4 v2 = v1.brbg;
		EXPECT_EQ(float(v2.x), 3.000000);
		EXPECT_EQ(float(v2.y), 1.000000);
		EXPECT_EQ(float(v2.z), 3.000000);
		EXPECT_EQ(float(v2.w), 2.000000);
	}

	TEST(SwittzleTest, vec3_brbb) {
		vec3 v1 = vec3(1.000000, 2.000000, 3.000000);
		vec4 v2 = v1.brbb;
		EXPECT_EQ(float(v2.x), 3.000000);
		EXPECT_EQ(float(v2.y), 1.000000);
		EXPECT_EQ(float(v2.z), 3.000000);
		EXPECT_EQ(float(v2.w), 3.000000);
	}

	TEST(SwittzleTest, vec3_bgrr) {
		vec3 v1 = vec3(1.000000, 2.000000, 3.000000);
		vec4 v2 = v1.bgrr;
		EXPECT_EQ(float(v2.x), 3.000000);
		EXPECT_EQ(float(v2.y), 2.000000);
		EXPECT_EQ(float(v2.z), 1.000000);
		EXPECT_EQ(float(v2.w), 1.000000);
	}

	TEST(SwittzleTest, vec3_bgrg) {
		vec3 v1 = vec3(1.000000, 2.000000, 3.000000);
		vec4 v2 = v1.bgrg;
		EXPECT_EQ(float(v2.x), 3.000000);
		EXPECT_EQ(float(v2.y), 2.000000);
		EXPECT_EQ(float(v2.z), 1.000000);
		EXPECT_EQ(float(v2.w), 2.000000);
	}

	TEST(SwittzleTest, vec3_bgrb) {
		vec3 v1 = vec3(1.000000, 2.000000, 3.000000);
		vec4 v2 = v1.bgrb;
		EXPECT_EQ(float(v2.x), 3.000000);
		EXPECT_EQ(float(v2.y), 2.000000);
		EXPECT_EQ(float(v2.z), 1.000000);
		EXPECT_EQ(float(v2.w), 3.000000);
	}

	TEST(SwittzleTest, vec3_bggr) {
		vec3 v1 = vec3(1.000000, 2.000000, 3.000000);
		vec4 v2 = v1.bggr;
		EXPECT_EQ(float(v2.x), 3.000000);
		EXPECT_EQ(float(v2.y), 2.000000);
		EXPECT_EQ(float(v2.z), 2.000000);
		EXPECT_EQ(float(v2.w), 1.000000);
	}

	TEST(SwittzleTest, vec3_bggg) {
		vec3 v1 = vec3(1.000000, 2.000000, 3.000000);
		vec4 v2 = v1.bggg;
		EXPECT_EQ(float(v2.x), 3.000000);
		EXPECT_EQ(float(v2.y), 2.000000);
		EXPECT_EQ(float(v2.z), 2.000000);
		EXPECT_EQ(float(v2.w), 2.000000);
	}

	TEST(SwittzleTest, vec3_bggb) {
		vec3 v1 = vec3(1.000000, 2.000000, 3.000000);
		vec4 v2 = v1.bggb;
		EXPECT_EQ(float(v2.x), 3.000000);
		EXPECT_EQ(float(v2.y), 2.000000);
		EXPECT_EQ(float(v2.z), 2.000000);
		EXPECT_EQ(float(v2.w), 3.000000);
	}

	TEST(SwittzleTest, vec3_bgbr) {
		vec3 v1 = vec3(1.000000, 2.000000, 3.000000);
		vec4 v2 = v1.bgbr;
		EXPECT_EQ(float(v2.x), 3.000000);
		EXPECT_EQ(float(v2.y), 2.000000);
		EXPECT_EQ(float(v2.z), 3.000000);
		EXPECT_EQ(float(v2.w), 1.000000);
	}

	TEST(SwittzleTest, vec3_bgbg) {
		vec3 v1 = vec3(1.000000, 2.000000, 3.000000);
		vec4 v2 = v1.bgbg;
		EXPECT_EQ(float(v2.x), 3.000000);
		EXPECT_EQ(float(v2.y), 2.000000);
		EXPECT_EQ(float(v2.z), 3.000000);
		EXPECT_EQ(float(v2.w), 2.000000);
	}

	TEST(SwittzleTest, vec3_bgbb) {
		vec3 v1 = vec3(1.000000, 2.000000, 3.000000);
		vec4 v2 = v1.bgbb;
		EXPECT_EQ(float(v2.x), 3.000000);
		EXPECT_EQ(float(v2.y), 2.000000);
		EXPECT_EQ(float(v2.z), 3.000000);
		EXPECT_EQ(float(v2.w), 3.000000);
	}

	TEST(SwittzleTest, vec3_bbrr) {
		vec3 v1 = vec3(1.000000, 2.000000, 3.000000);
		vec4 v2 = v1.bbrr;
		EXPECT_EQ(float(v2.x), 3.000000);
		EXPECT_EQ(float(v2.y), 3.000000);
		EXPECT_EQ(float(v2.z), 1.000000);
		EXPECT_EQ(float(v2.w), 1.000000);
	}

	TEST(SwittzleTest, vec3_bbrg) {
		vec3 v1 = vec3(1.000000, 2.000000, 3.000000);
		vec4 v2 = v1.bbrg;
		EXPECT_EQ(float(v2.x), 3.000000);
		EXPECT_EQ(float(v2.y), 3.000000);
		EXPECT_EQ(float(v2.z), 1.000000);
		EXPECT_EQ(float(v2.w), 2.000000);
	}

	TEST(SwittzleTest, vec3_bbrb) {
		vec3 v1 = vec3(1.000000, 2.000000, 3.000000);
		vec4 v2 = v1.bbrb;
		EXPECT_EQ(float(v2.x), 3.000000);
		EXPECT_EQ(float(v2.y), 3.000000);
		EXPECT_EQ(float(v2.z), 1.000000);
		EXPECT_EQ(float(v2.w), 3.000000);
	}

	TEST(SwittzleTest, vec3_bbgr) {
		vec3 v1 = vec3(1.000000, 2.000000, 3.000000);
		vec4 v2 = v1.bbgr;
		EXPECT_EQ(float(v2.x), 3.000000);
		EXPECT_EQ(float(v2.y), 3.000000);
		EXPECT_EQ(float(v2.z), 2.000000);
		EXPECT_EQ(float(v2.w), 1.000000);
	}

	TEST(SwittzleTest, vec3_bbgg) {
		vec3 v1 = vec3(1.000000, 2.000000, 3.000000);
		vec4 v2 = v1.bbgg;
		EXPECT_EQ(float(v2.x), 3.000000);
		EXPECT_EQ(float(v2.y), 3.000000);
		EXPECT_EQ(float(v2.z), 2.000000);
		EXPECT_EQ(float(v2.w), 2.000000);
	}

	TEST(SwittzleTest, vec3_bbgb) {
		vec3 v1 = vec3(1.000000, 2.000000, 3.000000);
		vec4 v2 = v1.bbgb;
		EXPECT_EQ(float(v2.x), 3.000000);
		EXPECT_EQ(float(v2.y), 3.000000);
		EXPECT_EQ(float(v2.z), 2.000000);
		EXPECT_EQ(float(v2.w), 3.000000);
	}

	TEST(SwittzleTest, vec3_bbbr) {
		vec3 v1 = vec3(1.000000, 2.000000, 3.000000);
		vec4 v2 = v1.bbbr;
		EXPECT_EQ(float(v2.x), 3.000000);
		EXPECT_EQ(float(v2.y), 3.000000);
		EXPECT_EQ(float(v2.z), 3.000000);
		EXPECT_EQ(float(v2.w), 1.000000);
	}

	TEST(SwittzleTest, vec3_bbbg) {
		vec3 v1 = vec3(1.000000, 2.000000, 3.000000);
		vec4 v2 = v1.bbbg;
		EXPECT_EQ(float(v2.x), 3.000000);
		EXPECT_EQ(float(v2.y), 3.000000);
		EXPECT_EQ(float(v2.z), 3.000000);
		EXPECT_EQ(float(v2.w), 2.000000);
	}

	TEST(SwittzleTest, vec3_bbbb) {
		vec3 v1 = vec3(1.000000, 2.000000, 3.000000);
		vec4 v2 = v1.bbbb;
		EXPECT_EQ(float(v2.x), 3.000000);
		EXPECT_EQ(float(v2.y), 3.000000);
		EXPECT_EQ(float(v2.z), 3.000000);
		EXPECT_EQ(float(v2.w), 3.000000);
	}

}

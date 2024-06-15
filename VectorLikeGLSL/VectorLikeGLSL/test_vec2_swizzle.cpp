#include "pch.h" 
 #include "vector_like_glsl.h" 
 using namespace VectorLikeGLSL; 
namespace Vector2 {
TEST(SwittzleTest, vec2_x) {
vec2 v1 = vec2(1.000000,2.000000);
EXPECT_EQ(float(v1.x), 1.000000);
} 

TEST(SwittzleTest, vec2_y) {
vec2 v1 = vec2(1.000000,2.000000);
EXPECT_EQ(float(v1.y), 2.000000);
} 

TEST(SwittzleTest, vec2_xx) {
vec2 v1 = vec2(1.000000,2.000000);
vec2 v2 = v1.xx;
EXPECT_EQ(float(v2.x),1.000000);
EXPECT_EQ(float(v2.y),1.000000);
} 

TEST(SwittzleTest, vec2_xy) {
vec2 v1 = vec2(1.000000,2.000000);
vec2 v2 = v1.xy;
EXPECT_EQ(float(v2.x),1.000000);
EXPECT_EQ(float(v2.y),2.000000);
} 

TEST(SwittzleTest, vec2_yx) {
vec2 v1 = vec2(1.000000,2.000000);
vec2 v2 = v1.yx;
EXPECT_EQ(float(v2.x),2.000000);
EXPECT_EQ(float(v2.y),1.000000);
} 

TEST(SwittzleTest, vec2_yy) {
vec2 v1 = vec2(1.000000,2.000000);
vec2 v2 = v1.yy;
EXPECT_EQ(float(v2.x),2.000000);
EXPECT_EQ(float(v2.y),2.000000);
} 

TEST(SwittzleTest, vec2_xxx) {
vec2 v1 = vec2(1.000000,2.000000);
vec3 v2 = v1.xxx;
EXPECT_EQ(float(v2.x),1.000000);
EXPECT_EQ(float(v2.y),1.000000);
EXPECT_EQ(float(v2.z),1.000000);
} 

TEST(SwittzleTest, vec2_xxy) {
vec2 v1 = vec2(1.000000,2.000000);
vec3 v2 = v1.xxy;
EXPECT_EQ(float(v2.x),1.000000);
EXPECT_EQ(float(v2.y),1.000000);
EXPECT_EQ(float(v2.z),2.000000);
} 

TEST(SwittzleTest, vec2_xyx) {
vec2 v1 = vec2(1.000000,2.000000);
vec3 v2 = v1.xyx;
EXPECT_EQ(float(v2.x),1.000000);
EXPECT_EQ(float(v2.y),2.000000);
EXPECT_EQ(float(v2.z),1.000000);
} 

TEST(SwittzleTest, vec2_xyy) {
vec2 v1 = vec2(1.000000,2.000000);
vec3 v2 = v1.xyy;
EXPECT_EQ(float(v2.x),1.000000);
EXPECT_EQ(float(v2.y),2.000000);
EXPECT_EQ(float(v2.z),2.000000);
} 

TEST(SwittzleTest, vec2_yxx) {
vec2 v1 = vec2(1.000000,2.000000);
vec3 v2 = v1.yxx;
EXPECT_EQ(float(v2.x),2.000000);
EXPECT_EQ(float(v2.y),1.000000);
EXPECT_EQ(float(v2.z),1.000000);
} 

TEST(SwittzleTest, vec2_yxy) {
vec2 v1 = vec2(1.000000,2.000000);
vec3 v2 = v1.yxy;
EXPECT_EQ(float(v2.x),2.000000);
EXPECT_EQ(float(v2.y),1.000000);
EXPECT_EQ(float(v2.z),2.000000);
} 

TEST(SwittzleTest, vec2_yyx) {
vec2 v1 = vec2(1.000000,2.000000);
vec3 v2 = v1.yyx;
EXPECT_EQ(float(v2.x),2.000000);
EXPECT_EQ(float(v2.y),2.000000);
EXPECT_EQ(float(v2.z),1.000000);
} 

TEST(SwittzleTest, vec2_yyy) {
vec2 v1 = vec2(1.000000,2.000000);
vec3 v2 = v1.yyy;
EXPECT_EQ(float(v2.x),2.000000);
EXPECT_EQ(float(v2.y),2.000000);
EXPECT_EQ(float(v2.z),2.000000);
} 

TEST(SwittzleTest, vec2_xxxx) {
vec2 v1 = vec2(1.000000,2.000000);
vec4 v2 = v1.xxxx;
EXPECT_EQ(float(v2.x),1.000000);
EXPECT_EQ(float(v2.y),1.000000);
EXPECT_EQ(float(v2.z),1.000000);
EXPECT_EQ(float(v2.w),1.000000);
} 

TEST(SwittzleTest, vec2_xxxy) {
vec2 v1 = vec2(1.000000,2.000000);
vec4 v2 = v1.xxxy;
EXPECT_EQ(float(v2.x),1.000000);
EXPECT_EQ(float(v2.y),1.000000);
EXPECT_EQ(float(v2.z),1.000000);
EXPECT_EQ(float(v2.w),2.000000);
} 

TEST(SwittzleTest, vec2_xxyx) {
vec2 v1 = vec2(1.000000,2.000000);
vec4 v2 = v1.xxyx;
EXPECT_EQ(float(v2.x),1.000000);
EXPECT_EQ(float(v2.y),1.000000);
EXPECT_EQ(float(v2.z),2.000000);
EXPECT_EQ(float(v2.w),1.000000);
} 

TEST(SwittzleTest, vec2_xxyy) {
vec2 v1 = vec2(1.000000,2.000000);
vec4 v2 = v1.xxyy;
EXPECT_EQ(float(v2.x),1.000000);
EXPECT_EQ(float(v2.y),1.000000);
EXPECT_EQ(float(v2.z),2.000000);
EXPECT_EQ(float(v2.w),2.000000);
} 

TEST(SwittzleTest, vec2_xyxx) {
vec2 v1 = vec2(1.000000,2.000000);
vec4 v2 = v1.xyxx;
EXPECT_EQ(float(v2.x),1.000000);
EXPECT_EQ(float(v2.y),2.000000);
EXPECT_EQ(float(v2.z),1.000000);
EXPECT_EQ(float(v2.w),1.000000);
} 

TEST(SwittzleTest, vec2_xyxy) {
vec2 v1 = vec2(1.000000,2.000000);
vec4 v2 = v1.xyxy;
EXPECT_EQ(float(v2.x),1.000000);
EXPECT_EQ(float(v2.y),2.000000);
EXPECT_EQ(float(v2.z),1.000000);
EXPECT_EQ(float(v2.w),2.000000);
} 

TEST(SwittzleTest, vec2_xyyx) {
vec2 v1 = vec2(1.000000,2.000000);
vec4 v2 = v1.xyyx;
EXPECT_EQ(float(v2.x),1.000000);
EXPECT_EQ(float(v2.y),2.000000);
EXPECT_EQ(float(v2.z),2.000000);
EXPECT_EQ(float(v2.w),1.000000);
} 

TEST(SwittzleTest, vec2_xyyy) {
vec2 v1 = vec2(1.000000,2.000000);
vec4 v2 = v1.xyyy;
EXPECT_EQ(float(v2.x),1.000000);
EXPECT_EQ(float(v2.y),2.000000);
EXPECT_EQ(float(v2.z),2.000000);
EXPECT_EQ(float(v2.w),2.000000);
} 

TEST(SwittzleTest, vec2_yxxx) {
vec2 v1 = vec2(1.000000,2.000000);
vec4 v2 = v1.yxxx;
EXPECT_EQ(float(v2.x),2.000000);
EXPECT_EQ(float(v2.y),1.000000);
EXPECT_EQ(float(v2.z),1.000000);
EXPECT_EQ(float(v2.w),1.000000);
} 

TEST(SwittzleTest, vec2_yxxy) {
vec2 v1 = vec2(1.000000,2.000000);
vec4 v2 = v1.yxxy;
EXPECT_EQ(float(v2.x),2.000000);
EXPECT_EQ(float(v2.y),1.000000);
EXPECT_EQ(float(v2.z),1.000000);
EXPECT_EQ(float(v2.w),2.000000);
} 

TEST(SwittzleTest, vec2_yxyx) {
vec2 v1 = vec2(1.000000,2.000000);
vec4 v2 = v1.yxyx;
EXPECT_EQ(float(v2.x),2.000000);
EXPECT_EQ(float(v2.y),1.000000);
EXPECT_EQ(float(v2.z),2.000000);
EXPECT_EQ(float(v2.w),1.000000);
} 

TEST(SwittzleTest, vec2_yxyy) {
vec2 v1 = vec2(1.000000,2.000000);
vec4 v2 = v1.yxyy;
EXPECT_EQ(float(v2.x),2.000000);
EXPECT_EQ(float(v2.y),1.000000);
EXPECT_EQ(float(v2.z),2.000000);
EXPECT_EQ(float(v2.w),2.000000);
} 

TEST(SwittzleTest, vec2_yyxx) {
vec2 v1 = vec2(1.000000,2.000000);
vec4 v2 = v1.yyxx;
EXPECT_EQ(float(v2.x),2.000000);
EXPECT_EQ(float(v2.y),2.000000);
EXPECT_EQ(float(v2.z),1.000000);
EXPECT_EQ(float(v2.w),1.000000);
} 

TEST(SwittzleTest, vec2_yyxy) {
vec2 v1 = vec2(1.000000,2.000000);
vec4 v2 = v1.yyxy;
EXPECT_EQ(float(v2.x),2.000000);
EXPECT_EQ(float(v2.y),2.000000);
EXPECT_EQ(float(v2.z),1.000000);
EXPECT_EQ(float(v2.w),2.000000);
} 

TEST(SwittzleTest, vec2_yyyx) {
vec2 v1 = vec2(1.000000,2.000000);
vec4 v2 = v1.yyyx;
EXPECT_EQ(float(v2.x),2.000000);
EXPECT_EQ(float(v2.y),2.000000);
EXPECT_EQ(float(v2.z),2.000000);
EXPECT_EQ(float(v2.w),1.000000);
} 

TEST(SwittzleTest, vec2_yyyy) {
vec2 v1 = vec2(1.000000,2.000000);
vec4 v2 = v1.yyyy;
EXPECT_EQ(float(v2.x),2.000000);
EXPECT_EQ(float(v2.y),2.000000);
EXPECT_EQ(float(v2.z),2.000000);
EXPECT_EQ(float(v2.w),2.000000);
} 

TEST(SwittzleTest, vec2_r) {
vec2 v1 = vec2(1.000000,2.000000);
EXPECT_EQ(float(v1.r), 1.000000);
} 

TEST(SwittzleTest, vec2_g) {
vec2 v1 = vec2(1.000000,2.000000);
EXPECT_EQ(float(v1.g), 2.000000);
} 

TEST(SwittzleTest, vec2_rr) {
vec2 v1 = vec2(1.000000,2.000000);
vec2 v2 = v1.rr;
EXPECT_EQ(float(v2.x),1.000000);
EXPECT_EQ(float(v2.y),1.000000);
} 

TEST(SwittzleTest, vec2_rg) {
vec2 v1 = vec2(1.000000,2.000000);
vec2 v2 = v1.rg;
EXPECT_EQ(float(v2.x),1.000000);
EXPECT_EQ(float(v2.y),2.000000);
} 

TEST(SwittzleTest, vec2_gr) {
vec2 v1 = vec2(1.000000,2.000000);
vec2 v2 = v1.gr;
EXPECT_EQ(float(v2.x),2.000000);
EXPECT_EQ(float(v2.y),1.000000);
} 

TEST(SwittzleTest, vec2_gg) {
vec2 v1 = vec2(1.000000,2.000000);
vec2 v2 = v1.gg;
EXPECT_EQ(float(v2.x),2.000000);
EXPECT_EQ(float(v2.y),2.000000);
} 

TEST(SwittzleTest, vec2_rrr) {
vec2 v1 = vec2(1.000000,2.000000);
vec3 v2 = v1.rrr;
EXPECT_EQ(float(v2.x),1.000000);
EXPECT_EQ(float(v2.y),1.000000);
EXPECT_EQ(float(v2.z),1.000000);
} 

TEST(SwittzleTest, vec2_rrg) {
vec2 v1 = vec2(1.000000,2.000000);
vec3 v2 = v1.rrg;
EXPECT_EQ(float(v2.x),1.000000);
EXPECT_EQ(float(v2.y),1.000000);
EXPECT_EQ(float(v2.z),2.000000);
} 

TEST(SwittzleTest, vec2_rgr) {
vec2 v1 = vec2(1.000000,2.000000);
vec3 v2 = v1.rgr;
EXPECT_EQ(float(v2.x),1.000000);
EXPECT_EQ(float(v2.y),2.000000);
EXPECT_EQ(float(v2.z),1.000000);
} 

TEST(SwittzleTest, vec2_rgg) {
vec2 v1 = vec2(1.000000,2.000000);
vec3 v2 = v1.rgg;
EXPECT_EQ(float(v2.x),1.000000);
EXPECT_EQ(float(v2.y),2.000000);
EXPECT_EQ(float(v2.z),2.000000);
} 

TEST(SwittzleTest, vec2_grr) {
vec2 v1 = vec2(1.000000,2.000000);
vec3 v2 = v1.grr;
EXPECT_EQ(float(v2.x),2.000000);
EXPECT_EQ(float(v2.y),1.000000);
EXPECT_EQ(float(v2.z),1.000000);
} 

TEST(SwittzleTest, vec2_grg) {
vec2 v1 = vec2(1.000000,2.000000);
vec3 v2 = v1.grg;
EXPECT_EQ(float(v2.x),2.000000);
EXPECT_EQ(float(v2.y),1.000000);
EXPECT_EQ(float(v2.z),2.000000);
} 

TEST(SwittzleTest, vec2_ggr) {
vec2 v1 = vec2(1.000000,2.000000);
vec3 v2 = v1.ggr;
EXPECT_EQ(float(v2.x),2.000000);
EXPECT_EQ(float(v2.y),2.000000);
EXPECT_EQ(float(v2.z),1.000000);
} 

TEST(SwittzleTest, vec2_ggg) {
vec2 v1 = vec2(1.000000,2.000000);
vec3 v2 = v1.ggg;
EXPECT_EQ(float(v2.x),2.000000);
EXPECT_EQ(float(v2.y),2.000000);
EXPECT_EQ(float(v2.z),2.000000);
} 

TEST(SwittzleTest, vec2_rrrr) {
vec2 v1 = vec2(1.000000,2.000000);
vec4 v2 = v1.rrrr;
EXPECT_EQ(float(v2.x),1.000000);
EXPECT_EQ(float(v2.y),1.000000);
EXPECT_EQ(float(v2.z),1.000000);
EXPECT_EQ(float(v2.w),1.000000);
} 

TEST(SwittzleTest, vec2_rrrg) {
vec2 v1 = vec2(1.000000,2.000000);
vec4 v2 = v1.rrrg;
EXPECT_EQ(float(v2.x),1.000000);
EXPECT_EQ(float(v2.y),1.000000);
EXPECT_EQ(float(v2.z),1.000000);
EXPECT_EQ(float(v2.w),2.000000);
} 

TEST(SwittzleTest, vec2_rrgr) {
vec2 v1 = vec2(1.000000,2.000000);
vec4 v2 = v1.rrgr;
EXPECT_EQ(float(v2.x),1.000000);
EXPECT_EQ(float(v2.y),1.000000);
EXPECT_EQ(float(v2.z),2.000000);
EXPECT_EQ(float(v2.w),1.000000);
} 

TEST(SwittzleTest, vec2_rrgg) {
vec2 v1 = vec2(1.000000,2.000000);
vec4 v2 = v1.rrgg;
EXPECT_EQ(float(v2.x),1.000000);
EXPECT_EQ(float(v2.y),1.000000);
EXPECT_EQ(float(v2.z),2.000000);
EXPECT_EQ(float(v2.w),2.000000);
} 

TEST(SwittzleTest, vec2_rgrr) {
vec2 v1 = vec2(1.000000,2.000000);
vec4 v2 = v1.rgrr;
EXPECT_EQ(float(v2.x),1.000000);
EXPECT_EQ(float(v2.y),2.000000);
EXPECT_EQ(float(v2.z),1.000000);
EXPECT_EQ(float(v2.w),1.000000);
} 

TEST(SwittzleTest, vec2_rgrg) {
vec2 v1 = vec2(1.000000,2.000000);
vec4 v2 = v1.rgrg;
EXPECT_EQ(float(v2.x),1.000000);
EXPECT_EQ(float(v2.y),2.000000);
EXPECT_EQ(float(v2.z),1.000000);
EXPECT_EQ(float(v2.w),2.000000);
} 

TEST(SwittzleTest, vec2_rggr) {
vec2 v1 = vec2(1.000000,2.000000);
vec4 v2 = v1.rggr;
EXPECT_EQ(float(v2.x),1.000000);
EXPECT_EQ(float(v2.y),2.000000);
EXPECT_EQ(float(v2.z),2.000000);
EXPECT_EQ(float(v2.w),1.000000);
} 

TEST(SwittzleTest, vec2_rggg) {
vec2 v1 = vec2(1.000000,2.000000);
vec4 v2 = v1.rggg;
EXPECT_EQ(float(v2.x),1.000000);
EXPECT_EQ(float(v2.y),2.000000);
EXPECT_EQ(float(v2.z),2.000000);
EXPECT_EQ(float(v2.w),2.000000);
} 

TEST(SwittzleTest, vec2_grrr) {
vec2 v1 = vec2(1.000000,2.000000);
vec4 v2 = v1.grrr;
EXPECT_EQ(float(v2.x),2.000000);
EXPECT_EQ(float(v2.y),1.000000);
EXPECT_EQ(float(v2.z),1.000000);
EXPECT_EQ(float(v2.w),1.000000);
} 

TEST(SwittzleTest, vec2_grrg) {
vec2 v1 = vec2(1.000000,2.000000);
vec4 v2 = v1.grrg;
EXPECT_EQ(float(v2.x),2.000000);
EXPECT_EQ(float(v2.y),1.000000);
EXPECT_EQ(float(v2.z),1.000000);
EXPECT_EQ(float(v2.w),2.000000);
} 

TEST(SwittzleTest, vec2_grgr) {
vec2 v1 = vec2(1.000000,2.000000);
vec4 v2 = v1.grgr;
EXPECT_EQ(float(v2.x),2.000000);
EXPECT_EQ(float(v2.y),1.000000);
EXPECT_EQ(float(v2.z),2.000000);
EXPECT_EQ(float(v2.w),1.000000);
} 

TEST(SwittzleTest, vec2_grgg) {
vec2 v1 = vec2(1.000000,2.000000);
vec4 v2 = v1.grgg;
EXPECT_EQ(float(v2.x),2.000000);
EXPECT_EQ(float(v2.y),1.000000);
EXPECT_EQ(float(v2.z),2.000000);
EXPECT_EQ(float(v2.w),2.000000);
} 

TEST(SwittzleTest, vec2_ggrr) {
vec2 v1 = vec2(1.000000,2.000000);
vec4 v2 = v1.ggrr;
EXPECT_EQ(float(v2.x),2.000000);
EXPECT_EQ(float(v2.y),2.000000);
EXPECT_EQ(float(v2.z),1.000000);
EXPECT_EQ(float(v2.w),1.000000);
} 

TEST(SwittzleTest, vec2_ggrg) {
vec2 v1 = vec2(1.000000,2.000000);
vec4 v2 = v1.ggrg;
EXPECT_EQ(float(v2.x),2.000000);
EXPECT_EQ(float(v2.y),2.000000);
EXPECT_EQ(float(v2.z),1.000000);
EXPECT_EQ(float(v2.w),2.000000);
} 

TEST(SwittzleTest, vec2_gggr) {
vec2 v1 = vec2(1.000000,2.000000);
vec4 v2 = v1.gggr;
EXPECT_EQ(float(v2.x),2.000000);
EXPECT_EQ(float(v2.y),2.000000);
EXPECT_EQ(float(v2.z),2.000000);
EXPECT_EQ(float(v2.w),1.000000);
} 

TEST(SwittzleTest, vec2_gggg) {
vec2 v1 = vec2(1.000000,2.000000);
vec4 v2 = v1.gggg;
EXPECT_EQ(float(v2.x),2.000000);
EXPECT_EQ(float(v2.y),2.000000);
EXPECT_EQ(float(v2.z),2.000000);
EXPECT_EQ(float(v2.w),2.000000);
} 

} 

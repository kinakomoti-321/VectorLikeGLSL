#include "pch.h" 
 #include "vector_like_glsl.h" 
 using namespace VectorLikeGLSL; 
namespace Vector4 {
TEST(SwittzleTest, vec4_x) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
EXPECT_EQ(float(v1.x), 1.000000);
} 

TEST(SwittzleTest, vec4_y) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
EXPECT_EQ(float(v1.y), 2.000000);
} 

TEST(SwittzleTest, vec4_z) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
EXPECT_EQ(float(v1.z), 3.000000);
} 

TEST(SwittzleTest, vec4_w) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
EXPECT_EQ(float(v1.w), 4.000000);
} 

TEST(SwittzleTest, vec4_xx) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec2 v2 = v1.xx;
EXPECT_EQ(float(v2.x),1.000000);
EXPECT_EQ(float(v2.y),1.000000);
} 

TEST(SwittzleTest, vec4_xy) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec2 v2 = v1.xy;
EXPECT_EQ(float(v2.x),1.000000);
EXPECT_EQ(float(v2.y),2.000000);
} 

TEST(SwittzleTest, vec4_xz) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec2 v2 = v1.xz;
EXPECT_EQ(float(v2.x),1.000000);
EXPECT_EQ(float(v2.y),3.000000);
} 

TEST(SwittzleTest, vec4_xw) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec2 v2 = v1.xw;
EXPECT_EQ(float(v2.x),1.000000);
EXPECT_EQ(float(v2.y),4.000000);
} 

TEST(SwittzleTest, vec4_yx) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec2 v2 = v1.yx;
EXPECT_EQ(float(v2.x),2.000000);
EXPECT_EQ(float(v2.y),1.000000);
} 

TEST(SwittzleTest, vec4_yy) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec2 v2 = v1.yy;
EXPECT_EQ(float(v2.x),2.000000);
EXPECT_EQ(float(v2.y),2.000000);
} 

TEST(SwittzleTest, vec4_yz) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec2 v2 = v1.yz;
EXPECT_EQ(float(v2.x),2.000000);
EXPECT_EQ(float(v2.y),3.000000);
} 

TEST(SwittzleTest, vec4_yw) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec2 v2 = v1.yw;
EXPECT_EQ(float(v2.x),2.000000);
EXPECT_EQ(float(v2.y),4.000000);
} 

TEST(SwittzleTest, vec4_zx) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec2 v2 = v1.zx;
EXPECT_EQ(float(v2.x),3.000000);
EXPECT_EQ(float(v2.y),1.000000);
} 

TEST(SwittzleTest, vec4_zy) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec2 v2 = v1.zy;
EXPECT_EQ(float(v2.x),3.000000);
EXPECT_EQ(float(v2.y),2.000000);
} 

TEST(SwittzleTest, vec4_zz) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec2 v2 = v1.zz;
EXPECT_EQ(float(v2.x),3.000000);
EXPECT_EQ(float(v2.y),3.000000);
} 

TEST(SwittzleTest, vec4_zw) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec2 v2 = v1.zw;
EXPECT_EQ(float(v2.x),3.000000);
EXPECT_EQ(float(v2.y),4.000000);
} 

TEST(SwittzleTest, vec4_wx) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec2 v2 = v1.wx;
EXPECT_EQ(float(v2.x),4.000000);
EXPECT_EQ(float(v2.y),1.000000);
} 

TEST(SwittzleTest, vec4_wy) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec2 v2 = v1.wy;
EXPECT_EQ(float(v2.x),4.000000);
EXPECT_EQ(float(v2.y),2.000000);
} 

TEST(SwittzleTest, vec4_wz) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec2 v2 = v1.wz;
EXPECT_EQ(float(v2.x),4.000000);
EXPECT_EQ(float(v2.y),3.000000);
} 

TEST(SwittzleTest, vec4_ww) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec2 v2 = v1.ww;
EXPECT_EQ(float(v2.x),4.000000);
EXPECT_EQ(float(v2.y),4.000000);
} 

TEST(SwittzleTest, vec4_xxx) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec3 v2 = v1.xxx;
EXPECT_EQ(float(v2.x),1.000000);
EXPECT_EQ(float(v2.y),1.000000);
EXPECT_EQ(float(v2.z),1.000000);
} 

TEST(SwittzleTest, vec4_xxy) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec3 v2 = v1.xxy;
EXPECT_EQ(float(v2.x),1.000000);
EXPECT_EQ(float(v2.y),1.000000);
EXPECT_EQ(float(v2.z),2.000000);
} 

TEST(SwittzleTest, vec4_xxz) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec3 v2 = v1.xxz;
EXPECT_EQ(float(v2.x),1.000000);
EXPECT_EQ(float(v2.y),1.000000);
EXPECT_EQ(float(v2.z),3.000000);
} 

TEST(SwittzleTest, vec4_xxw) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec3 v2 = v1.xxw;
EXPECT_EQ(float(v2.x),1.000000);
EXPECT_EQ(float(v2.y),1.000000);
EXPECT_EQ(float(v2.z),4.000000);
} 

TEST(SwittzleTest, vec4_xyx) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec3 v2 = v1.xyx;
EXPECT_EQ(float(v2.x),1.000000);
EXPECT_EQ(float(v2.y),2.000000);
EXPECT_EQ(float(v2.z),1.000000);
} 

TEST(SwittzleTest, vec4_xyy) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec3 v2 = v1.xyy;
EXPECT_EQ(float(v2.x),1.000000);
EXPECT_EQ(float(v2.y),2.000000);
EXPECT_EQ(float(v2.z),2.000000);
} 

TEST(SwittzleTest, vec4_xyz) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec3 v2 = v1.xyz;
EXPECT_EQ(float(v2.x),1.000000);
EXPECT_EQ(float(v2.y),2.000000);
EXPECT_EQ(float(v2.z),3.000000);
} 

TEST(SwittzleTest, vec4_xyw) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec3 v2 = v1.xyw;
EXPECT_EQ(float(v2.x),1.000000);
EXPECT_EQ(float(v2.y),2.000000);
EXPECT_EQ(float(v2.z),4.000000);
} 

TEST(SwittzleTest, vec4_xzx) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec3 v2 = v1.xzx;
EXPECT_EQ(float(v2.x),1.000000);
EXPECT_EQ(float(v2.y),3.000000);
EXPECT_EQ(float(v2.z),1.000000);
} 

TEST(SwittzleTest, vec4_xzy) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec3 v2 = v1.xzy;
EXPECT_EQ(float(v2.x),1.000000);
EXPECT_EQ(float(v2.y),3.000000);
EXPECT_EQ(float(v2.z),2.000000);
} 

TEST(SwittzleTest, vec4_xzz) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec3 v2 = v1.xzz;
EXPECT_EQ(float(v2.x),1.000000);
EXPECT_EQ(float(v2.y),3.000000);
EXPECT_EQ(float(v2.z),3.000000);
} 

TEST(SwittzleTest, vec4_xzw) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec3 v2 = v1.xzw;
EXPECT_EQ(float(v2.x),1.000000);
EXPECT_EQ(float(v2.y),3.000000);
EXPECT_EQ(float(v2.z),4.000000);
} 

TEST(SwittzleTest, vec4_xwx) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec3 v2 = v1.xwx;
EXPECT_EQ(float(v2.x),1.000000);
EXPECT_EQ(float(v2.y),4.000000);
EXPECT_EQ(float(v2.z),1.000000);
} 

TEST(SwittzleTest, vec4_xwy) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec3 v2 = v1.xwy;
EXPECT_EQ(float(v2.x),1.000000);
EXPECT_EQ(float(v2.y),4.000000);
EXPECT_EQ(float(v2.z),2.000000);
} 

TEST(SwittzleTest, vec4_xwz) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec3 v2 = v1.xwz;
EXPECT_EQ(float(v2.x),1.000000);
EXPECT_EQ(float(v2.y),4.000000);
EXPECT_EQ(float(v2.z),3.000000);
} 

TEST(SwittzleTest, vec4_xww) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec3 v2 = v1.xww;
EXPECT_EQ(float(v2.x),1.000000);
EXPECT_EQ(float(v2.y),4.000000);
EXPECT_EQ(float(v2.z),4.000000);
} 

TEST(SwittzleTest, vec4_yxx) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec3 v2 = v1.yxx;
EXPECT_EQ(float(v2.x),2.000000);
EXPECT_EQ(float(v2.y),1.000000);
EXPECT_EQ(float(v2.z),1.000000);
} 

TEST(SwittzleTest, vec4_yxy) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec3 v2 = v1.yxy;
EXPECT_EQ(float(v2.x),2.000000);
EXPECT_EQ(float(v2.y),1.000000);
EXPECT_EQ(float(v2.z),2.000000);
} 

TEST(SwittzleTest, vec4_yxz) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec3 v2 = v1.yxz;
EXPECT_EQ(float(v2.x),2.000000);
EXPECT_EQ(float(v2.y),1.000000);
EXPECT_EQ(float(v2.z),3.000000);
} 

TEST(SwittzleTest, vec4_yxw) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec3 v2 = v1.yxw;
EXPECT_EQ(float(v2.x),2.000000);
EXPECT_EQ(float(v2.y),1.000000);
EXPECT_EQ(float(v2.z),4.000000);
} 

TEST(SwittzleTest, vec4_yyx) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec3 v2 = v1.yyx;
EXPECT_EQ(float(v2.x),2.000000);
EXPECT_EQ(float(v2.y),2.000000);
EXPECT_EQ(float(v2.z),1.000000);
} 

TEST(SwittzleTest, vec4_yyy) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec3 v2 = v1.yyy;
EXPECT_EQ(float(v2.x),2.000000);
EXPECT_EQ(float(v2.y),2.000000);
EXPECT_EQ(float(v2.z),2.000000);
} 

TEST(SwittzleTest, vec4_yyz) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec3 v2 = v1.yyz;
EXPECT_EQ(float(v2.x),2.000000);
EXPECT_EQ(float(v2.y),2.000000);
EXPECT_EQ(float(v2.z),3.000000);
} 

TEST(SwittzleTest, vec4_yyw) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec3 v2 = v1.yyw;
EXPECT_EQ(float(v2.x),2.000000);
EXPECT_EQ(float(v2.y),2.000000);
EXPECT_EQ(float(v2.z),4.000000);
} 

TEST(SwittzleTest, vec4_yzx) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec3 v2 = v1.yzx;
EXPECT_EQ(float(v2.x),2.000000);
EXPECT_EQ(float(v2.y),3.000000);
EXPECT_EQ(float(v2.z),1.000000);
} 

TEST(SwittzleTest, vec4_yzy) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec3 v2 = v1.yzy;
EXPECT_EQ(float(v2.x),2.000000);
EXPECT_EQ(float(v2.y),3.000000);
EXPECT_EQ(float(v2.z),2.000000);
} 

TEST(SwittzleTest, vec4_yzz) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec3 v2 = v1.yzz;
EXPECT_EQ(float(v2.x),2.000000);
EXPECT_EQ(float(v2.y),3.000000);
EXPECT_EQ(float(v2.z),3.000000);
} 

TEST(SwittzleTest, vec4_yzw) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec3 v2 = v1.yzw;
EXPECT_EQ(float(v2.x),2.000000);
EXPECT_EQ(float(v2.y),3.000000);
EXPECT_EQ(float(v2.z),4.000000);
} 

TEST(SwittzleTest, vec4_ywx) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec3 v2 = v1.ywx;
EXPECT_EQ(float(v2.x),2.000000);
EXPECT_EQ(float(v2.y),4.000000);
EXPECT_EQ(float(v2.z),1.000000);
} 

TEST(SwittzleTest, vec4_ywy) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec3 v2 = v1.ywy;
EXPECT_EQ(float(v2.x),2.000000);
EXPECT_EQ(float(v2.y),4.000000);
EXPECT_EQ(float(v2.z),2.000000);
} 

TEST(SwittzleTest, vec4_ywz) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec3 v2 = v1.ywz;
EXPECT_EQ(float(v2.x),2.000000);
EXPECT_EQ(float(v2.y),4.000000);
EXPECT_EQ(float(v2.z),3.000000);
} 

TEST(SwittzleTest, vec4_yww) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec3 v2 = v1.yww;
EXPECT_EQ(float(v2.x),2.000000);
EXPECT_EQ(float(v2.y),4.000000);
EXPECT_EQ(float(v2.z),4.000000);
} 

TEST(SwittzleTest, vec4_zxx) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec3 v2 = v1.zxx;
EXPECT_EQ(float(v2.x),3.000000);
EXPECT_EQ(float(v2.y),1.000000);
EXPECT_EQ(float(v2.z),1.000000);
} 

TEST(SwittzleTest, vec4_zxy) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec3 v2 = v1.zxy;
EXPECT_EQ(float(v2.x),3.000000);
EXPECT_EQ(float(v2.y),1.000000);
EXPECT_EQ(float(v2.z),2.000000);
} 

TEST(SwittzleTest, vec4_zxz) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec3 v2 = v1.zxz;
EXPECT_EQ(float(v2.x),3.000000);
EXPECT_EQ(float(v2.y),1.000000);
EXPECT_EQ(float(v2.z),3.000000);
} 

TEST(SwittzleTest, vec4_zxw) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec3 v2 = v1.zxw;
EXPECT_EQ(float(v2.x),3.000000);
EXPECT_EQ(float(v2.y),1.000000);
EXPECT_EQ(float(v2.z),4.000000);
} 

TEST(SwittzleTest, vec4_zyx) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec3 v2 = v1.zyx;
EXPECT_EQ(float(v2.x),3.000000);
EXPECT_EQ(float(v2.y),2.000000);
EXPECT_EQ(float(v2.z),1.000000);
} 

TEST(SwittzleTest, vec4_zyy) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec3 v2 = v1.zyy;
EXPECT_EQ(float(v2.x),3.000000);
EXPECT_EQ(float(v2.y),2.000000);
EXPECT_EQ(float(v2.z),2.000000);
} 

TEST(SwittzleTest, vec4_zyz) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec3 v2 = v1.zyz;
EXPECT_EQ(float(v2.x),3.000000);
EXPECT_EQ(float(v2.y),2.000000);
EXPECT_EQ(float(v2.z),3.000000);
} 

TEST(SwittzleTest, vec4_zyw) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec3 v2 = v1.zyw;
EXPECT_EQ(float(v2.x),3.000000);
EXPECT_EQ(float(v2.y),2.000000);
EXPECT_EQ(float(v2.z),4.000000);
} 

TEST(SwittzleTest, vec4_zzx) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec3 v2 = v1.zzx;
EXPECT_EQ(float(v2.x),3.000000);
EXPECT_EQ(float(v2.y),3.000000);
EXPECT_EQ(float(v2.z),1.000000);
} 

TEST(SwittzleTest, vec4_zzy) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec3 v2 = v1.zzy;
EXPECT_EQ(float(v2.x),3.000000);
EXPECT_EQ(float(v2.y),3.000000);
EXPECT_EQ(float(v2.z),2.000000);
} 

TEST(SwittzleTest, vec4_zzz) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec3 v2 = v1.zzz;
EXPECT_EQ(float(v2.x),3.000000);
EXPECT_EQ(float(v2.y),3.000000);
EXPECT_EQ(float(v2.z),3.000000);
} 

TEST(SwittzleTest, vec4_zzw) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec3 v2 = v1.zzw;
EXPECT_EQ(float(v2.x),3.000000);
EXPECT_EQ(float(v2.y),3.000000);
EXPECT_EQ(float(v2.z),4.000000);
} 

TEST(SwittzleTest, vec4_zwx) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec3 v2 = v1.zwx;
EXPECT_EQ(float(v2.x),3.000000);
EXPECT_EQ(float(v2.y),4.000000);
EXPECT_EQ(float(v2.z),1.000000);
} 

TEST(SwittzleTest, vec4_zwy) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec3 v2 = v1.zwy;
EXPECT_EQ(float(v2.x),3.000000);
EXPECT_EQ(float(v2.y),4.000000);
EXPECT_EQ(float(v2.z),2.000000);
} 

TEST(SwittzleTest, vec4_zwz) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec3 v2 = v1.zwz;
EXPECT_EQ(float(v2.x),3.000000);
EXPECT_EQ(float(v2.y),4.000000);
EXPECT_EQ(float(v2.z),3.000000);
} 

TEST(SwittzleTest, vec4_zww) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec3 v2 = v1.zww;
EXPECT_EQ(float(v2.x),3.000000);
EXPECT_EQ(float(v2.y),4.000000);
EXPECT_EQ(float(v2.z),4.000000);
} 

TEST(SwittzleTest, vec4_wxx) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec3 v2 = v1.wxx;
EXPECT_EQ(float(v2.x),4.000000);
EXPECT_EQ(float(v2.y),1.000000);
EXPECT_EQ(float(v2.z),1.000000);
} 

TEST(SwittzleTest, vec4_wxy) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec3 v2 = v1.wxy;
EXPECT_EQ(float(v2.x),4.000000);
EXPECT_EQ(float(v2.y),1.000000);
EXPECT_EQ(float(v2.z),2.000000);
} 

TEST(SwittzleTest, vec4_wxz) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec3 v2 = v1.wxz;
EXPECT_EQ(float(v2.x),4.000000);
EXPECT_EQ(float(v2.y),1.000000);
EXPECT_EQ(float(v2.z),3.000000);
} 

TEST(SwittzleTest, vec4_wxw) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec3 v2 = v1.wxw;
EXPECT_EQ(float(v2.x),4.000000);
EXPECT_EQ(float(v2.y),1.000000);
EXPECT_EQ(float(v2.z),4.000000);
} 

TEST(SwittzleTest, vec4_wyx) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec3 v2 = v1.wyx;
EXPECT_EQ(float(v2.x),4.000000);
EXPECT_EQ(float(v2.y),2.000000);
EXPECT_EQ(float(v2.z),1.000000);
} 

TEST(SwittzleTest, vec4_wyy) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec3 v2 = v1.wyy;
EXPECT_EQ(float(v2.x),4.000000);
EXPECT_EQ(float(v2.y),2.000000);
EXPECT_EQ(float(v2.z),2.000000);
} 

TEST(SwittzleTest, vec4_wyz) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec3 v2 = v1.wyz;
EXPECT_EQ(float(v2.x),4.000000);
EXPECT_EQ(float(v2.y),2.000000);
EXPECT_EQ(float(v2.z),3.000000);
} 

TEST(SwittzleTest, vec4_wyw) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec3 v2 = v1.wyw;
EXPECT_EQ(float(v2.x),4.000000);
EXPECT_EQ(float(v2.y),2.000000);
EXPECT_EQ(float(v2.z),4.000000);
} 

TEST(SwittzleTest, vec4_wzx) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec3 v2 = v1.wzx;
EXPECT_EQ(float(v2.x),4.000000);
EXPECT_EQ(float(v2.y),3.000000);
EXPECT_EQ(float(v2.z),1.000000);
} 

TEST(SwittzleTest, vec4_wzy) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec3 v2 = v1.wzy;
EXPECT_EQ(float(v2.x),4.000000);
EXPECT_EQ(float(v2.y),3.000000);
EXPECT_EQ(float(v2.z),2.000000);
} 

TEST(SwittzleTest, vec4_wzz) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec3 v2 = v1.wzz;
EXPECT_EQ(float(v2.x),4.000000);
EXPECT_EQ(float(v2.y),3.000000);
EXPECT_EQ(float(v2.z),3.000000);
} 

TEST(SwittzleTest, vec4_wzw) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec3 v2 = v1.wzw;
EXPECT_EQ(float(v2.x),4.000000);
EXPECT_EQ(float(v2.y),3.000000);
EXPECT_EQ(float(v2.z),4.000000);
} 

TEST(SwittzleTest, vec4_wwx) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec3 v2 = v1.wwx;
EXPECT_EQ(float(v2.x),4.000000);
EXPECT_EQ(float(v2.y),4.000000);
EXPECT_EQ(float(v2.z),1.000000);
} 

TEST(SwittzleTest, vec4_wwy) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec3 v2 = v1.wwy;
EXPECT_EQ(float(v2.x),4.000000);
EXPECT_EQ(float(v2.y),4.000000);
EXPECT_EQ(float(v2.z),2.000000);
} 

TEST(SwittzleTest, vec4_wwz) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec3 v2 = v1.wwz;
EXPECT_EQ(float(v2.x),4.000000);
EXPECT_EQ(float(v2.y),4.000000);
EXPECT_EQ(float(v2.z),3.000000);
} 

TEST(SwittzleTest, vec4_www) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec3 v2 = v1.www;
EXPECT_EQ(float(v2.x),4.000000);
EXPECT_EQ(float(v2.y),4.000000);
EXPECT_EQ(float(v2.z),4.000000);
} 

TEST(SwittzleTest, vec4_xxxx) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.xxxx;
EXPECT_EQ(float(v2.x),1.000000);
EXPECT_EQ(float(v2.y),1.000000);
EXPECT_EQ(float(v2.z),1.000000);
EXPECT_EQ(float(v2.w),1.000000);
} 

TEST(SwittzleTest, vec4_xxxy) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.xxxy;
EXPECT_EQ(float(v2.x),1.000000);
EXPECT_EQ(float(v2.y),1.000000);
EXPECT_EQ(float(v2.z),1.000000);
EXPECT_EQ(float(v2.w),2.000000);
} 

TEST(SwittzleTest, vec4_xxxz) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.xxxz;
EXPECT_EQ(float(v2.x),1.000000);
EXPECT_EQ(float(v2.y),1.000000);
EXPECT_EQ(float(v2.z),1.000000);
EXPECT_EQ(float(v2.w),3.000000);
} 

TEST(SwittzleTest, vec4_xxxw) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.xxxw;
EXPECT_EQ(float(v2.x),1.000000);
EXPECT_EQ(float(v2.y),1.000000);
EXPECT_EQ(float(v2.z),1.000000);
EXPECT_EQ(float(v2.w),4.000000);
} 

TEST(SwittzleTest, vec4_xxyx) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.xxyx;
EXPECT_EQ(float(v2.x),1.000000);
EXPECT_EQ(float(v2.y),1.000000);
EXPECT_EQ(float(v2.z),2.000000);
EXPECT_EQ(float(v2.w),1.000000);
} 

TEST(SwittzleTest, vec4_xxyy) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.xxyy;
EXPECT_EQ(float(v2.x),1.000000);
EXPECT_EQ(float(v2.y),1.000000);
EXPECT_EQ(float(v2.z),2.000000);
EXPECT_EQ(float(v2.w),2.000000);
} 

TEST(SwittzleTest, vec4_xxyz) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.xxyz;
EXPECT_EQ(float(v2.x),1.000000);
EXPECT_EQ(float(v2.y),1.000000);
EXPECT_EQ(float(v2.z),2.000000);
EXPECT_EQ(float(v2.w),3.000000);
} 

TEST(SwittzleTest, vec4_xxyw) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.xxyw;
EXPECT_EQ(float(v2.x),1.000000);
EXPECT_EQ(float(v2.y),1.000000);
EXPECT_EQ(float(v2.z),2.000000);
EXPECT_EQ(float(v2.w),4.000000);
} 

TEST(SwittzleTest, vec4_xxzx) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.xxzx;
EXPECT_EQ(float(v2.x),1.000000);
EXPECT_EQ(float(v2.y),1.000000);
EXPECT_EQ(float(v2.z),3.000000);
EXPECT_EQ(float(v2.w),1.000000);
} 

TEST(SwittzleTest, vec4_xxzy) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.xxzy;
EXPECT_EQ(float(v2.x),1.000000);
EXPECT_EQ(float(v2.y),1.000000);
EXPECT_EQ(float(v2.z),3.000000);
EXPECT_EQ(float(v2.w),2.000000);
} 

TEST(SwittzleTest, vec4_xxzz) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.xxzz;
EXPECT_EQ(float(v2.x),1.000000);
EXPECT_EQ(float(v2.y),1.000000);
EXPECT_EQ(float(v2.z),3.000000);
EXPECT_EQ(float(v2.w),3.000000);
} 

TEST(SwittzleTest, vec4_xxzw) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.xxzw;
EXPECT_EQ(float(v2.x),1.000000);
EXPECT_EQ(float(v2.y),1.000000);
EXPECT_EQ(float(v2.z),3.000000);
EXPECT_EQ(float(v2.w),4.000000);
} 

TEST(SwittzleTest, vec4_xxwx) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.xxwx;
EXPECT_EQ(float(v2.x),1.000000);
EXPECT_EQ(float(v2.y),1.000000);
EXPECT_EQ(float(v2.z),4.000000);
EXPECT_EQ(float(v2.w),1.000000);
} 

TEST(SwittzleTest, vec4_xxwy) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.xxwy;
EXPECT_EQ(float(v2.x),1.000000);
EXPECT_EQ(float(v2.y),1.000000);
EXPECT_EQ(float(v2.z),4.000000);
EXPECT_EQ(float(v2.w),2.000000);
} 

TEST(SwittzleTest, vec4_xxwz) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.xxwz;
EXPECT_EQ(float(v2.x),1.000000);
EXPECT_EQ(float(v2.y),1.000000);
EXPECT_EQ(float(v2.z),4.000000);
EXPECT_EQ(float(v2.w),3.000000);
} 

TEST(SwittzleTest, vec4_xxww) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.xxww;
EXPECT_EQ(float(v2.x),1.000000);
EXPECT_EQ(float(v2.y),1.000000);
EXPECT_EQ(float(v2.z),4.000000);
EXPECT_EQ(float(v2.w),4.000000);
} 

TEST(SwittzleTest, vec4_xyxx) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.xyxx;
EXPECT_EQ(float(v2.x),1.000000);
EXPECT_EQ(float(v2.y),2.000000);
EXPECT_EQ(float(v2.z),1.000000);
EXPECT_EQ(float(v2.w),1.000000);
} 

TEST(SwittzleTest, vec4_xyxy) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.xyxy;
EXPECT_EQ(float(v2.x),1.000000);
EXPECT_EQ(float(v2.y),2.000000);
EXPECT_EQ(float(v2.z),1.000000);
EXPECT_EQ(float(v2.w),2.000000);
} 

TEST(SwittzleTest, vec4_xyxz) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.xyxz;
EXPECT_EQ(float(v2.x),1.000000);
EXPECT_EQ(float(v2.y),2.000000);
EXPECT_EQ(float(v2.z),1.000000);
EXPECT_EQ(float(v2.w),3.000000);
} 

TEST(SwittzleTest, vec4_xyxw) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.xyxw;
EXPECT_EQ(float(v2.x),1.000000);
EXPECT_EQ(float(v2.y),2.000000);
EXPECT_EQ(float(v2.z),1.000000);
EXPECT_EQ(float(v2.w),4.000000);
} 

TEST(SwittzleTest, vec4_xyyx) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.xyyx;
EXPECT_EQ(float(v2.x),1.000000);
EXPECT_EQ(float(v2.y),2.000000);
EXPECT_EQ(float(v2.z),2.000000);
EXPECT_EQ(float(v2.w),1.000000);
} 

TEST(SwittzleTest, vec4_xyyy) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.xyyy;
EXPECT_EQ(float(v2.x),1.000000);
EXPECT_EQ(float(v2.y),2.000000);
EXPECT_EQ(float(v2.z),2.000000);
EXPECT_EQ(float(v2.w),2.000000);
} 

TEST(SwittzleTest, vec4_xyyz) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.xyyz;
EXPECT_EQ(float(v2.x),1.000000);
EXPECT_EQ(float(v2.y),2.000000);
EXPECT_EQ(float(v2.z),2.000000);
EXPECT_EQ(float(v2.w),3.000000);
} 

TEST(SwittzleTest, vec4_xyyw) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.xyyw;
EXPECT_EQ(float(v2.x),1.000000);
EXPECT_EQ(float(v2.y),2.000000);
EXPECT_EQ(float(v2.z),2.000000);
EXPECT_EQ(float(v2.w),4.000000);
} 

TEST(SwittzleTest, vec4_xyzx) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.xyzx;
EXPECT_EQ(float(v2.x),1.000000);
EXPECT_EQ(float(v2.y),2.000000);
EXPECT_EQ(float(v2.z),3.000000);
EXPECT_EQ(float(v2.w),1.000000);
} 

TEST(SwittzleTest, vec4_xyzy) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.xyzy;
EXPECT_EQ(float(v2.x),1.000000);
EXPECT_EQ(float(v2.y),2.000000);
EXPECT_EQ(float(v2.z),3.000000);
EXPECT_EQ(float(v2.w),2.000000);
} 

TEST(SwittzleTest, vec4_xyzz) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.xyzz;
EXPECT_EQ(float(v2.x),1.000000);
EXPECT_EQ(float(v2.y),2.000000);
EXPECT_EQ(float(v2.z),3.000000);
EXPECT_EQ(float(v2.w),3.000000);
} 

TEST(SwittzleTest, vec4_xyzw) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.xyzw;
EXPECT_EQ(float(v2.x),1.000000);
EXPECT_EQ(float(v2.y),2.000000);
EXPECT_EQ(float(v2.z),3.000000);
EXPECT_EQ(float(v2.w),4.000000);
} 

TEST(SwittzleTest, vec4_xywx) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.xywx;
EXPECT_EQ(float(v2.x),1.000000);
EXPECT_EQ(float(v2.y),2.000000);
EXPECT_EQ(float(v2.z),4.000000);
EXPECT_EQ(float(v2.w),1.000000);
} 

TEST(SwittzleTest, vec4_xywy) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.xywy;
EXPECT_EQ(float(v2.x),1.000000);
EXPECT_EQ(float(v2.y),2.000000);
EXPECT_EQ(float(v2.z),4.000000);
EXPECT_EQ(float(v2.w),2.000000);
} 

TEST(SwittzleTest, vec4_xywz) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.xywz;
EXPECT_EQ(float(v2.x),1.000000);
EXPECT_EQ(float(v2.y),2.000000);
EXPECT_EQ(float(v2.z),4.000000);
EXPECT_EQ(float(v2.w),3.000000);
} 

TEST(SwittzleTest, vec4_xyww) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.xyww;
EXPECT_EQ(float(v2.x),1.000000);
EXPECT_EQ(float(v2.y),2.000000);
EXPECT_EQ(float(v2.z),4.000000);
EXPECT_EQ(float(v2.w),4.000000);
} 

TEST(SwittzleTest, vec4_xzxx) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.xzxx;
EXPECT_EQ(float(v2.x),1.000000);
EXPECT_EQ(float(v2.y),3.000000);
EXPECT_EQ(float(v2.z),1.000000);
EXPECT_EQ(float(v2.w),1.000000);
} 

TEST(SwittzleTest, vec4_xzxy) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.xzxy;
EXPECT_EQ(float(v2.x),1.000000);
EXPECT_EQ(float(v2.y),3.000000);
EXPECT_EQ(float(v2.z),1.000000);
EXPECT_EQ(float(v2.w),2.000000);
} 

TEST(SwittzleTest, vec4_xzxz) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.xzxz;
EXPECT_EQ(float(v2.x),1.000000);
EXPECT_EQ(float(v2.y),3.000000);
EXPECT_EQ(float(v2.z),1.000000);
EXPECT_EQ(float(v2.w),3.000000);
} 

TEST(SwittzleTest, vec4_xzxw) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.xzxw;
EXPECT_EQ(float(v2.x),1.000000);
EXPECT_EQ(float(v2.y),3.000000);
EXPECT_EQ(float(v2.z),1.000000);
EXPECT_EQ(float(v2.w),4.000000);
} 

TEST(SwittzleTest, vec4_xzyx) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.xzyx;
EXPECT_EQ(float(v2.x),1.000000);
EXPECT_EQ(float(v2.y),3.000000);
EXPECT_EQ(float(v2.z),2.000000);
EXPECT_EQ(float(v2.w),1.000000);
} 

TEST(SwittzleTest, vec4_xzyy) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.xzyy;
EXPECT_EQ(float(v2.x),1.000000);
EXPECT_EQ(float(v2.y),3.000000);
EXPECT_EQ(float(v2.z),2.000000);
EXPECT_EQ(float(v2.w),2.000000);
} 

TEST(SwittzleTest, vec4_xzyz) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.xzyz;
EXPECT_EQ(float(v2.x),1.000000);
EXPECT_EQ(float(v2.y),3.000000);
EXPECT_EQ(float(v2.z),2.000000);
EXPECT_EQ(float(v2.w),3.000000);
} 

TEST(SwittzleTest, vec4_xzyw) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.xzyw;
EXPECT_EQ(float(v2.x),1.000000);
EXPECT_EQ(float(v2.y),3.000000);
EXPECT_EQ(float(v2.z),2.000000);
EXPECT_EQ(float(v2.w),4.000000);
} 

TEST(SwittzleTest, vec4_xzzx) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.xzzx;
EXPECT_EQ(float(v2.x),1.000000);
EXPECT_EQ(float(v2.y),3.000000);
EXPECT_EQ(float(v2.z),3.000000);
EXPECT_EQ(float(v2.w),1.000000);
} 

TEST(SwittzleTest, vec4_xzzy) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.xzzy;
EXPECT_EQ(float(v2.x),1.000000);
EXPECT_EQ(float(v2.y),3.000000);
EXPECT_EQ(float(v2.z),3.000000);
EXPECT_EQ(float(v2.w),2.000000);
} 

TEST(SwittzleTest, vec4_xzzz) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.xzzz;
EXPECT_EQ(float(v2.x),1.000000);
EXPECT_EQ(float(v2.y),3.000000);
EXPECT_EQ(float(v2.z),3.000000);
EXPECT_EQ(float(v2.w),3.000000);
} 

TEST(SwittzleTest, vec4_xzzw) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.xzzw;
EXPECT_EQ(float(v2.x),1.000000);
EXPECT_EQ(float(v2.y),3.000000);
EXPECT_EQ(float(v2.z),3.000000);
EXPECT_EQ(float(v2.w),4.000000);
} 

TEST(SwittzleTest, vec4_xzwx) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.xzwx;
EXPECT_EQ(float(v2.x),1.000000);
EXPECT_EQ(float(v2.y),3.000000);
EXPECT_EQ(float(v2.z),4.000000);
EXPECT_EQ(float(v2.w),1.000000);
} 

TEST(SwittzleTest, vec4_xzwy) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.xzwy;
EXPECT_EQ(float(v2.x),1.000000);
EXPECT_EQ(float(v2.y),3.000000);
EXPECT_EQ(float(v2.z),4.000000);
EXPECT_EQ(float(v2.w),2.000000);
} 

TEST(SwittzleTest, vec4_xzwz) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.xzwz;
EXPECT_EQ(float(v2.x),1.000000);
EXPECT_EQ(float(v2.y),3.000000);
EXPECT_EQ(float(v2.z),4.000000);
EXPECT_EQ(float(v2.w),3.000000);
} 

TEST(SwittzleTest, vec4_xzww) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.xzww;
EXPECT_EQ(float(v2.x),1.000000);
EXPECT_EQ(float(v2.y),3.000000);
EXPECT_EQ(float(v2.z),4.000000);
EXPECT_EQ(float(v2.w),4.000000);
} 

TEST(SwittzleTest, vec4_xwxx) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.xwxx;
EXPECT_EQ(float(v2.x),1.000000);
EXPECT_EQ(float(v2.y),4.000000);
EXPECT_EQ(float(v2.z),1.000000);
EXPECT_EQ(float(v2.w),1.000000);
} 

TEST(SwittzleTest, vec4_xwxy) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.xwxy;
EXPECT_EQ(float(v2.x),1.000000);
EXPECT_EQ(float(v2.y),4.000000);
EXPECT_EQ(float(v2.z),1.000000);
EXPECT_EQ(float(v2.w),2.000000);
} 

TEST(SwittzleTest, vec4_xwxz) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.xwxz;
EXPECT_EQ(float(v2.x),1.000000);
EXPECT_EQ(float(v2.y),4.000000);
EXPECT_EQ(float(v2.z),1.000000);
EXPECT_EQ(float(v2.w),3.000000);
} 

TEST(SwittzleTest, vec4_xwxw) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.xwxw;
EXPECT_EQ(float(v2.x),1.000000);
EXPECT_EQ(float(v2.y),4.000000);
EXPECT_EQ(float(v2.z),1.000000);
EXPECT_EQ(float(v2.w),4.000000);
} 

TEST(SwittzleTest, vec4_xwyx) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.xwyx;
EXPECT_EQ(float(v2.x),1.000000);
EXPECT_EQ(float(v2.y),4.000000);
EXPECT_EQ(float(v2.z),2.000000);
EXPECT_EQ(float(v2.w),1.000000);
} 

TEST(SwittzleTest, vec4_xwyy) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.xwyy;
EXPECT_EQ(float(v2.x),1.000000);
EXPECT_EQ(float(v2.y),4.000000);
EXPECT_EQ(float(v2.z),2.000000);
EXPECT_EQ(float(v2.w),2.000000);
} 

TEST(SwittzleTest, vec4_xwyz) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.xwyz;
EXPECT_EQ(float(v2.x),1.000000);
EXPECT_EQ(float(v2.y),4.000000);
EXPECT_EQ(float(v2.z),2.000000);
EXPECT_EQ(float(v2.w),3.000000);
} 

TEST(SwittzleTest, vec4_xwyw) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.xwyw;
EXPECT_EQ(float(v2.x),1.000000);
EXPECT_EQ(float(v2.y),4.000000);
EXPECT_EQ(float(v2.z),2.000000);
EXPECT_EQ(float(v2.w),4.000000);
} 

TEST(SwittzleTest, vec4_xwzx) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.xwzx;
EXPECT_EQ(float(v2.x),1.000000);
EXPECT_EQ(float(v2.y),4.000000);
EXPECT_EQ(float(v2.z),3.000000);
EXPECT_EQ(float(v2.w),1.000000);
} 

TEST(SwittzleTest, vec4_xwzy) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.xwzy;
EXPECT_EQ(float(v2.x),1.000000);
EXPECT_EQ(float(v2.y),4.000000);
EXPECT_EQ(float(v2.z),3.000000);
EXPECT_EQ(float(v2.w),2.000000);
} 

TEST(SwittzleTest, vec4_xwzz) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.xwzz;
EXPECT_EQ(float(v2.x),1.000000);
EXPECT_EQ(float(v2.y),4.000000);
EXPECT_EQ(float(v2.z),3.000000);
EXPECT_EQ(float(v2.w),3.000000);
} 

TEST(SwittzleTest, vec4_xwzw) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.xwzw;
EXPECT_EQ(float(v2.x),1.000000);
EXPECT_EQ(float(v2.y),4.000000);
EXPECT_EQ(float(v2.z),3.000000);
EXPECT_EQ(float(v2.w),4.000000);
} 

TEST(SwittzleTest, vec4_xwwx) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.xwwx;
EXPECT_EQ(float(v2.x),1.000000);
EXPECT_EQ(float(v2.y),4.000000);
EXPECT_EQ(float(v2.z),4.000000);
EXPECT_EQ(float(v2.w),1.000000);
} 

TEST(SwittzleTest, vec4_xwwy) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.xwwy;
EXPECT_EQ(float(v2.x),1.000000);
EXPECT_EQ(float(v2.y),4.000000);
EXPECT_EQ(float(v2.z),4.000000);
EXPECT_EQ(float(v2.w),2.000000);
} 

TEST(SwittzleTest, vec4_xwwz) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.xwwz;
EXPECT_EQ(float(v2.x),1.000000);
EXPECT_EQ(float(v2.y),4.000000);
EXPECT_EQ(float(v2.z),4.000000);
EXPECT_EQ(float(v2.w),3.000000);
} 

TEST(SwittzleTest, vec4_xwww) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.xwww;
EXPECT_EQ(float(v2.x),1.000000);
EXPECT_EQ(float(v2.y),4.000000);
EXPECT_EQ(float(v2.z),4.000000);
EXPECT_EQ(float(v2.w),4.000000);
} 

TEST(SwittzleTest, vec4_yxxx) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.yxxx;
EXPECT_EQ(float(v2.x),2.000000);
EXPECT_EQ(float(v2.y),1.000000);
EXPECT_EQ(float(v2.z),1.000000);
EXPECT_EQ(float(v2.w),1.000000);
} 

TEST(SwittzleTest, vec4_yxxy) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.yxxy;
EXPECT_EQ(float(v2.x),2.000000);
EXPECT_EQ(float(v2.y),1.000000);
EXPECT_EQ(float(v2.z),1.000000);
EXPECT_EQ(float(v2.w),2.000000);
} 

TEST(SwittzleTest, vec4_yxxz) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.yxxz;
EXPECT_EQ(float(v2.x),2.000000);
EXPECT_EQ(float(v2.y),1.000000);
EXPECT_EQ(float(v2.z),1.000000);
EXPECT_EQ(float(v2.w),3.000000);
} 

TEST(SwittzleTest, vec4_yxxw) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.yxxw;
EXPECT_EQ(float(v2.x),2.000000);
EXPECT_EQ(float(v2.y),1.000000);
EXPECT_EQ(float(v2.z),1.000000);
EXPECT_EQ(float(v2.w),4.000000);
} 

TEST(SwittzleTest, vec4_yxyx) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.yxyx;
EXPECT_EQ(float(v2.x),2.000000);
EXPECT_EQ(float(v2.y),1.000000);
EXPECT_EQ(float(v2.z),2.000000);
EXPECT_EQ(float(v2.w),1.000000);
} 

TEST(SwittzleTest, vec4_yxyy) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.yxyy;
EXPECT_EQ(float(v2.x),2.000000);
EXPECT_EQ(float(v2.y),1.000000);
EXPECT_EQ(float(v2.z),2.000000);
EXPECT_EQ(float(v2.w),2.000000);
} 

TEST(SwittzleTest, vec4_yxyz) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.yxyz;
EXPECT_EQ(float(v2.x),2.000000);
EXPECT_EQ(float(v2.y),1.000000);
EXPECT_EQ(float(v2.z),2.000000);
EXPECT_EQ(float(v2.w),3.000000);
} 

TEST(SwittzleTest, vec4_yxyw) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.yxyw;
EXPECT_EQ(float(v2.x),2.000000);
EXPECT_EQ(float(v2.y),1.000000);
EXPECT_EQ(float(v2.z),2.000000);
EXPECT_EQ(float(v2.w),4.000000);
} 

TEST(SwittzleTest, vec4_yxzx) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.yxzx;
EXPECT_EQ(float(v2.x),2.000000);
EXPECT_EQ(float(v2.y),1.000000);
EXPECT_EQ(float(v2.z),3.000000);
EXPECT_EQ(float(v2.w),1.000000);
} 

TEST(SwittzleTest, vec4_yxzy) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.yxzy;
EXPECT_EQ(float(v2.x),2.000000);
EXPECT_EQ(float(v2.y),1.000000);
EXPECT_EQ(float(v2.z),3.000000);
EXPECT_EQ(float(v2.w),2.000000);
} 

TEST(SwittzleTest, vec4_yxzz) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.yxzz;
EXPECT_EQ(float(v2.x),2.000000);
EXPECT_EQ(float(v2.y),1.000000);
EXPECT_EQ(float(v2.z),3.000000);
EXPECT_EQ(float(v2.w),3.000000);
} 

TEST(SwittzleTest, vec4_yxzw) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.yxzw;
EXPECT_EQ(float(v2.x),2.000000);
EXPECT_EQ(float(v2.y),1.000000);
EXPECT_EQ(float(v2.z),3.000000);
EXPECT_EQ(float(v2.w),4.000000);
} 

TEST(SwittzleTest, vec4_yxwx) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.yxwx;
EXPECT_EQ(float(v2.x),2.000000);
EXPECT_EQ(float(v2.y),1.000000);
EXPECT_EQ(float(v2.z),4.000000);
EXPECT_EQ(float(v2.w),1.000000);
} 

TEST(SwittzleTest, vec4_yxwy) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.yxwy;
EXPECT_EQ(float(v2.x),2.000000);
EXPECT_EQ(float(v2.y),1.000000);
EXPECT_EQ(float(v2.z),4.000000);
EXPECT_EQ(float(v2.w),2.000000);
} 

TEST(SwittzleTest, vec4_yxwz) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.yxwz;
EXPECT_EQ(float(v2.x),2.000000);
EXPECT_EQ(float(v2.y),1.000000);
EXPECT_EQ(float(v2.z),4.000000);
EXPECT_EQ(float(v2.w),3.000000);
} 

TEST(SwittzleTest, vec4_yxww) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.yxww;
EXPECT_EQ(float(v2.x),2.000000);
EXPECT_EQ(float(v2.y),1.000000);
EXPECT_EQ(float(v2.z),4.000000);
EXPECT_EQ(float(v2.w),4.000000);
} 

TEST(SwittzleTest, vec4_yyxx) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.yyxx;
EXPECT_EQ(float(v2.x),2.000000);
EXPECT_EQ(float(v2.y),2.000000);
EXPECT_EQ(float(v2.z),1.000000);
EXPECT_EQ(float(v2.w),1.000000);
} 

TEST(SwittzleTest, vec4_yyxy) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.yyxy;
EXPECT_EQ(float(v2.x),2.000000);
EXPECT_EQ(float(v2.y),2.000000);
EXPECT_EQ(float(v2.z),1.000000);
EXPECT_EQ(float(v2.w),2.000000);
} 

TEST(SwittzleTest, vec4_yyxz) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.yyxz;
EXPECT_EQ(float(v2.x),2.000000);
EXPECT_EQ(float(v2.y),2.000000);
EXPECT_EQ(float(v2.z),1.000000);
EXPECT_EQ(float(v2.w),3.000000);
} 

TEST(SwittzleTest, vec4_yyxw) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.yyxw;
EXPECT_EQ(float(v2.x),2.000000);
EXPECT_EQ(float(v2.y),2.000000);
EXPECT_EQ(float(v2.z),1.000000);
EXPECT_EQ(float(v2.w),4.000000);
} 

TEST(SwittzleTest, vec4_yyyx) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.yyyx;
EXPECT_EQ(float(v2.x),2.000000);
EXPECT_EQ(float(v2.y),2.000000);
EXPECT_EQ(float(v2.z),2.000000);
EXPECT_EQ(float(v2.w),1.000000);
} 

TEST(SwittzleTest, vec4_yyyy) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.yyyy;
EXPECT_EQ(float(v2.x),2.000000);
EXPECT_EQ(float(v2.y),2.000000);
EXPECT_EQ(float(v2.z),2.000000);
EXPECT_EQ(float(v2.w),2.000000);
} 

TEST(SwittzleTest, vec4_yyyz) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.yyyz;
EXPECT_EQ(float(v2.x),2.000000);
EXPECT_EQ(float(v2.y),2.000000);
EXPECT_EQ(float(v2.z),2.000000);
EXPECT_EQ(float(v2.w),3.000000);
} 

TEST(SwittzleTest, vec4_yyyw) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.yyyw;
EXPECT_EQ(float(v2.x),2.000000);
EXPECT_EQ(float(v2.y),2.000000);
EXPECT_EQ(float(v2.z),2.000000);
EXPECT_EQ(float(v2.w),4.000000);
} 

TEST(SwittzleTest, vec4_yyzx) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.yyzx;
EXPECT_EQ(float(v2.x),2.000000);
EXPECT_EQ(float(v2.y),2.000000);
EXPECT_EQ(float(v2.z),3.000000);
EXPECT_EQ(float(v2.w),1.000000);
} 

TEST(SwittzleTest, vec4_yyzy) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.yyzy;
EXPECT_EQ(float(v2.x),2.000000);
EXPECT_EQ(float(v2.y),2.000000);
EXPECT_EQ(float(v2.z),3.000000);
EXPECT_EQ(float(v2.w),2.000000);
} 

TEST(SwittzleTest, vec4_yyzz) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.yyzz;
EXPECT_EQ(float(v2.x),2.000000);
EXPECT_EQ(float(v2.y),2.000000);
EXPECT_EQ(float(v2.z),3.000000);
EXPECT_EQ(float(v2.w),3.000000);
} 

TEST(SwittzleTest, vec4_yyzw) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.yyzw;
EXPECT_EQ(float(v2.x),2.000000);
EXPECT_EQ(float(v2.y),2.000000);
EXPECT_EQ(float(v2.z),3.000000);
EXPECT_EQ(float(v2.w),4.000000);
} 

TEST(SwittzleTest, vec4_yywx) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.yywx;
EXPECT_EQ(float(v2.x),2.000000);
EXPECT_EQ(float(v2.y),2.000000);
EXPECT_EQ(float(v2.z),4.000000);
EXPECT_EQ(float(v2.w),1.000000);
} 

TEST(SwittzleTest, vec4_yywy) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.yywy;
EXPECT_EQ(float(v2.x),2.000000);
EXPECT_EQ(float(v2.y),2.000000);
EXPECT_EQ(float(v2.z),4.000000);
EXPECT_EQ(float(v2.w),2.000000);
} 

TEST(SwittzleTest, vec4_yywz) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.yywz;
EXPECT_EQ(float(v2.x),2.000000);
EXPECT_EQ(float(v2.y),2.000000);
EXPECT_EQ(float(v2.z),4.000000);
EXPECT_EQ(float(v2.w),3.000000);
} 

TEST(SwittzleTest, vec4_yyww) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.yyww;
EXPECT_EQ(float(v2.x),2.000000);
EXPECT_EQ(float(v2.y),2.000000);
EXPECT_EQ(float(v2.z),4.000000);
EXPECT_EQ(float(v2.w),4.000000);
} 

TEST(SwittzleTest, vec4_yzxx) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.yzxx;
EXPECT_EQ(float(v2.x),2.000000);
EXPECT_EQ(float(v2.y),3.000000);
EXPECT_EQ(float(v2.z),1.000000);
EXPECT_EQ(float(v2.w),1.000000);
} 

TEST(SwittzleTest, vec4_yzxy) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.yzxy;
EXPECT_EQ(float(v2.x),2.000000);
EXPECT_EQ(float(v2.y),3.000000);
EXPECT_EQ(float(v2.z),1.000000);
EXPECT_EQ(float(v2.w),2.000000);
} 

TEST(SwittzleTest, vec4_yzxz) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.yzxz;
EXPECT_EQ(float(v2.x),2.000000);
EXPECT_EQ(float(v2.y),3.000000);
EXPECT_EQ(float(v2.z),1.000000);
EXPECT_EQ(float(v2.w),3.000000);
} 

TEST(SwittzleTest, vec4_yzxw) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.yzxw;
EXPECT_EQ(float(v2.x),2.000000);
EXPECT_EQ(float(v2.y),3.000000);
EXPECT_EQ(float(v2.z),1.000000);
EXPECT_EQ(float(v2.w),4.000000);
} 

TEST(SwittzleTest, vec4_yzyx) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.yzyx;
EXPECT_EQ(float(v2.x),2.000000);
EXPECT_EQ(float(v2.y),3.000000);
EXPECT_EQ(float(v2.z),2.000000);
EXPECT_EQ(float(v2.w),1.000000);
} 

TEST(SwittzleTest, vec4_yzyy) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.yzyy;
EXPECT_EQ(float(v2.x),2.000000);
EXPECT_EQ(float(v2.y),3.000000);
EXPECT_EQ(float(v2.z),2.000000);
EXPECT_EQ(float(v2.w),2.000000);
} 

TEST(SwittzleTest, vec4_yzyz) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.yzyz;
EXPECT_EQ(float(v2.x),2.000000);
EXPECT_EQ(float(v2.y),3.000000);
EXPECT_EQ(float(v2.z),2.000000);
EXPECT_EQ(float(v2.w),3.000000);
} 

TEST(SwittzleTest, vec4_yzyw) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.yzyw;
EXPECT_EQ(float(v2.x),2.000000);
EXPECT_EQ(float(v2.y),3.000000);
EXPECT_EQ(float(v2.z),2.000000);
EXPECT_EQ(float(v2.w),4.000000);
} 

TEST(SwittzleTest, vec4_yzzx) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.yzzx;
EXPECT_EQ(float(v2.x),2.000000);
EXPECT_EQ(float(v2.y),3.000000);
EXPECT_EQ(float(v2.z),3.000000);
EXPECT_EQ(float(v2.w),1.000000);
} 

TEST(SwittzleTest, vec4_yzzy) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.yzzy;
EXPECT_EQ(float(v2.x),2.000000);
EXPECT_EQ(float(v2.y),3.000000);
EXPECT_EQ(float(v2.z),3.000000);
EXPECT_EQ(float(v2.w),2.000000);
} 

TEST(SwittzleTest, vec4_yzzz) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.yzzz;
EXPECT_EQ(float(v2.x),2.000000);
EXPECT_EQ(float(v2.y),3.000000);
EXPECT_EQ(float(v2.z),3.000000);
EXPECT_EQ(float(v2.w),3.000000);
} 

TEST(SwittzleTest, vec4_yzzw) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.yzzw;
EXPECT_EQ(float(v2.x),2.000000);
EXPECT_EQ(float(v2.y),3.000000);
EXPECT_EQ(float(v2.z),3.000000);
EXPECT_EQ(float(v2.w),4.000000);
} 

TEST(SwittzleTest, vec4_yzwx) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.yzwx;
EXPECT_EQ(float(v2.x),2.000000);
EXPECT_EQ(float(v2.y),3.000000);
EXPECT_EQ(float(v2.z),4.000000);
EXPECT_EQ(float(v2.w),1.000000);
} 

TEST(SwittzleTest, vec4_yzwy) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.yzwy;
EXPECT_EQ(float(v2.x),2.000000);
EXPECT_EQ(float(v2.y),3.000000);
EXPECT_EQ(float(v2.z),4.000000);
EXPECT_EQ(float(v2.w),2.000000);
} 

TEST(SwittzleTest, vec4_yzwz) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.yzwz;
EXPECT_EQ(float(v2.x),2.000000);
EXPECT_EQ(float(v2.y),3.000000);
EXPECT_EQ(float(v2.z),4.000000);
EXPECT_EQ(float(v2.w),3.000000);
} 

TEST(SwittzleTest, vec4_yzww) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.yzww;
EXPECT_EQ(float(v2.x),2.000000);
EXPECT_EQ(float(v2.y),3.000000);
EXPECT_EQ(float(v2.z),4.000000);
EXPECT_EQ(float(v2.w),4.000000);
} 

TEST(SwittzleTest, vec4_ywxx) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.ywxx;
EXPECT_EQ(float(v2.x),2.000000);
EXPECT_EQ(float(v2.y),4.000000);
EXPECT_EQ(float(v2.z),1.000000);
EXPECT_EQ(float(v2.w),1.000000);
} 

TEST(SwittzleTest, vec4_ywxy) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.ywxy;
EXPECT_EQ(float(v2.x),2.000000);
EXPECT_EQ(float(v2.y),4.000000);
EXPECT_EQ(float(v2.z),1.000000);
EXPECT_EQ(float(v2.w),2.000000);
} 

TEST(SwittzleTest, vec4_ywxz) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.ywxz;
EXPECT_EQ(float(v2.x),2.000000);
EXPECT_EQ(float(v2.y),4.000000);
EXPECT_EQ(float(v2.z),1.000000);
EXPECT_EQ(float(v2.w),3.000000);
} 

TEST(SwittzleTest, vec4_ywxw) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.ywxw;
EXPECT_EQ(float(v2.x),2.000000);
EXPECT_EQ(float(v2.y),4.000000);
EXPECT_EQ(float(v2.z),1.000000);
EXPECT_EQ(float(v2.w),4.000000);
} 

TEST(SwittzleTest, vec4_ywyx) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.ywyx;
EXPECT_EQ(float(v2.x),2.000000);
EXPECT_EQ(float(v2.y),4.000000);
EXPECT_EQ(float(v2.z),2.000000);
EXPECT_EQ(float(v2.w),1.000000);
} 

TEST(SwittzleTest, vec4_ywyy) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.ywyy;
EXPECT_EQ(float(v2.x),2.000000);
EXPECT_EQ(float(v2.y),4.000000);
EXPECT_EQ(float(v2.z),2.000000);
EXPECT_EQ(float(v2.w),2.000000);
} 

TEST(SwittzleTest, vec4_ywyz) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.ywyz;
EXPECT_EQ(float(v2.x),2.000000);
EXPECT_EQ(float(v2.y),4.000000);
EXPECT_EQ(float(v2.z),2.000000);
EXPECT_EQ(float(v2.w),3.000000);
} 

TEST(SwittzleTest, vec4_ywyw) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.ywyw;
EXPECT_EQ(float(v2.x),2.000000);
EXPECT_EQ(float(v2.y),4.000000);
EXPECT_EQ(float(v2.z),2.000000);
EXPECT_EQ(float(v2.w),4.000000);
} 

TEST(SwittzleTest, vec4_ywzx) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.ywzx;
EXPECT_EQ(float(v2.x),2.000000);
EXPECT_EQ(float(v2.y),4.000000);
EXPECT_EQ(float(v2.z),3.000000);
EXPECT_EQ(float(v2.w),1.000000);
} 

TEST(SwittzleTest, vec4_ywzy) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.ywzy;
EXPECT_EQ(float(v2.x),2.000000);
EXPECT_EQ(float(v2.y),4.000000);
EXPECT_EQ(float(v2.z),3.000000);
EXPECT_EQ(float(v2.w),2.000000);
} 

TEST(SwittzleTest, vec4_ywzz) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.ywzz;
EXPECT_EQ(float(v2.x),2.000000);
EXPECT_EQ(float(v2.y),4.000000);
EXPECT_EQ(float(v2.z),3.000000);
EXPECT_EQ(float(v2.w),3.000000);
} 

TEST(SwittzleTest, vec4_ywzw) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.ywzw;
EXPECT_EQ(float(v2.x),2.000000);
EXPECT_EQ(float(v2.y),4.000000);
EXPECT_EQ(float(v2.z),3.000000);
EXPECT_EQ(float(v2.w),4.000000);
} 

TEST(SwittzleTest, vec4_ywwx) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.ywwx;
EXPECT_EQ(float(v2.x),2.000000);
EXPECT_EQ(float(v2.y),4.000000);
EXPECT_EQ(float(v2.z),4.000000);
EXPECT_EQ(float(v2.w),1.000000);
} 

TEST(SwittzleTest, vec4_ywwy) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.ywwy;
EXPECT_EQ(float(v2.x),2.000000);
EXPECT_EQ(float(v2.y),4.000000);
EXPECT_EQ(float(v2.z),4.000000);
EXPECT_EQ(float(v2.w),2.000000);
} 

TEST(SwittzleTest, vec4_ywwz) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.ywwz;
EXPECT_EQ(float(v2.x),2.000000);
EXPECT_EQ(float(v2.y),4.000000);
EXPECT_EQ(float(v2.z),4.000000);
EXPECT_EQ(float(v2.w),3.000000);
} 

TEST(SwittzleTest, vec4_ywww) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.ywww;
EXPECT_EQ(float(v2.x),2.000000);
EXPECT_EQ(float(v2.y),4.000000);
EXPECT_EQ(float(v2.z),4.000000);
EXPECT_EQ(float(v2.w),4.000000);
} 

TEST(SwittzleTest, vec4_zxxx) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.zxxx;
EXPECT_EQ(float(v2.x),3.000000);
EXPECT_EQ(float(v2.y),1.000000);
EXPECT_EQ(float(v2.z),1.000000);
EXPECT_EQ(float(v2.w),1.000000);
} 

TEST(SwittzleTest, vec4_zxxy) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.zxxy;
EXPECT_EQ(float(v2.x),3.000000);
EXPECT_EQ(float(v2.y),1.000000);
EXPECT_EQ(float(v2.z),1.000000);
EXPECT_EQ(float(v2.w),2.000000);
} 

TEST(SwittzleTest, vec4_zxxz) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.zxxz;
EXPECT_EQ(float(v2.x),3.000000);
EXPECT_EQ(float(v2.y),1.000000);
EXPECT_EQ(float(v2.z),1.000000);
EXPECT_EQ(float(v2.w),3.000000);
} 

TEST(SwittzleTest, vec4_zxxw) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.zxxw;
EXPECT_EQ(float(v2.x),3.000000);
EXPECT_EQ(float(v2.y),1.000000);
EXPECT_EQ(float(v2.z),1.000000);
EXPECT_EQ(float(v2.w),4.000000);
} 

TEST(SwittzleTest, vec4_zxyx) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.zxyx;
EXPECT_EQ(float(v2.x),3.000000);
EXPECT_EQ(float(v2.y),1.000000);
EXPECT_EQ(float(v2.z),2.000000);
EXPECT_EQ(float(v2.w),1.000000);
} 

TEST(SwittzleTest, vec4_zxyy) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.zxyy;
EXPECT_EQ(float(v2.x),3.000000);
EXPECT_EQ(float(v2.y),1.000000);
EXPECT_EQ(float(v2.z),2.000000);
EXPECT_EQ(float(v2.w),2.000000);
} 

TEST(SwittzleTest, vec4_zxyz) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.zxyz;
EXPECT_EQ(float(v2.x),3.000000);
EXPECT_EQ(float(v2.y),1.000000);
EXPECT_EQ(float(v2.z),2.000000);
EXPECT_EQ(float(v2.w),3.000000);
} 

TEST(SwittzleTest, vec4_zxyw) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.zxyw;
EXPECT_EQ(float(v2.x),3.000000);
EXPECT_EQ(float(v2.y),1.000000);
EXPECT_EQ(float(v2.z),2.000000);
EXPECT_EQ(float(v2.w),4.000000);
} 

TEST(SwittzleTest, vec4_zxzx) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.zxzx;
EXPECT_EQ(float(v2.x),3.000000);
EXPECT_EQ(float(v2.y),1.000000);
EXPECT_EQ(float(v2.z),3.000000);
EXPECT_EQ(float(v2.w),1.000000);
} 

TEST(SwittzleTest, vec4_zxzy) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.zxzy;
EXPECT_EQ(float(v2.x),3.000000);
EXPECT_EQ(float(v2.y),1.000000);
EXPECT_EQ(float(v2.z),3.000000);
EXPECT_EQ(float(v2.w),2.000000);
} 

TEST(SwittzleTest, vec4_zxzz) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.zxzz;
EXPECT_EQ(float(v2.x),3.000000);
EXPECT_EQ(float(v2.y),1.000000);
EXPECT_EQ(float(v2.z),3.000000);
EXPECT_EQ(float(v2.w),3.000000);
} 

TEST(SwittzleTest, vec4_zxzw) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.zxzw;
EXPECT_EQ(float(v2.x),3.000000);
EXPECT_EQ(float(v2.y),1.000000);
EXPECT_EQ(float(v2.z),3.000000);
EXPECT_EQ(float(v2.w),4.000000);
} 

TEST(SwittzleTest, vec4_zxwx) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.zxwx;
EXPECT_EQ(float(v2.x),3.000000);
EXPECT_EQ(float(v2.y),1.000000);
EXPECT_EQ(float(v2.z),4.000000);
EXPECT_EQ(float(v2.w),1.000000);
} 

TEST(SwittzleTest, vec4_zxwy) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.zxwy;
EXPECT_EQ(float(v2.x),3.000000);
EXPECT_EQ(float(v2.y),1.000000);
EXPECT_EQ(float(v2.z),4.000000);
EXPECT_EQ(float(v2.w),2.000000);
} 

TEST(SwittzleTest, vec4_zxwz) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.zxwz;
EXPECT_EQ(float(v2.x),3.000000);
EXPECT_EQ(float(v2.y),1.000000);
EXPECT_EQ(float(v2.z),4.000000);
EXPECT_EQ(float(v2.w),3.000000);
} 

TEST(SwittzleTest, vec4_zxww) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.zxww;
EXPECT_EQ(float(v2.x),3.000000);
EXPECT_EQ(float(v2.y),1.000000);
EXPECT_EQ(float(v2.z),4.000000);
EXPECT_EQ(float(v2.w),4.000000);
} 

TEST(SwittzleTest, vec4_zyxx) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.zyxx;
EXPECT_EQ(float(v2.x),3.000000);
EXPECT_EQ(float(v2.y),2.000000);
EXPECT_EQ(float(v2.z),1.000000);
EXPECT_EQ(float(v2.w),1.000000);
} 

TEST(SwittzleTest, vec4_zyxy) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.zyxy;
EXPECT_EQ(float(v2.x),3.000000);
EXPECT_EQ(float(v2.y),2.000000);
EXPECT_EQ(float(v2.z),1.000000);
EXPECT_EQ(float(v2.w),2.000000);
} 

TEST(SwittzleTest, vec4_zyxz) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.zyxz;
EXPECT_EQ(float(v2.x),3.000000);
EXPECT_EQ(float(v2.y),2.000000);
EXPECT_EQ(float(v2.z),1.000000);
EXPECT_EQ(float(v2.w),3.000000);
} 

TEST(SwittzleTest, vec4_zyxw) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.zyxw;
EXPECT_EQ(float(v2.x),3.000000);
EXPECT_EQ(float(v2.y),2.000000);
EXPECT_EQ(float(v2.z),1.000000);
EXPECT_EQ(float(v2.w),4.000000);
} 

TEST(SwittzleTest, vec4_zyyx) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.zyyx;
EXPECT_EQ(float(v2.x),3.000000);
EXPECT_EQ(float(v2.y),2.000000);
EXPECT_EQ(float(v2.z),2.000000);
EXPECT_EQ(float(v2.w),1.000000);
} 

TEST(SwittzleTest, vec4_zyyy) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.zyyy;
EXPECT_EQ(float(v2.x),3.000000);
EXPECT_EQ(float(v2.y),2.000000);
EXPECT_EQ(float(v2.z),2.000000);
EXPECT_EQ(float(v2.w),2.000000);
} 

TEST(SwittzleTest, vec4_zyyz) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.zyyz;
EXPECT_EQ(float(v2.x),3.000000);
EXPECT_EQ(float(v2.y),2.000000);
EXPECT_EQ(float(v2.z),2.000000);
EXPECT_EQ(float(v2.w),3.000000);
} 

TEST(SwittzleTest, vec4_zyyw) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.zyyw;
EXPECT_EQ(float(v2.x),3.000000);
EXPECT_EQ(float(v2.y),2.000000);
EXPECT_EQ(float(v2.z),2.000000);
EXPECT_EQ(float(v2.w),4.000000);
} 

TEST(SwittzleTest, vec4_zyzx) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.zyzx;
EXPECT_EQ(float(v2.x),3.000000);
EXPECT_EQ(float(v2.y),2.000000);
EXPECT_EQ(float(v2.z),3.000000);
EXPECT_EQ(float(v2.w),1.000000);
} 

TEST(SwittzleTest, vec4_zyzy) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.zyzy;
EXPECT_EQ(float(v2.x),3.000000);
EXPECT_EQ(float(v2.y),2.000000);
EXPECT_EQ(float(v2.z),3.000000);
EXPECT_EQ(float(v2.w),2.000000);
} 

TEST(SwittzleTest, vec4_zyzz) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.zyzz;
EXPECT_EQ(float(v2.x),3.000000);
EXPECT_EQ(float(v2.y),2.000000);
EXPECT_EQ(float(v2.z),3.000000);
EXPECT_EQ(float(v2.w),3.000000);
} 

TEST(SwittzleTest, vec4_zyzw) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.zyzw;
EXPECT_EQ(float(v2.x),3.000000);
EXPECT_EQ(float(v2.y),2.000000);
EXPECT_EQ(float(v2.z),3.000000);
EXPECT_EQ(float(v2.w),4.000000);
} 

TEST(SwittzleTest, vec4_zywx) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.zywx;
EXPECT_EQ(float(v2.x),3.000000);
EXPECT_EQ(float(v2.y),2.000000);
EXPECT_EQ(float(v2.z),4.000000);
EXPECT_EQ(float(v2.w),1.000000);
} 

TEST(SwittzleTest, vec4_zywy) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.zywy;
EXPECT_EQ(float(v2.x),3.000000);
EXPECT_EQ(float(v2.y),2.000000);
EXPECT_EQ(float(v2.z),4.000000);
EXPECT_EQ(float(v2.w),2.000000);
} 

TEST(SwittzleTest, vec4_zywz) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.zywz;
EXPECT_EQ(float(v2.x),3.000000);
EXPECT_EQ(float(v2.y),2.000000);
EXPECT_EQ(float(v2.z),4.000000);
EXPECT_EQ(float(v2.w),3.000000);
} 

TEST(SwittzleTest, vec4_zyww) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.zyww;
EXPECT_EQ(float(v2.x),3.000000);
EXPECT_EQ(float(v2.y),2.000000);
EXPECT_EQ(float(v2.z),4.000000);
EXPECT_EQ(float(v2.w),4.000000);
} 

TEST(SwittzleTest, vec4_zzxx) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.zzxx;
EXPECT_EQ(float(v2.x),3.000000);
EXPECT_EQ(float(v2.y),3.000000);
EXPECT_EQ(float(v2.z),1.000000);
EXPECT_EQ(float(v2.w),1.000000);
} 

TEST(SwittzleTest, vec4_zzxy) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.zzxy;
EXPECT_EQ(float(v2.x),3.000000);
EXPECT_EQ(float(v2.y),3.000000);
EXPECT_EQ(float(v2.z),1.000000);
EXPECT_EQ(float(v2.w),2.000000);
} 

TEST(SwittzleTest, vec4_zzxz) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.zzxz;
EXPECT_EQ(float(v2.x),3.000000);
EXPECT_EQ(float(v2.y),3.000000);
EXPECT_EQ(float(v2.z),1.000000);
EXPECT_EQ(float(v2.w),3.000000);
} 

TEST(SwittzleTest, vec4_zzxw) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.zzxw;
EXPECT_EQ(float(v2.x),3.000000);
EXPECT_EQ(float(v2.y),3.000000);
EXPECT_EQ(float(v2.z),1.000000);
EXPECT_EQ(float(v2.w),4.000000);
} 

TEST(SwittzleTest, vec4_zzyx) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.zzyx;
EXPECT_EQ(float(v2.x),3.000000);
EXPECT_EQ(float(v2.y),3.000000);
EXPECT_EQ(float(v2.z),2.000000);
EXPECT_EQ(float(v2.w),1.000000);
} 

TEST(SwittzleTest, vec4_zzyy) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.zzyy;
EXPECT_EQ(float(v2.x),3.000000);
EXPECT_EQ(float(v2.y),3.000000);
EXPECT_EQ(float(v2.z),2.000000);
EXPECT_EQ(float(v2.w),2.000000);
} 

TEST(SwittzleTest, vec4_zzyz) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.zzyz;
EXPECT_EQ(float(v2.x),3.000000);
EXPECT_EQ(float(v2.y),3.000000);
EXPECT_EQ(float(v2.z),2.000000);
EXPECT_EQ(float(v2.w),3.000000);
} 

TEST(SwittzleTest, vec4_zzyw) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.zzyw;
EXPECT_EQ(float(v2.x),3.000000);
EXPECT_EQ(float(v2.y),3.000000);
EXPECT_EQ(float(v2.z),2.000000);
EXPECT_EQ(float(v2.w),4.000000);
} 

TEST(SwittzleTest, vec4_zzzx) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.zzzx;
EXPECT_EQ(float(v2.x),3.000000);
EXPECT_EQ(float(v2.y),3.000000);
EXPECT_EQ(float(v2.z),3.000000);
EXPECT_EQ(float(v2.w),1.000000);
} 

TEST(SwittzleTest, vec4_zzzy) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.zzzy;
EXPECT_EQ(float(v2.x),3.000000);
EXPECT_EQ(float(v2.y),3.000000);
EXPECT_EQ(float(v2.z),3.000000);
EXPECT_EQ(float(v2.w),2.000000);
} 

TEST(SwittzleTest, vec4_zzzz) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.zzzz;
EXPECT_EQ(float(v2.x),3.000000);
EXPECT_EQ(float(v2.y),3.000000);
EXPECT_EQ(float(v2.z),3.000000);
EXPECT_EQ(float(v2.w),3.000000);
} 

TEST(SwittzleTest, vec4_zzzw) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.zzzw;
EXPECT_EQ(float(v2.x),3.000000);
EXPECT_EQ(float(v2.y),3.000000);
EXPECT_EQ(float(v2.z),3.000000);
EXPECT_EQ(float(v2.w),4.000000);
} 

TEST(SwittzleTest, vec4_zzwx) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.zzwx;
EXPECT_EQ(float(v2.x),3.000000);
EXPECT_EQ(float(v2.y),3.000000);
EXPECT_EQ(float(v2.z),4.000000);
EXPECT_EQ(float(v2.w),1.000000);
} 

TEST(SwittzleTest, vec4_zzwy) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.zzwy;
EXPECT_EQ(float(v2.x),3.000000);
EXPECT_EQ(float(v2.y),3.000000);
EXPECT_EQ(float(v2.z),4.000000);
EXPECT_EQ(float(v2.w),2.000000);
} 

TEST(SwittzleTest, vec4_zzwz) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.zzwz;
EXPECT_EQ(float(v2.x),3.000000);
EXPECT_EQ(float(v2.y),3.000000);
EXPECT_EQ(float(v2.z),4.000000);
EXPECT_EQ(float(v2.w),3.000000);
} 

TEST(SwittzleTest, vec4_zzww) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.zzww;
EXPECT_EQ(float(v2.x),3.000000);
EXPECT_EQ(float(v2.y),3.000000);
EXPECT_EQ(float(v2.z),4.000000);
EXPECT_EQ(float(v2.w),4.000000);
} 

TEST(SwittzleTest, vec4_zwxx) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.zwxx;
EXPECT_EQ(float(v2.x),3.000000);
EXPECT_EQ(float(v2.y),4.000000);
EXPECT_EQ(float(v2.z),1.000000);
EXPECT_EQ(float(v2.w),1.000000);
} 

TEST(SwittzleTest, vec4_zwxy) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.zwxy;
EXPECT_EQ(float(v2.x),3.000000);
EXPECT_EQ(float(v2.y),4.000000);
EXPECT_EQ(float(v2.z),1.000000);
EXPECT_EQ(float(v2.w),2.000000);
} 

TEST(SwittzleTest, vec4_zwxz) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.zwxz;
EXPECT_EQ(float(v2.x),3.000000);
EXPECT_EQ(float(v2.y),4.000000);
EXPECT_EQ(float(v2.z),1.000000);
EXPECT_EQ(float(v2.w),3.000000);
} 

TEST(SwittzleTest, vec4_zwxw) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.zwxw;
EXPECT_EQ(float(v2.x),3.000000);
EXPECT_EQ(float(v2.y),4.000000);
EXPECT_EQ(float(v2.z),1.000000);
EXPECT_EQ(float(v2.w),4.000000);
} 

TEST(SwittzleTest, vec4_zwyx) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.zwyx;
EXPECT_EQ(float(v2.x),3.000000);
EXPECT_EQ(float(v2.y),4.000000);
EXPECT_EQ(float(v2.z),2.000000);
EXPECT_EQ(float(v2.w),1.000000);
} 

TEST(SwittzleTest, vec4_zwyy) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.zwyy;
EXPECT_EQ(float(v2.x),3.000000);
EXPECT_EQ(float(v2.y),4.000000);
EXPECT_EQ(float(v2.z),2.000000);
EXPECT_EQ(float(v2.w),2.000000);
} 

TEST(SwittzleTest, vec4_zwyz) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.zwyz;
EXPECT_EQ(float(v2.x),3.000000);
EXPECT_EQ(float(v2.y),4.000000);
EXPECT_EQ(float(v2.z),2.000000);
EXPECT_EQ(float(v2.w),3.000000);
} 

TEST(SwittzleTest, vec4_zwyw) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.zwyw;
EXPECT_EQ(float(v2.x),3.000000);
EXPECT_EQ(float(v2.y),4.000000);
EXPECT_EQ(float(v2.z),2.000000);
EXPECT_EQ(float(v2.w),4.000000);
} 

TEST(SwittzleTest, vec4_zwzx) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.zwzx;
EXPECT_EQ(float(v2.x),3.000000);
EXPECT_EQ(float(v2.y),4.000000);
EXPECT_EQ(float(v2.z),3.000000);
EXPECT_EQ(float(v2.w),1.000000);
} 

TEST(SwittzleTest, vec4_zwzy) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.zwzy;
EXPECT_EQ(float(v2.x),3.000000);
EXPECT_EQ(float(v2.y),4.000000);
EXPECT_EQ(float(v2.z),3.000000);
EXPECT_EQ(float(v2.w),2.000000);
} 

TEST(SwittzleTest, vec4_zwzz) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.zwzz;
EXPECT_EQ(float(v2.x),3.000000);
EXPECT_EQ(float(v2.y),4.000000);
EXPECT_EQ(float(v2.z),3.000000);
EXPECT_EQ(float(v2.w),3.000000);
} 

TEST(SwittzleTest, vec4_zwzw) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.zwzw;
EXPECT_EQ(float(v2.x),3.000000);
EXPECT_EQ(float(v2.y),4.000000);
EXPECT_EQ(float(v2.z),3.000000);
EXPECT_EQ(float(v2.w),4.000000);
} 

TEST(SwittzleTest, vec4_zwwx) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.zwwx;
EXPECT_EQ(float(v2.x),3.000000);
EXPECT_EQ(float(v2.y),4.000000);
EXPECT_EQ(float(v2.z),4.000000);
EXPECT_EQ(float(v2.w),1.000000);
} 

TEST(SwittzleTest, vec4_zwwy) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.zwwy;
EXPECT_EQ(float(v2.x),3.000000);
EXPECT_EQ(float(v2.y),4.000000);
EXPECT_EQ(float(v2.z),4.000000);
EXPECT_EQ(float(v2.w),2.000000);
} 

TEST(SwittzleTest, vec4_zwwz) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.zwwz;
EXPECT_EQ(float(v2.x),3.000000);
EXPECT_EQ(float(v2.y),4.000000);
EXPECT_EQ(float(v2.z),4.000000);
EXPECT_EQ(float(v2.w),3.000000);
} 

TEST(SwittzleTest, vec4_zwww) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.zwww;
EXPECT_EQ(float(v2.x),3.000000);
EXPECT_EQ(float(v2.y),4.000000);
EXPECT_EQ(float(v2.z),4.000000);
EXPECT_EQ(float(v2.w),4.000000);
} 

TEST(SwittzleTest, vec4_wxxx) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.wxxx;
EXPECT_EQ(float(v2.x),4.000000);
EXPECT_EQ(float(v2.y),1.000000);
EXPECT_EQ(float(v2.z),1.000000);
EXPECT_EQ(float(v2.w),1.000000);
} 

TEST(SwittzleTest, vec4_wxxy) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.wxxy;
EXPECT_EQ(float(v2.x),4.000000);
EXPECT_EQ(float(v2.y),1.000000);
EXPECT_EQ(float(v2.z),1.000000);
EXPECT_EQ(float(v2.w),2.000000);
} 

TEST(SwittzleTest, vec4_wxxz) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.wxxz;
EXPECT_EQ(float(v2.x),4.000000);
EXPECT_EQ(float(v2.y),1.000000);
EXPECT_EQ(float(v2.z),1.000000);
EXPECT_EQ(float(v2.w),3.000000);
} 

TEST(SwittzleTest, vec4_wxxw) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.wxxw;
EXPECT_EQ(float(v2.x),4.000000);
EXPECT_EQ(float(v2.y),1.000000);
EXPECT_EQ(float(v2.z),1.000000);
EXPECT_EQ(float(v2.w),4.000000);
} 

TEST(SwittzleTest, vec4_wxyx) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.wxyx;
EXPECT_EQ(float(v2.x),4.000000);
EXPECT_EQ(float(v2.y),1.000000);
EXPECT_EQ(float(v2.z),2.000000);
EXPECT_EQ(float(v2.w),1.000000);
} 

TEST(SwittzleTest, vec4_wxyy) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.wxyy;
EXPECT_EQ(float(v2.x),4.000000);
EXPECT_EQ(float(v2.y),1.000000);
EXPECT_EQ(float(v2.z),2.000000);
EXPECT_EQ(float(v2.w),2.000000);
} 

TEST(SwittzleTest, vec4_wxyz) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.wxyz;
EXPECT_EQ(float(v2.x),4.000000);
EXPECT_EQ(float(v2.y),1.000000);
EXPECT_EQ(float(v2.z),2.000000);
EXPECT_EQ(float(v2.w),3.000000);
} 

TEST(SwittzleTest, vec4_wxyw) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.wxyw;
EXPECT_EQ(float(v2.x),4.000000);
EXPECT_EQ(float(v2.y),1.000000);
EXPECT_EQ(float(v2.z),2.000000);
EXPECT_EQ(float(v2.w),4.000000);
} 

TEST(SwittzleTest, vec4_wxzx) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.wxzx;
EXPECT_EQ(float(v2.x),4.000000);
EXPECT_EQ(float(v2.y),1.000000);
EXPECT_EQ(float(v2.z),3.000000);
EXPECT_EQ(float(v2.w),1.000000);
} 

TEST(SwittzleTest, vec4_wxzy) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.wxzy;
EXPECT_EQ(float(v2.x),4.000000);
EXPECT_EQ(float(v2.y),1.000000);
EXPECT_EQ(float(v2.z),3.000000);
EXPECT_EQ(float(v2.w),2.000000);
} 

TEST(SwittzleTest, vec4_wxzz) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.wxzz;
EXPECT_EQ(float(v2.x),4.000000);
EXPECT_EQ(float(v2.y),1.000000);
EXPECT_EQ(float(v2.z),3.000000);
EXPECT_EQ(float(v2.w),3.000000);
} 

TEST(SwittzleTest, vec4_wxzw) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.wxzw;
EXPECT_EQ(float(v2.x),4.000000);
EXPECT_EQ(float(v2.y),1.000000);
EXPECT_EQ(float(v2.z),3.000000);
EXPECT_EQ(float(v2.w),4.000000);
} 

TEST(SwittzleTest, vec4_wxwx) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.wxwx;
EXPECT_EQ(float(v2.x),4.000000);
EXPECT_EQ(float(v2.y),1.000000);
EXPECT_EQ(float(v2.z),4.000000);
EXPECT_EQ(float(v2.w),1.000000);
} 

TEST(SwittzleTest, vec4_wxwy) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.wxwy;
EXPECT_EQ(float(v2.x),4.000000);
EXPECT_EQ(float(v2.y),1.000000);
EXPECT_EQ(float(v2.z),4.000000);
EXPECT_EQ(float(v2.w),2.000000);
} 

TEST(SwittzleTest, vec4_wxwz) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.wxwz;
EXPECT_EQ(float(v2.x),4.000000);
EXPECT_EQ(float(v2.y),1.000000);
EXPECT_EQ(float(v2.z),4.000000);
EXPECT_EQ(float(v2.w),3.000000);
} 

TEST(SwittzleTest, vec4_wxww) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.wxww;
EXPECT_EQ(float(v2.x),4.000000);
EXPECT_EQ(float(v2.y),1.000000);
EXPECT_EQ(float(v2.z),4.000000);
EXPECT_EQ(float(v2.w),4.000000);
} 

TEST(SwittzleTest, vec4_wyxx) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.wyxx;
EXPECT_EQ(float(v2.x),4.000000);
EXPECT_EQ(float(v2.y),2.000000);
EXPECT_EQ(float(v2.z),1.000000);
EXPECT_EQ(float(v2.w),1.000000);
} 

TEST(SwittzleTest, vec4_wyxy) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.wyxy;
EXPECT_EQ(float(v2.x),4.000000);
EXPECT_EQ(float(v2.y),2.000000);
EXPECT_EQ(float(v2.z),1.000000);
EXPECT_EQ(float(v2.w),2.000000);
} 

TEST(SwittzleTest, vec4_wyxz) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.wyxz;
EXPECT_EQ(float(v2.x),4.000000);
EXPECT_EQ(float(v2.y),2.000000);
EXPECT_EQ(float(v2.z),1.000000);
EXPECT_EQ(float(v2.w),3.000000);
} 

TEST(SwittzleTest, vec4_wyxw) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.wyxw;
EXPECT_EQ(float(v2.x),4.000000);
EXPECT_EQ(float(v2.y),2.000000);
EXPECT_EQ(float(v2.z),1.000000);
EXPECT_EQ(float(v2.w),4.000000);
} 

TEST(SwittzleTest, vec4_wyyx) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.wyyx;
EXPECT_EQ(float(v2.x),4.000000);
EXPECT_EQ(float(v2.y),2.000000);
EXPECT_EQ(float(v2.z),2.000000);
EXPECT_EQ(float(v2.w),1.000000);
} 

TEST(SwittzleTest, vec4_wyyy) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.wyyy;
EXPECT_EQ(float(v2.x),4.000000);
EXPECT_EQ(float(v2.y),2.000000);
EXPECT_EQ(float(v2.z),2.000000);
EXPECT_EQ(float(v2.w),2.000000);
} 

TEST(SwittzleTest, vec4_wyyz) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.wyyz;
EXPECT_EQ(float(v2.x),4.000000);
EXPECT_EQ(float(v2.y),2.000000);
EXPECT_EQ(float(v2.z),2.000000);
EXPECT_EQ(float(v2.w),3.000000);
} 

TEST(SwittzleTest, vec4_wyyw) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.wyyw;
EXPECT_EQ(float(v2.x),4.000000);
EXPECT_EQ(float(v2.y),2.000000);
EXPECT_EQ(float(v2.z),2.000000);
EXPECT_EQ(float(v2.w),4.000000);
} 

TEST(SwittzleTest, vec4_wyzx) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.wyzx;
EXPECT_EQ(float(v2.x),4.000000);
EXPECT_EQ(float(v2.y),2.000000);
EXPECT_EQ(float(v2.z),3.000000);
EXPECT_EQ(float(v2.w),1.000000);
} 

TEST(SwittzleTest, vec4_wyzy) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.wyzy;
EXPECT_EQ(float(v2.x),4.000000);
EXPECT_EQ(float(v2.y),2.000000);
EXPECT_EQ(float(v2.z),3.000000);
EXPECT_EQ(float(v2.w),2.000000);
} 

TEST(SwittzleTest, vec4_wyzz) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.wyzz;
EXPECT_EQ(float(v2.x),4.000000);
EXPECT_EQ(float(v2.y),2.000000);
EXPECT_EQ(float(v2.z),3.000000);
EXPECT_EQ(float(v2.w),3.000000);
} 

TEST(SwittzleTest, vec4_wyzw) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.wyzw;
EXPECT_EQ(float(v2.x),4.000000);
EXPECT_EQ(float(v2.y),2.000000);
EXPECT_EQ(float(v2.z),3.000000);
EXPECT_EQ(float(v2.w),4.000000);
} 

TEST(SwittzleTest, vec4_wywx) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.wywx;
EXPECT_EQ(float(v2.x),4.000000);
EXPECT_EQ(float(v2.y),2.000000);
EXPECT_EQ(float(v2.z),4.000000);
EXPECT_EQ(float(v2.w),1.000000);
} 

TEST(SwittzleTest, vec4_wywy) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.wywy;
EXPECT_EQ(float(v2.x),4.000000);
EXPECT_EQ(float(v2.y),2.000000);
EXPECT_EQ(float(v2.z),4.000000);
EXPECT_EQ(float(v2.w),2.000000);
} 

TEST(SwittzleTest, vec4_wywz) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.wywz;
EXPECT_EQ(float(v2.x),4.000000);
EXPECT_EQ(float(v2.y),2.000000);
EXPECT_EQ(float(v2.z),4.000000);
EXPECT_EQ(float(v2.w),3.000000);
} 

TEST(SwittzleTest, vec4_wyww) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.wyww;
EXPECT_EQ(float(v2.x),4.000000);
EXPECT_EQ(float(v2.y),2.000000);
EXPECT_EQ(float(v2.z),4.000000);
EXPECT_EQ(float(v2.w),4.000000);
} 

TEST(SwittzleTest, vec4_wzxx) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.wzxx;
EXPECT_EQ(float(v2.x),4.000000);
EXPECT_EQ(float(v2.y),3.000000);
EXPECT_EQ(float(v2.z),1.000000);
EXPECT_EQ(float(v2.w),1.000000);
} 

TEST(SwittzleTest, vec4_wzxy) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.wzxy;
EXPECT_EQ(float(v2.x),4.000000);
EXPECT_EQ(float(v2.y),3.000000);
EXPECT_EQ(float(v2.z),1.000000);
EXPECT_EQ(float(v2.w),2.000000);
} 

TEST(SwittzleTest, vec4_wzxz) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.wzxz;
EXPECT_EQ(float(v2.x),4.000000);
EXPECT_EQ(float(v2.y),3.000000);
EXPECT_EQ(float(v2.z),1.000000);
EXPECT_EQ(float(v2.w),3.000000);
} 

TEST(SwittzleTest, vec4_wzxw) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.wzxw;
EXPECT_EQ(float(v2.x),4.000000);
EXPECT_EQ(float(v2.y),3.000000);
EXPECT_EQ(float(v2.z),1.000000);
EXPECT_EQ(float(v2.w),4.000000);
} 

TEST(SwittzleTest, vec4_wzyx) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.wzyx;
EXPECT_EQ(float(v2.x),4.000000);
EXPECT_EQ(float(v2.y),3.000000);
EXPECT_EQ(float(v2.z),2.000000);
EXPECT_EQ(float(v2.w),1.000000);
} 

TEST(SwittzleTest, vec4_wzyy) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.wzyy;
EXPECT_EQ(float(v2.x),4.000000);
EXPECT_EQ(float(v2.y),3.000000);
EXPECT_EQ(float(v2.z),2.000000);
EXPECT_EQ(float(v2.w),2.000000);
} 

TEST(SwittzleTest, vec4_wzyz) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.wzyz;
EXPECT_EQ(float(v2.x),4.000000);
EXPECT_EQ(float(v2.y),3.000000);
EXPECT_EQ(float(v2.z),2.000000);
EXPECT_EQ(float(v2.w),3.000000);
} 

TEST(SwittzleTest, vec4_wzyw) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.wzyw;
EXPECT_EQ(float(v2.x),4.000000);
EXPECT_EQ(float(v2.y),3.000000);
EXPECT_EQ(float(v2.z),2.000000);
EXPECT_EQ(float(v2.w),4.000000);
} 

TEST(SwittzleTest, vec4_wzzx) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.wzzx;
EXPECT_EQ(float(v2.x),4.000000);
EXPECT_EQ(float(v2.y),3.000000);
EXPECT_EQ(float(v2.z),3.000000);
EXPECT_EQ(float(v2.w),1.000000);
} 

TEST(SwittzleTest, vec4_wzzy) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.wzzy;
EXPECT_EQ(float(v2.x),4.000000);
EXPECT_EQ(float(v2.y),3.000000);
EXPECT_EQ(float(v2.z),3.000000);
EXPECT_EQ(float(v2.w),2.000000);
} 

TEST(SwittzleTest, vec4_wzzz) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.wzzz;
EXPECT_EQ(float(v2.x),4.000000);
EXPECT_EQ(float(v2.y),3.000000);
EXPECT_EQ(float(v2.z),3.000000);
EXPECT_EQ(float(v2.w),3.000000);
} 

TEST(SwittzleTest, vec4_wzzw) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.wzzw;
EXPECT_EQ(float(v2.x),4.000000);
EXPECT_EQ(float(v2.y),3.000000);
EXPECT_EQ(float(v2.z),3.000000);
EXPECT_EQ(float(v2.w),4.000000);
} 

TEST(SwittzleTest, vec4_wzwx) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.wzwx;
EXPECT_EQ(float(v2.x),4.000000);
EXPECT_EQ(float(v2.y),3.000000);
EXPECT_EQ(float(v2.z),4.000000);
EXPECT_EQ(float(v2.w),1.000000);
} 

TEST(SwittzleTest, vec4_wzwy) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.wzwy;
EXPECT_EQ(float(v2.x),4.000000);
EXPECT_EQ(float(v2.y),3.000000);
EXPECT_EQ(float(v2.z),4.000000);
EXPECT_EQ(float(v2.w),2.000000);
} 

TEST(SwittzleTest, vec4_wzwz) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.wzwz;
EXPECT_EQ(float(v2.x),4.000000);
EXPECT_EQ(float(v2.y),3.000000);
EXPECT_EQ(float(v2.z),4.000000);
EXPECT_EQ(float(v2.w),3.000000);
} 

TEST(SwittzleTest, vec4_wzww) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.wzww;
EXPECT_EQ(float(v2.x),4.000000);
EXPECT_EQ(float(v2.y),3.000000);
EXPECT_EQ(float(v2.z),4.000000);
EXPECT_EQ(float(v2.w),4.000000);
} 

TEST(SwittzleTest, vec4_wwxx) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.wwxx;
EXPECT_EQ(float(v2.x),4.000000);
EXPECT_EQ(float(v2.y),4.000000);
EXPECT_EQ(float(v2.z),1.000000);
EXPECT_EQ(float(v2.w),1.000000);
} 

TEST(SwittzleTest, vec4_wwxy) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.wwxy;
EXPECT_EQ(float(v2.x),4.000000);
EXPECT_EQ(float(v2.y),4.000000);
EXPECT_EQ(float(v2.z),1.000000);
EXPECT_EQ(float(v2.w),2.000000);
} 

TEST(SwittzleTest, vec4_wwxz) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.wwxz;
EXPECT_EQ(float(v2.x),4.000000);
EXPECT_EQ(float(v2.y),4.000000);
EXPECT_EQ(float(v2.z),1.000000);
EXPECT_EQ(float(v2.w),3.000000);
} 

TEST(SwittzleTest, vec4_wwxw) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.wwxw;
EXPECT_EQ(float(v2.x),4.000000);
EXPECT_EQ(float(v2.y),4.000000);
EXPECT_EQ(float(v2.z),1.000000);
EXPECT_EQ(float(v2.w),4.000000);
} 

TEST(SwittzleTest, vec4_wwyx) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.wwyx;
EXPECT_EQ(float(v2.x),4.000000);
EXPECT_EQ(float(v2.y),4.000000);
EXPECT_EQ(float(v2.z),2.000000);
EXPECT_EQ(float(v2.w),1.000000);
} 

TEST(SwittzleTest, vec4_wwyy) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.wwyy;
EXPECT_EQ(float(v2.x),4.000000);
EXPECT_EQ(float(v2.y),4.000000);
EXPECT_EQ(float(v2.z),2.000000);
EXPECT_EQ(float(v2.w),2.000000);
} 

TEST(SwittzleTest, vec4_wwyz) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.wwyz;
EXPECT_EQ(float(v2.x),4.000000);
EXPECT_EQ(float(v2.y),4.000000);
EXPECT_EQ(float(v2.z),2.000000);
EXPECT_EQ(float(v2.w),3.000000);
} 

TEST(SwittzleTest, vec4_wwyw) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.wwyw;
EXPECT_EQ(float(v2.x),4.000000);
EXPECT_EQ(float(v2.y),4.000000);
EXPECT_EQ(float(v2.z),2.000000);
EXPECT_EQ(float(v2.w),4.000000);
} 

TEST(SwittzleTest, vec4_wwzx) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.wwzx;
EXPECT_EQ(float(v2.x),4.000000);
EXPECT_EQ(float(v2.y),4.000000);
EXPECT_EQ(float(v2.z),3.000000);
EXPECT_EQ(float(v2.w),1.000000);
} 

TEST(SwittzleTest, vec4_wwzy) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.wwzy;
EXPECT_EQ(float(v2.x),4.000000);
EXPECT_EQ(float(v2.y),4.000000);
EXPECT_EQ(float(v2.z),3.000000);
EXPECT_EQ(float(v2.w),2.000000);
} 

TEST(SwittzleTest, vec4_wwzz) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.wwzz;
EXPECT_EQ(float(v2.x),4.000000);
EXPECT_EQ(float(v2.y),4.000000);
EXPECT_EQ(float(v2.z),3.000000);
EXPECT_EQ(float(v2.w),3.000000);
} 

TEST(SwittzleTest, vec4_wwzw) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.wwzw;
EXPECT_EQ(float(v2.x),4.000000);
EXPECT_EQ(float(v2.y),4.000000);
EXPECT_EQ(float(v2.z),3.000000);
EXPECT_EQ(float(v2.w),4.000000);
} 

TEST(SwittzleTest, vec4_wwwx) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.wwwx;
EXPECT_EQ(float(v2.x),4.000000);
EXPECT_EQ(float(v2.y),4.000000);
EXPECT_EQ(float(v2.z),4.000000);
EXPECT_EQ(float(v2.w),1.000000);
} 

TEST(SwittzleTest, vec4_wwwy) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.wwwy;
EXPECT_EQ(float(v2.x),4.000000);
EXPECT_EQ(float(v2.y),4.000000);
EXPECT_EQ(float(v2.z),4.000000);
EXPECT_EQ(float(v2.w),2.000000);
} 

TEST(SwittzleTest, vec4_wwwz) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.wwwz;
EXPECT_EQ(float(v2.x),4.000000);
EXPECT_EQ(float(v2.y),4.000000);
EXPECT_EQ(float(v2.z),4.000000);
EXPECT_EQ(float(v2.w),3.000000);
} 

TEST(SwittzleTest, vec4_wwww) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.wwww;
EXPECT_EQ(float(v2.x),4.000000);
EXPECT_EQ(float(v2.y),4.000000);
EXPECT_EQ(float(v2.z),4.000000);
EXPECT_EQ(float(v2.w),4.000000);
} 

TEST(SwittzleTest, vec4_r) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
EXPECT_EQ(float(v1.r), 1.000000);
} 

TEST(SwittzleTest, vec4_g) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
EXPECT_EQ(float(v1.g), 2.000000);
} 

TEST(SwittzleTest, vec4_b) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
EXPECT_EQ(float(v1.b), 3.000000);
} 

TEST(SwittzleTest, vec4_a) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
EXPECT_EQ(float(v1.a), 4.000000);
} 

TEST(SwittzleTest, vec4_rr) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec2 v2 = v1.rr;
EXPECT_EQ(float(v2.x),1.000000);
EXPECT_EQ(float(v2.y),1.000000);
} 

TEST(SwittzleTest, vec4_rg) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec2 v2 = v1.rg;
EXPECT_EQ(float(v2.x),1.000000);
EXPECT_EQ(float(v2.y),2.000000);
} 

TEST(SwittzleTest, vec4_rb) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec2 v2 = v1.rb;
EXPECT_EQ(float(v2.x),1.000000);
EXPECT_EQ(float(v2.y),3.000000);
} 

TEST(SwittzleTest, vec4_ra) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec2 v2 = v1.ra;
EXPECT_EQ(float(v2.x),1.000000);
EXPECT_EQ(float(v2.y),4.000000);
} 

TEST(SwittzleTest, vec4_gr) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec2 v2 = v1.gr;
EXPECT_EQ(float(v2.x),2.000000);
EXPECT_EQ(float(v2.y),1.000000);
} 

TEST(SwittzleTest, vec4_gg) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec2 v2 = v1.gg;
EXPECT_EQ(float(v2.x),2.000000);
EXPECT_EQ(float(v2.y),2.000000);
} 

TEST(SwittzleTest, vec4_gb) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec2 v2 = v1.gb;
EXPECT_EQ(float(v2.x),2.000000);
EXPECT_EQ(float(v2.y),3.000000);
} 

TEST(SwittzleTest, vec4_ga) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec2 v2 = v1.ga;
EXPECT_EQ(float(v2.x),2.000000);
EXPECT_EQ(float(v2.y),4.000000);
} 

TEST(SwittzleTest, vec4_br) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec2 v2 = v1.br;
EXPECT_EQ(float(v2.x),3.000000);
EXPECT_EQ(float(v2.y),1.000000);
} 

TEST(SwittzleTest, vec4_bg) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec2 v2 = v1.bg;
EXPECT_EQ(float(v2.x),3.000000);
EXPECT_EQ(float(v2.y),2.000000);
} 

TEST(SwittzleTest, vec4_bb) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec2 v2 = v1.bb;
EXPECT_EQ(float(v2.x),3.000000);
EXPECT_EQ(float(v2.y),3.000000);
} 

TEST(SwittzleTest, vec4_ba) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec2 v2 = v1.ba;
EXPECT_EQ(float(v2.x),3.000000);
EXPECT_EQ(float(v2.y),4.000000);
} 

TEST(SwittzleTest, vec4_ar) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec2 v2 = v1.ar;
EXPECT_EQ(float(v2.x),4.000000);
EXPECT_EQ(float(v2.y),1.000000);
} 

TEST(SwittzleTest, vec4_ag) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec2 v2 = v1.ag;
EXPECT_EQ(float(v2.x),4.000000);
EXPECT_EQ(float(v2.y),2.000000);
} 

TEST(SwittzleTest, vec4_ab) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec2 v2 = v1.ab;
EXPECT_EQ(float(v2.x),4.000000);
EXPECT_EQ(float(v2.y),3.000000);
} 

TEST(SwittzleTest, vec4_aa) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec2 v2 = v1.aa;
EXPECT_EQ(float(v2.x),4.000000);
EXPECT_EQ(float(v2.y),4.000000);
} 

TEST(SwittzleTest, vec4_rrr) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec3 v2 = v1.rrr;
EXPECT_EQ(float(v2.x),1.000000);
EXPECT_EQ(float(v2.y),1.000000);
EXPECT_EQ(float(v2.z),1.000000);
} 

TEST(SwittzleTest, vec4_rrg) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec3 v2 = v1.rrg;
EXPECT_EQ(float(v2.x),1.000000);
EXPECT_EQ(float(v2.y),1.000000);
EXPECT_EQ(float(v2.z),2.000000);
} 

TEST(SwittzleTest, vec4_rrb) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec3 v2 = v1.rrb;
EXPECT_EQ(float(v2.x),1.000000);
EXPECT_EQ(float(v2.y),1.000000);
EXPECT_EQ(float(v2.z),3.000000);
} 

TEST(SwittzleTest, vec4_rra) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec3 v2 = v1.rra;
EXPECT_EQ(float(v2.x),1.000000);
EXPECT_EQ(float(v2.y),1.000000);
EXPECT_EQ(float(v2.z),4.000000);
} 

TEST(SwittzleTest, vec4_rgr) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec3 v2 = v1.rgr;
EXPECT_EQ(float(v2.x),1.000000);
EXPECT_EQ(float(v2.y),2.000000);
EXPECT_EQ(float(v2.z),1.000000);
} 

TEST(SwittzleTest, vec4_rgg) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec3 v2 = v1.rgg;
EXPECT_EQ(float(v2.x),1.000000);
EXPECT_EQ(float(v2.y),2.000000);
EXPECT_EQ(float(v2.z),2.000000);
} 

TEST(SwittzleTest, vec4_rgb) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec3 v2 = v1.rgb;
EXPECT_EQ(float(v2.x),1.000000);
EXPECT_EQ(float(v2.y),2.000000);
EXPECT_EQ(float(v2.z),3.000000);
} 

TEST(SwittzleTest, vec4_rga) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec3 v2 = v1.rga;
EXPECT_EQ(float(v2.x),1.000000);
EXPECT_EQ(float(v2.y),2.000000);
EXPECT_EQ(float(v2.z),4.000000);
} 

TEST(SwittzleTest, vec4_rbr) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec3 v2 = v1.rbr;
EXPECT_EQ(float(v2.x),1.000000);
EXPECT_EQ(float(v2.y),3.000000);
EXPECT_EQ(float(v2.z),1.000000);
} 

TEST(SwittzleTest, vec4_rbg) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec3 v2 = v1.rbg;
EXPECT_EQ(float(v2.x),1.000000);
EXPECT_EQ(float(v2.y),3.000000);
EXPECT_EQ(float(v2.z),2.000000);
} 

TEST(SwittzleTest, vec4_rbb) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec3 v2 = v1.rbb;
EXPECT_EQ(float(v2.x),1.000000);
EXPECT_EQ(float(v2.y),3.000000);
EXPECT_EQ(float(v2.z),3.000000);
} 

TEST(SwittzleTest, vec4_rba) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec3 v2 = v1.rba;
EXPECT_EQ(float(v2.x),1.000000);
EXPECT_EQ(float(v2.y),3.000000);
EXPECT_EQ(float(v2.z),4.000000);
} 

TEST(SwittzleTest, vec4_rar) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec3 v2 = v1.rar;
EXPECT_EQ(float(v2.x),1.000000);
EXPECT_EQ(float(v2.y),4.000000);
EXPECT_EQ(float(v2.z),1.000000);
} 

TEST(SwittzleTest, vec4_rag) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec3 v2 = v1.rag;
EXPECT_EQ(float(v2.x),1.000000);
EXPECT_EQ(float(v2.y),4.000000);
EXPECT_EQ(float(v2.z),2.000000);
} 

TEST(SwittzleTest, vec4_rab) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec3 v2 = v1.rab;
EXPECT_EQ(float(v2.x),1.000000);
EXPECT_EQ(float(v2.y),4.000000);
EXPECT_EQ(float(v2.z),3.000000);
} 

TEST(SwittzleTest, vec4_raa) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec3 v2 = v1.raa;
EXPECT_EQ(float(v2.x),1.000000);
EXPECT_EQ(float(v2.y),4.000000);
EXPECT_EQ(float(v2.z),4.000000);
} 

TEST(SwittzleTest, vec4_grr) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec3 v2 = v1.grr;
EXPECT_EQ(float(v2.x),2.000000);
EXPECT_EQ(float(v2.y),1.000000);
EXPECT_EQ(float(v2.z),1.000000);
} 

TEST(SwittzleTest, vec4_grg) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec3 v2 = v1.grg;
EXPECT_EQ(float(v2.x),2.000000);
EXPECT_EQ(float(v2.y),1.000000);
EXPECT_EQ(float(v2.z),2.000000);
} 

TEST(SwittzleTest, vec4_grb) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec3 v2 = v1.grb;
EXPECT_EQ(float(v2.x),2.000000);
EXPECT_EQ(float(v2.y),1.000000);
EXPECT_EQ(float(v2.z),3.000000);
} 

TEST(SwittzleTest, vec4_gra) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec3 v2 = v1.gra;
EXPECT_EQ(float(v2.x),2.000000);
EXPECT_EQ(float(v2.y),1.000000);
EXPECT_EQ(float(v2.z),4.000000);
} 

TEST(SwittzleTest, vec4_ggr) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec3 v2 = v1.ggr;
EXPECT_EQ(float(v2.x),2.000000);
EXPECT_EQ(float(v2.y),2.000000);
EXPECT_EQ(float(v2.z),1.000000);
} 

TEST(SwittzleTest, vec4_ggg) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec3 v2 = v1.ggg;
EXPECT_EQ(float(v2.x),2.000000);
EXPECT_EQ(float(v2.y),2.000000);
EXPECT_EQ(float(v2.z),2.000000);
} 

TEST(SwittzleTest, vec4_ggb) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec3 v2 = v1.ggb;
EXPECT_EQ(float(v2.x),2.000000);
EXPECT_EQ(float(v2.y),2.000000);
EXPECT_EQ(float(v2.z),3.000000);
} 

TEST(SwittzleTest, vec4_gga) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec3 v2 = v1.gga;
EXPECT_EQ(float(v2.x),2.000000);
EXPECT_EQ(float(v2.y),2.000000);
EXPECT_EQ(float(v2.z),4.000000);
} 

TEST(SwittzleTest, vec4_gbr) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec3 v2 = v1.gbr;
EXPECT_EQ(float(v2.x),2.000000);
EXPECT_EQ(float(v2.y),3.000000);
EXPECT_EQ(float(v2.z),1.000000);
} 

TEST(SwittzleTest, vec4_gbg) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec3 v2 = v1.gbg;
EXPECT_EQ(float(v2.x),2.000000);
EXPECT_EQ(float(v2.y),3.000000);
EXPECT_EQ(float(v2.z),2.000000);
} 

TEST(SwittzleTest, vec4_gbb) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec3 v2 = v1.gbb;
EXPECT_EQ(float(v2.x),2.000000);
EXPECT_EQ(float(v2.y),3.000000);
EXPECT_EQ(float(v2.z),3.000000);
} 

TEST(SwittzleTest, vec4_gba) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec3 v2 = v1.gba;
EXPECT_EQ(float(v2.x),2.000000);
EXPECT_EQ(float(v2.y),3.000000);
EXPECT_EQ(float(v2.z),4.000000);
} 

TEST(SwittzleTest, vec4_gar) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec3 v2 = v1.gar;
EXPECT_EQ(float(v2.x),2.000000);
EXPECT_EQ(float(v2.y),4.000000);
EXPECT_EQ(float(v2.z),1.000000);
} 

TEST(SwittzleTest, vec4_gag) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec3 v2 = v1.gag;
EXPECT_EQ(float(v2.x),2.000000);
EXPECT_EQ(float(v2.y),4.000000);
EXPECT_EQ(float(v2.z),2.000000);
} 

TEST(SwittzleTest, vec4_gab) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec3 v2 = v1.gab;
EXPECT_EQ(float(v2.x),2.000000);
EXPECT_EQ(float(v2.y),4.000000);
EXPECT_EQ(float(v2.z),3.000000);
} 

TEST(SwittzleTest, vec4_gaa) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec3 v2 = v1.gaa;
EXPECT_EQ(float(v2.x),2.000000);
EXPECT_EQ(float(v2.y),4.000000);
EXPECT_EQ(float(v2.z),4.000000);
} 

TEST(SwittzleTest, vec4_brr) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec3 v2 = v1.brr;
EXPECT_EQ(float(v2.x),3.000000);
EXPECT_EQ(float(v2.y),1.000000);
EXPECT_EQ(float(v2.z),1.000000);
} 

TEST(SwittzleTest, vec4_brg) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec3 v2 = v1.brg;
EXPECT_EQ(float(v2.x),3.000000);
EXPECT_EQ(float(v2.y),1.000000);
EXPECT_EQ(float(v2.z),2.000000);
} 

TEST(SwittzleTest, vec4_brb) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec3 v2 = v1.brb;
EXPECT_EQ(float(v2.x),3.000000);
EXPECT_EQ(float(v2.y),1.000000);
EXPECT_EQ(float(v2.z),3.000000);
} 

TEST(SwittzleTest, vec4_bra) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec3 v2 = v1.bra;
EXPECT_EQ(float(v2.x),3.000000);
EXPECT_EQ(float(v2.y),1.000000);
EXPECT_EQ(float(v2.z),4.000000);
} 

TEST(SwittzleTest, vec4_bgr) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec3 v2 = v1.bgr;
EXPECT_EQ(float(v2.x),3.000000);
EXPECT_EQ(float(v2.y),2.000000);
EXPECT_EQ(float(v2.z),1.000000);
} 

TEST(SwittzleTest, vec4_bgg) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec3 v2 = v1.bgg;
EXPECT_EQ(float(v2.x),3.000000);
EXPECT_EQ(float(v2.y),2.000000);
EXPECT_EQ(float(v2.z),2.000000);
} 

TEST(SwittzleTest, vec4_bgb) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec3 v2 = v1.bgb;
EXPECT_EQ(float(v2.x),3.000000);
EXPECT_EQ(float(v2.y),2.000000);
EXPECT_EQ(float(v2.z),3.000000);
} 

TEST(SwittzleTest, vec4_bga) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec3 v2 = v1.bga;
EXPECT_EQ(float(v2.x),3.000000);
EXPECT_EQ(float(v2.y),2.000000);
EXPECT_EQ(float(v2.z),4.000000);
} 

TEST(SwittzleTest, vec4_bbr) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec3 v2 = v1.bbr;
EXPECT_EQ(float(v2.x),3.000000);
EXPECT_EQ(float(v2.y),3.000000);
EXPECT_EQ(float(v2.z),1.000000);
} 

TEST(SwittzleTest, vec4_bbg) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec3 v2 = v1.bbg;
EXPECT_EQ(float(v2.x),3.000000);
EXPECT_EQ(float(v2.y),3.000000);
EXPECT_EQ(float(v2.z),2.000000);
} 

TEST(SwittzleTest, vec4_bbb) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec3 v2 = v1.bbb;
EXPECT_EQ(float(v2.x),3.000000);
EXPECT_EQ(float(v2.y),3.000000);
EXPECT_EQ(float(v2.z),3.000000);
} 

TEST(SwittzleTest, vec4_bba) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec3 v2 = v1.bba;
EXPECT_EQ(float(v2.x),3.000000);
EXPECT_EQ(float(v2.y),3.000000);
EXPECT_EQ(float(v2.z),4.000000);
} 

TEST(SwittzleTest, vec4_bar) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec3 v2 = v1.bar;
EXPECT_EQ(float(v2.x),3.000000);
EXPECT_EQ(float(v2.y),4.000000);
EXPECT_EQ(float(v2.z),1.000000);
} 

TEST(SwittzleTest, vec4_bag) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec3 v2 = v1.bag;
EXPECT_EQ(float(v2.x),3.000000);
EXPECT_EQ(float(v2.y),4.000000);
EXPECT_EQ(float(v2.z),2.000000);
} 

TEST(SwittzleTest, vec4_bab) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec3 v2 = v1.bab;
EXPECT_EQ(float(v2.x),3.000000);
EXPECT_EQ(float(v2.y),4.000000);
EXPECT_EQ(float(v2.z),3.000000);
} 

TEST(SwittzleTest, vec4_baa) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec3 v2 = v1.baa;
EXPECT_EQ(float(v2.x),3.000000);
EXPECT_EQ(float(v2.y),4.000000);
EXPECT_EQ(float(v2.z),4.000000);
} 

TEST(SwittzleTest, vec4_arr) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec3 v2 = v1.arr;
EXPECT_EQ(float(v2.x),4.000000);
EXPECT_EQ(float(v2.y),1.000000);
EXPECT_EQ(float(v2.z),1.000000);
} 

TEST(SwittzleTest, vec4_arg) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec3 v2 = v1.arg;
EXPECT_EQ(float(v2.x),4.000000);
EXPECT_EQ(float(v2.y),1.000000);
EXPECT_EQ(float(v2.z),2.000000);
} 

TEST(SwittzleTest, vec4_arb) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec3 v2 = v1.arb;
EXPECT_EQ(float(v2.x),4.000000);
EXPECT_EQ(float(v2.y),1.000000);
EXPECT_EQ(float(v2.z),3.000000);
} 

TEST(SwittzleTest, vec4_ara) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec3 v2 = v1.ara;
EXPECT_EQ(float(v2.x),4.000000);
EXPECT_EQ(float(v2.y),1.000000);
EXPECT_EQ(float(v2.z),4.000000);
} 

TEST(SwittzleTest, vec4_agr) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec3 v2 = v1.agr;
EXPECT_EQ(float(v2.x),4.000000);
EXPECT_EQ(float(v2.y),2.000000);
EXPECT_EQ(float(v2.z),1.000000);
} 

TEST(SwittzleTest, vec4_agg) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec3 v2 = v1.agg;
EXPECT_EQ(float(v2.x),4.000000);
EXPECT_EQ(float(v2.y),2.000000);
EXPECT_EQ(float(v2.z),2.000000);
} 

TEST(SwittzleTest, vec4_agb) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec3 v2 = v1.agb;
EXPECT_EQ(float(v2.x),4.000000);
EXPECT_EQ(float(v2.y),2.000000);
EXPECT_EQ(float(v2.z),3.000000);
} 

TEST(SwittzleTest, vec4_aga) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec3 v2 = v1.aga;
EXPECT_EQ(float(v2.x),4.000000);
EXPECT_EQ(float(v2.y),2.000000);
EXPECT_EQ(float(v2.z),4.000000);
} 

TEST(SwittzleTest, vec4_abr) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec3 v2 = v1.abr;
EXPECT_EQ(float(v2.x),4.000000);
EXPECT_EQ(float(v2.y),3.000000);
EXPECT_EQ(float(v2.z),1.000000);
} 

TEST(SwittzleTest, vec4_abg) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec3 v2 = v1.abg;
EXPECT_EQ(float(v2.x),4.000000);
EXPECT_EQ(float(v2.y),3.000000);
EXPECT_EQ(float(v2.z),2.000000);
} 

TEST(SwittzleTest, vec4_abb) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec3 v2 = v1.abb;
EXPECT_EQ(float(v2.x),4.000000);
EXPECT_EQ(float(v2.y),3.000000);
EXPECT_EQ(float(v2.z),3.000000);
} 

TEST(SwittzleTest, vec4_aba) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec3 v2 = v1.aba;
EXPECT_EQ(float(v2.x),4.000000);
EXPECT_EQ(float(v2.y),3.000000);
EXPECT_EQ(float(v2.z),4.000000);
} 

TEST(SwittzleTest, vec4_aar) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec3 v2 = v1.aar;
EXPECT_EQ(float(v2.x),4.000000);
EXPECT_EQ(float(v2.y),4.000000);
EXPECT_EQ(float(v2.z),1.000000);
} 

TEST(SwittzleTest, vec4_aag) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec3 v2 = v1.aag;
EXPECT_EQ(float(v2.x),4.000000);
EXPECT_EQ(float(v2.y),4.000000);
EXPECT_EQ(float(v2.z),2.000000);
} 

TEST(SwittzleTest, vec4_aab) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec3 v2 = v1.aab;
EXPECT_EQ(float(v2.x),4.000000);
EXPECT_EQ(float(v2.y),4.000000);
EXPECT_EQ(float(v2.z),3.000000);
} 

TEST(SwittzleTest, vec4_aaa) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec3 v2 = v1.aaa;
EXPECT_EQ(float(v2.x),4.000000);
EXPECT_EQ(float(v2.y),4.000000);
EXPECT_EQ(float(v2.z),4.000000);
} 

TEST(SwittzleTest, vec4_rrrr) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.rrrr;
EXPECT_EQ(float(v2.x),1.000000);
EXPECT_EQ(float(v2.y),1.000000);
EXPECT_EQ(float(v2.z),1.000000);
EXPECT_EQ(float(v2.w),1.000000);
} 

TEST(SwittzleTest, vec4_rrrg) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.rrrg;
EXPECT_EQ(float(v2.x),1.000000);
EXPECT_EQ(float(v2.y),1.000000);
EXPECT_EQ(float(v2.z),1.000000);
EXPECT_EQ(float(v2.w),2.000000);
} 

TEST(SwittzleTest, vec4_rrrb) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.rrrb;
EXPECT_EQ(float(v2.x),1.000000);
EXPECT_EQ(float(v2.y),1.000000);
EXPECT_EQ(float(v2.z),1.000000);
EXPECT_EQ(float(v2.w),3.000000);
} 

TEST(SwittzleTest, vec4_rrra) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.rrra;
EXPECT_EQ(float(v2.x),1.000000);
EXPECT_EQ(float(v2.y),1.000000);
EXPECT_EQ(float(v2.z),1.000000);
EXPECT_EQ(float(v2.w),4.000000);
} 

TEST(SwittzleTest, vec4_rrgr) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.rrgr;
EXPECT_EQ(float(v2.x),1.000000);
EXPECT_EQ(float(v2.y),1.000000);
EXPECT_EQ(float(v2.z),2.000000);
EXPECT_EQ(float(v2.w),1.000000);
} 

TEST(SwittzleTest, vec4_rrgg) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.rrgg;
EXPECT_EQ(float(v2.x),1.000000);
EXPECT_EQ(float(v2.y),1.000000);
EXPECT_EQ(float(v2.z),2.000000);
EXPECT_EQ(float(v2.w),2.000000);
} 

TEST(SwittzleTest, vec4_rrgb) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.rrgb;
EXPECT_EQ(float(v2.x),1.000000);
EXPECT_EQ(float(v2.y),1.000000);
EXPECT_EQ(float(v2.z),2.000000);
EXPECT_EQ(float(v2.w),3.000000);
} 

TEST(SwittzleTest, vec4_rrga) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.rrga;
EXPECT_EQ(float(v2.x),1.000000);
EXPECT_EQ(float(v2.y),1.000000);
EXPECT_EQ(float(v2.z),2.000000);
EXPECT_EQ(float(v2.w),4.000000);
} 

TEST(SwittzleTest, vec4_rrbr) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.rrbr;
EXPECT_EQ(float(v2.x),1.000000);
EXPECT_EQ(float(v2.y),1.000000);
EXPECT_EQ(float(v2.z),3.000000);
EXPECT_EQ(float(v2.w),1.000000);
} 

TEST(SwittzleTest, vec4_rrbg) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.rrbg;
EXPECT_EQ(float(v2.x),1.000000);
EXPECT_EQ(float(v2.y),1.000000);
EXPECT_EQ(float(v2.z),3.000000);
EXPECT_EQ(float(v2.w),2.000000);
} 

TEST(SwittzleTest, vec4_rrbb) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.rrbb;
EXPECT_EQ(float(v2.x),1.000000);
EXPECT_EQ(float(v2.y),1.000000);
EXPECT_EQ(float(v2.z),3.000000);
EXPECT_EQ(float(v2.w),3.000000);
} 

TEST(SwittzleTest, vec4_rrba) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.rrba;
EXPECT_EQ(float(v2.x),1.000000);
EXPECT_EQ(float(v2.y),1.000000);
EXPECT_EQ(float(v2.z),3.000000);
EXPECT_EQ(float(v2.w),4.000000);
} 

TEST(SwittzleTest, vec4_rrar) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.rrar;
EXPECT_EQ(float(v2.x),1.000000);
EXPECT_EQ(float(v2.y),1.000000);
EXPECT_EQ(float(v2.z),4.000000);
EXPECT_EQ(float(v2.w),1.000000);
} 

TEST(SwittzleTest, vec4_rrag) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.rrag;
EXPECT_EQ(float(v2.x),1.000000);
EXPECT_EQ(float(v2.y),1.000000);
EXPECT_EQ(float(v2.z),4.000000);
EXPECT_EQ(float(v2.w),2.000000);
} 

TEST(SwittzleTest, vec4_rrab) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.rrab;
EXPECT_EQ(float(v2.x),1.000000);
EXPECT_EQ(float(v2.y),1.000000);
EXPECT_EQ(float(v2.z),4.000000);
EXPECT_EQ(float(v2.w),3.000000);
} 

TEST(SwittzleTest, vec4_rraa) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.rraa;
EXPECT_EQ(float(v2.x),1.000000);
EXPECT_EQ(float(v2.y),1.000000);
EXPECT_EQ(float(v2.z),4.000000);
EXPECT_EQ(float(v2.w),4.000000);
} 

TEST(SwittzleTest, vec4_rgrr) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.rgrr;
EXPECT_EQ(float(v2.x),1.000000);
EXPECT_EQ(float(v2.y),2.000000);
EXPECT_EQ(float(v2.z),1.000000);
EXPECT_EQ(float(v2.w),1.000000);
} 

TEST(SwittzleTest, vec4_rgrg) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.rgrg;
EXPECT_EQ(float(v2.x),1.000000);
EXPECT_EQ(float(v2.y),2.000000);
EXPECT_EQ(float(v2.z),1.000000);
EXPECT_EQ(float(v2.w),2.000000);
} 

TEST(SwittzleTest, vec4_rgrb) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.rgrb;
EXPECT_EQ(float(v2.x),1.000000);
EXPECT_EQ(float(v2.y),2.000000);
EXPECT_EQ(float(v2.z),1.000000);
EXPECT_EQ(float(v2.w),3.000000);
} 

TEST(SwittzleTest, vec4_rgra) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.rgra;
EXPECT_EQ(float(v2.x),1.000000);
EXPECT_EQ(float(v2.y),2.000000);
EXPECT_EQ(float(v2.z),1.000000);
EXPECT_EQ(float(v2.w),4.000000);
} 

TEST(SwittzleTest, vec4_rggr) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.rggr;
EXPECT_EQ(float(v2.x),1.000000);
EXPECT_EQ(float(v2.y),2.000000);
EXPECT_EQ(float(v2.z),2.000000);
EXPECT_EQ(float(v2.w),1.000000);
} 

TEST(SwittzleTest, vec4_rggg) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.rggg;
EXPECT_EQ(float(v2.x),1.000000);
EXPECT_EQ(float(v2.y),2.000000);
EXPECT_EQ(float(v2.z),2.000000);
EXPECT_EQ(float(v2.w),2.000000);
} 

TEST(SwittzleTest, vec4_rggb) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.rggb;
EXPECT_EQ(float(v2.x),1.000000);
EXPECT_EQ(float(v2.y),2.000000);
EXPECT_EQ(float(v2.z),2.000000);
EXPECT_EQ(float(v2.w),3.000000);
} 

TEST(SwittzleTest, vec4_rgga) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.rgga;
EXPECT_EQ(float(v2.x),1.000000);
EXPECT_EQ(float(v2.y),2.000000);
EXPECT_EQ(float(v2.z),2.000000);
EXPECT_EQ(float(v2.w),4.000000);
} 

TEST(SwittzleTest, vec4_rgbr) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.rgbr;
EXPECT_EQ(float(v2.x),1.000000);
EXPECT_EQ(float(v2.y),2.000000);
EXPECT_EQ(float(v2.z),3.000000);
EXPECT_EQ(float(v2.w),1.000000);
} 

TEST(SwittzleTest, vec4_rgbg) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.rgbg;
EXPECT_EQ(float(v2.x),1.000000);
EXPECT_EQ(float(v2.y),2.000000);
EXPECT_EQ(float(v2.z),3.000000);
EXPECT_EQ(float(v2.w),2.000000);
} 

TEST(SwittzleTest, vec4_rgbb) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.rgbb;
EXPECT_EQ(float(v2.x),1.000000);
EXPECT_EQ(float(v2.y),2.000000);
EXPECT_EQ(float(v2.z),3.000000);
EXPECT_EQ(float(v2.w),3.000000);
} 

TEST(SwittzleTest, vec4_rgba) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.rgba;
EXPECT_EQ(float(v2.x),1.000000);
EXPECT_EQ(float(v2.y),2.000000);
EXPECT_EQ(float(v2.z),3.000000);
EXPECT_EQ(float(v2.w),4.000000);
} 

TEST(SwittzleTest, vec4_rgar) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.rgar;
EXPECT_EQ(float(v2.x),1.000000);
EXPECT_EQ(float(v2.y),2.000000);
EXPECT_EQ(float(v2.z),4.000000);
EXPECT_EQ(float(v2.w),1.000000);
} 

TEST(SwittzleTest, vec4_rgag) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.rgag;
EXPECT_EQ(float(v2.x),1.000000);
EXPECT_EQ(float(v2.y),2.000000);
EXPECT_EQ(float(v2.z),4.000000);
EXPECT_EQ(float(v2.w),2.000000);
} 

TEST(SwittzleTest, vec4_rgab) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.rgab;
EXPECT_EQ(float(v2.x),1.000000);
EXPECT_EQ(float(v2.y),2.000000);
EXPECT_EQ(float(v2.z),4.000000);
EXPECT_EQ(float(v2.w),3.000000);
} 

TEST(SwittzleTest, vec4_rgaa) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.rgaa;
EXPECT_EQ(float(v2.x),1.000000);
EXPECT_EQ(float(v2.y),2.000000);
EXPECT_EQ(float(v2.z),4.000000);
EXPECT_EQ(float(v2.w),4.000000);
} 

TEST(SwittzleTest, vec4_rbrr) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.rbrr;
EXPECT_EQ(float(v2.x),1.000000);
EXPECT_EQ(float(v2.y),3.000000);
EXPECT_EQ(float(v2.z),1.000000);
EXPECT_EQ(float(v2.w),1.000000);
} 

TEST(SwittzleTest, vec4_rbrg) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.rbrg;
EXPECT_EQ(float(v2.x),1.000000);
EXPECT_EQ(float(v2.y),3.000000);
EXPECT_EQ(float(v2.z),1.000000);
EXPECT_EQ(float(v2.w),2.000000);
} 

TEST(SwittzleTest, vec4_rbrb) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.rbrb;
EXPECT_EQ(float(v2.x),1.000000);
EXPECT_EQ(float(v2.y),3.000000);
EXPECT_EQ(float(v2.z),1.000000);
EXPECT_EQ(float(v2.w),3.000000);
} 

TEST(SwittzleTest, vec4_rbra) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.rbra;
EXPECT_EQ(float(v2.x),1.000000);
EXPECT_EQ(float(v2.y),3.000000);
EXPECT_EQ(float(v2.z),1.000000);
EXPECT_EQ(float(v2.w),4.000000);
} 

TEST(SwittzleTest, vec4_rbgr) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.rbgr;
EXPECT_EQ(float(v2.x),1.000000);
EXPECT_EQ(float(v2.y),3.000000);
EXPECT_EQ(float(v2.z),2.000000);
EXPECT_EQ(float(v2.w),1.000000);
} 

TEST(SwittzleTest, vec4_rbgg) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.rbgg;
EXPECT_EQ(float(v2.x),1.000000);
EXPECT_EQ(float(v2.y),3.000000);
EXPECT_EQ(float(v2.z),2.000000);
EXPECT_EQ(float(v2.w),2.000000);
} 

TEST(SwittzleTest, vec4_rbgb) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.rbgb;
EXPECT_EQ(float(v2.x),1.000000);
EXPECT_EQ(float(v2.y),3.000000);
EXPECT_EQ(float(v2.z),2.000000);
EXPECT_EQ(float(v2.w),3.000000);
} 

TEST(SwittzleTest, vec4_rbga) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.rbga;
EXPECT_EQ(float(v2.x),1.000000);
EXPECT_EQ(float(v2.y),3.000000);
EXPECT_EQ(float(v2.z),2.000000);
EXPECT_EQ(float(v2.w),4.000000);
} 

TEST(SwittzleTest, vec4_rbbr) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.rbbr;
EXPECT_EQ(float(v2.x),1.000000);
EXPECT_EQ(float(v2.y),3.000000);
EXPECT_EQ(float(v2.z),3.000000);
EXPECT_EQ(float(v2.w),1.000000);
} 

TEST(SwittzleTest, vec4_rbbg) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.rbbg;
EXPECT_EQ(float(v2.x),1.000000);
EXPECT_EQ(float(v2.y),3.000000);
EXPECT_EQ(float(v2.z),3.000000);
EXPECT_EQ(float(v2.w),2.000000);
} 

TEST(SwittzleTest, vec4_rbbb) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.rbbb;
EXPECT_EQ(float(v2.x),1.000000);
EXPECT_EQ(float(v2.y),3.000000);
EXPECT_EQ(float(v2.z),3.000000);
EXPECT_EQ(float(v2.w),3.000000);
} 

TEST(SwittzleTest, vec4_rbba) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.rbba;
EXPECT_EQ(float(v2.x),1.000000);
EXPECT_EQ(float(v2.y),3.000000);
EXPECT_EQ(float(v2.z),3.000000);
EXPECT_EQ(float(v2.w),4.000000);
} 

TEST(SwittzleTest, vec4_rbar) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.rbar;
EXPECT_EQ(float(v2.x),1.000000);
EXPECT_EQ(float(v2.y),3.000000);
EXPECT_EQ(float(v2.z),4.000000);
EXPECT_EQ(float(v2.w),1.000000);
} 

TEST(SwittzleTest, vec4_rbag) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.rbag;
EXPECT_EQ(float(v2.x),1.000000);
EXPECT_EQ(float(v2.y),3.000000);
EXPECT_EQ(float(v2.z),4.000000);
EXPECT_EQ(float(v2.w),2.000000);
} 

TEST(SwittzleTest, vec4_rbab) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.rbab;
EXPECT_EQ(float(v2.x),1.000000);
EXPECT_EQ(float(v2.y),3.000000);
EXPECT_EQ(float(v2.z),4.000000);
EXPECT_EQ(float(v2.w),3.000000);
} 

TEST(SwittzleTest, vec4_rbaa) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.rbaa;
EXPECT_EQ(float(v2.x),1.000000);
EXPECT_EQ(float(v2.y),3.000000);
EXPECT_EQ(float(v2.z),4.000000);
EXPECT_EQ(float(v2.w),4.000000);
} 

TEST(SwittzleTest, vec4_rarr) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.rarr;
EXPECT_EQ(float(v2.x),1.000000);
EXPECT_EQ(float(v2.y),4.000000);
EXPECT_EQ(float(v2.z),1.000000);
EXPECT_EQ(float(v2.w),1.000000);
} 

TEST(SwittzleTest, vec4_rarg) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.rarg;
EXPECT_EQ(float(v2.x),1.000000);
EXPECT_EQ(float(v2.y),4.000000);
EXPECT_EQ(float(v2.z),1.000000);
EXPECT_EQ(float(v2.w),2.000000);
} 

TEST(SwittzleTest, vec4_rarb) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.rarb;
EXPECT_EQ(float(v2.x),1.000000);
EXPECT_EQ(float(v2.y),4.000000);
EXPECT_EQ(float(v2.z),1.000000);
EXPECT_EQ(float(v2.w),3.000000);
} 

TEST(SwittzleTest, vec4_rara) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.rara;
EXPECT_EQ(float(v2.x),1.000000);
EXPECT_EQ(float(v2.y),4.000000);
EXPECT_EQ(float(v2.z),1.000000);
EXPECT_EQ(float(v2.w),4.000000);
} 

TEST(SwittzleTest, vec4_ragr) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.ragr;
EXPECT_EQ(float(v2.x),1.000000);
EXPECT_EQ(float(v2.y),4.000000);
EXPECT_EQ(float(v2.z),2.000000);
EXPECT_EQ(float(v2.w),1.000000);
} 

TEST(SwittzleTest, vec4_ragg) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.ragg;
EXPECT_EQ(float(v2.x),1.000000);
EXPECT_EQ(float(v2.y),4.000000);
EXPECT_EQ(float(v2.z),2.000000);
EXPECT_EQ(float(v2.w),2.000000);
} 

TEST(SwittzleTest, vec4_ragb) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.ragb;
EXPECT_EQ(float(v2.x),1.000000);
EXPECT_EQ(float(v2.y),4.000000);
EXPECT_EQ(float(v2.z),2.000000);
EXPECT_EQ(float(v2.w),3.000000);
} 

TEST(SwittzleTest, vec4_raga) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.raga;
EXPECT_EQ(float(v2.x),1.000000);
EXPECT_EQ(float(v2.y),4.000000);
EXPECT_EQ(float(v2.z),2.000000);
EXPECT_EQ(float(v2.w),4.000000);
} 

TEST(SwittzleTest, vec4_rabr) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.rabr;
EXPECT_EQ(float(v2.x),1.000000);
EXPECT_EQ(float(v2.y),4.000000);
EXPECT_EQ(float(v2.z),3.000000);
EXPECT_EQ(float(v2.w),1.000000);
} 

TEST(SwittzleTest, vec4_rabg) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.rabg;
EXPECT_EQ(float(v2.x),1.000000);
EXPECT_EQ(float(v2.y),4.000000);
EXPECT_EQ(float(v2.z),3.000000);
EXPECT_EQ(float(v2.w),2.000000);
} 

TEST(SwittzleTest, vec4_rabb) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.rabb;
EXPECT_EQ(float(v2.x),1.000000);
EXPECT_EQ(float(v2.y),4.000000);
EXPECT_EQ(float(v2.z),3.000000);
EXPECT_EQ(float(v2.w),3.000000);
} 

TEST(SwittzleTest, vec4_raba) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.raba;
EXPECT_EQ(float(v2.x),1.000000);
EXPECT_EQ(float(v2.y),4.000000);
EXPECT_EQ(float(v2.z),3.000000);
EXPECT_EQ(float(v2.w),4.000000);
} 

TEST(SwittzleTest, vec4_raar) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.raar;
EXPECT_EQ(float(v2.x),1.000000);
EXPECT_EQ(float(v2.y),4.000000);
EXPECT_EQ(float(v2.z),4.000000);
EXPECT_EQ(float(v2.w),1.000000);
} 

TEST(SwittzleTest, vec4_raag) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.raag;
EXPECT_EQ(float(v2.x),1.000000);
EXPECT_EQ(float(v2.y),4.000000);
EXPECT_EQ(float(v2.z),4.000000);
EXPECT_EQ(float(v2.w),2.000000);
} 

TEST(SwittzleTest, vec4_raab) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.raab;
EXPECT_EQ(float(v2.x),1.000000);
EXPECT_EQ(float(v2.y),4.000000);
EXPECT_EQ(float(v2.z),4.000000);
EXPECT_EQ(float(v2.w),3.000000);
} 

TEST(SwittzleTest, vec4_raaa) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.raaa;
EXPECT_EQ(float(v2.x),1.000000);
EXPECT_EQ(float(v2.y),4.000000);
EXPECT_EQ(float(v2.z),4.000000);
EXPECT_EQ(float(v2.w),4.000000);
} 

TEST(SwittzleTest, vec4_grrr) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.grrr;
EXPECT_EQ(float(v2.x),2.000000);
EXPECT_EQ(float(v2.y),1.000000);
EXPECT_EQ(float(v2.z),1.000000);
EXPECT_EQ(float(v2.w),1.000000);
} 

TEST(SwittzleTest, vec4_grrg) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.grrg;
EXPECT_EQ(float(v2.x),2.000000);
EXPECT_EQ(float(v2.y),1.000000);
EXPECT_EQ(float(v2.z),1.000000);
EXPECT_EQ(float(v2.w),2.000000);
} 

TEST(SwittzleTest, vec4_grrb) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.grrb;
EXPECT_EQ(float(v2.x),2.000000);
EXPECT_EQ(float(v2.y),1.000000);
EXPECT_EQ(float(v2.z),1.000000);
EXPECT_EQ(float(v2.w),3.000000);
} 

TEST(SwittzleTest, vec4_grra) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.grra;
EXPECT_EQ(float(v2.x),2.000000);
EXPECT_EQ(float(v2.y),1.000000);
EXPECT_EQ(float(v2.z),1.000000);
EXPECT_EQ(float(v2.w),4.000000);
} 

TEST(SwittzleTest, vec4_grgr) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.grgr;
EXPECT_EQ(float(v2.x),2.000000);
EXPECT_EQ(float(v2.y),1.000000);
EXPECT_EQ(float(v2.z),2.000000);
EXPECT_EQ(float(v2.w),1.000000);
} 

TEST(SwittzleTest, vec4_grgg) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.grgg;
EXPECT_EQ(float(v2.x),2.000000);
EXPECT_EQ(float(v2.y),1.000000);
EXPECT_EQ(float(v2.z),2.000000);
EXPECT_EQ(float(v2.w),2.000000);
} 

TEST(SwittzleTest, vec4_grgb) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.grgb;
EXPECT_EQ(float(v2.x),2.000000);
EXPECT_EQ(float(v2.y),1.000000);
EXPECT_EQ(float(v2.z),2.000000);
EXPECT_EQ(float(v2.w),3.000000);
} 

TEST(SwittzleTest, vec4_grga) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.grga;
EXPECT_EQ(float(v2.x),2.000000);
EXPECT_EQ(float(v2.y),1.000000);
EXPECT_EQ(float(v2.z),2.000000);
EXPECT_EQ(float(v2.w),4.000000);
} 

TEST(SwittzleTest, vec4_grbr) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.grbr;
EXPECT_EQ(float(v2.x),2.000000);
EXPECT_EQ(float(v2.y),1.000000);
EXPECT_EQ(float(v2.z),3.000000);
EXPECT_EQ(float(v2.w),1.000000);
} 

TEST(SwittzleTest, vec4_grbg) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.grbg;
EXPECT_EQ(float(v2.x),2.000000);
EXPECT_EQ(float(v2.y),1.000000);
EXPECT_EQ(float(v2.z),3.000000);
EXPECT_EQ(float(v2.w),2.000000);
} 

TEST(SwittzleTest, vec4_grbb) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.grbb;
EXPECT_EQ(float(v2.x),2.000000);
EXPECT_EQ(float(v2.y),1.000000);
EXPECT_EQ(float(v2.z),3.000000);
EXPECT_EQ(float(v2.w),3.000000);
} 

TEST(SwittzleTest, vec4_grba) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.grba;
EXPECT_EQ(float(v2.x),2.000000);
EXPECT_EQ(float(v2.y),1.000000);
EXPECT_EQ(float(v2.z),3.000000);
EXPECT_EQ(float(v2.w),4.000000);
} 

TEST(SwittzleTest, vec4_grar) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.grar;
EXPECT_EQ(float(v2.x),2.000000);
EXPECT_EQ(float(v2.y),1.000000);
EXPECT_EQ(float(v2.z),4.000000);
EXPECT_EQ(float(v2.w),1.000000);
} 

TEST(SwittzleTest, vec4_grag) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.grag;
EXPECT_EQ(float(v2.x),2.000000);
EXPECT_EQ(float(v2.y),1.000000);
EXPECT_EQ(float(v2.z),4.000000);
EXPECT_EQ(float(v2.w),2.000000);
} 

TEST(SwittzleTest, vec4_grab) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.grab;
EXPECT_EQ(float(v2.x),2.000000);
EXPECT_EQ(float(v2.y),1.000000);
EXPECT_EQ(float(v2.z),4.000000);
EXPECT_EQ(float(v2.w),3.000000);
} 

TEST(SwittzleTest, vec4_graa) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.graa;
EXPECT_EQ(float(v2.x),2.000000);
EXPECT_EQ(float(v2.y),1.000000);
EXPECT_EQ(float(v2.z),4.000000);
EXPECT_EQ(float(v2.w),4.000000);
} 

TEST(SwittzleTest, vec4_ggrr) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.ggrr;
EXPECT_EQ(float(v2.x),2.000000);
EXPECT_EQ(float(v2.y),2.000000);
EXPECT_EQ(float(v2.z),1.000000);
EXPECT_EQ(float(v2.w),1.000000);
} 

TEST(SwittzleTest, vec4_ggrg) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.ggrg;
EXPECT_EQ(float(v2.x),2.000000);
EXPECT_EQ(float(v2.y),2.000000);
EXPECT_EQ(float(v2.z),1.000000);
EXPECT_EQ(float(v2.w),2.000000);
} 

TEST(SwittzleTest, vec4_ggrb) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.ggrb;
EXPECT_EQ(float(v2.x),2.000000);
EXPECT_EQ(float(v2.y),2.000000);
EXPECT_EQ(float(v2.z),1.000000);
EXPECT_EQ(float(v2.w),3.000000);
} 

TEST(SwittzleTest, vec4_ggra) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.ggra;
EXPECT_EQ(float(v2.x),2.000000);
EXPECT_EQ(float(v2.y),2.000000);
EXPECT_EQ(float(v2.z),1.000000);
EXPECT_EQ(float(v2.w),4.000000);
} 

TEST(SwittzleTest, vec4_gggr) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.gggr;
EXPECT_EQ(float(v2.x),2.000000);
EXPECT_EQ(float(v2.y),2.000000);
EXPECT_EQ(float(v2.z),2.000000);
EXPECT_EQ(float(v2.w),1.000000);
} 

TEST(SwittzleTest, vec4_gggg) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.gggg;
EXPECT_EQ(float(v2.x),2.000000);
EXPECT_EQ(float(v2.y),2.000000);
EXPECT_EQ(float(v2.z),2.000000);
EXPECT_EQ(float(v2.w),2.000000);
} 

TEST(SwittzleTest, vec4_gggb) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.gggb;
EXPECT_EQ(float(v2.x),2.000000);
EXPECT_EQ(float(v2.y),2.000000);
EXPECT_EQ(float(v2.z),2.000000);
EXPECT_EQ(float(v2.w),3.000000);
} 

TEST(SwittzleTest, vec4_ggga) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.ggga;
EXPECT_EQ(float(v2.x),2.000000);
EXPECT_EQ(float(v2.y),2.000000);
EXPECT_EQ(float(v2.z),2.000000);
EXPECT_EQ(float(v2.w),4.000000);
} 

TEST(SwittzleTest, vec4_ggbr) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.ggbr;
EXPECT_EQ(float(v2.x),2.000000);
EXPECT_EQ(float(v2.y),2.000000);
EXPECT_EQ(float(v2.z),3.000000);
EXPECT_EQ(float(v2.w),1.000000);
} 

TEST(SwittzleTest, vec4_ggbg) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.ggbg;
EXPECT_EQ(float(v2.x),2.000000);
EXPECT_EQ(float(v2.y),2.000000);
EXPECT_EQ(float(v2.z),3.000000);
EXPECT_EQ(float(v2.w),2.000000);
} 

TEST(SwittzleTest, vec4_ggbb) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.ggbb;
EXPECT_EQ(float(v2.x),2.000000);
EXPECT_EQ(float(v2.y),2.000000);
EXPECT_EQ(float(v2.z),3.000000);
EXPECT_EQ(float(v2.w),3.000000);
} 

TEST(SwittzleTest, vec4_ggba) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.ggba;
EXPECT_EQ(float(v2.x),2.000000);
EXPECT_EQ(float(v2.y),2.000000);
EXPECT_EQ(float(v2.z),3.000000);
EXPECT_EQ(float(v2.w),4.000000);
} 

TEST(SwittzleTest, vec4_ggar) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.ggar;
EXPECT_EQ(float(v2.x),2.000000);
EXPECT_EQ(float(v2.y),2.000000);
EXPECT_EQ(float(v2.z),4.000000);
EXPECT_EQ(float(v2.w),1.000000);
} 

TEST(SwittzleTest, vec4_ggag) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.ggag;
EXPECT_EQ(float(v2.x),2.000000);
EXPECT_EQ(float(v2.y),2.000000);
EXPECT_EQ(float(v2.z),4.000000);
EXPECT_EQ(float(v2.w),2.000000);
} 

TEST(SwittzleTest, vec4_ggab) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.ggab;
EXPECT_EQ(float(v2.x),2.000000);
EXPECT_EQ(float(v2.y),2.000000);
EXPECT_EQ(float(v2.z),4.000000);
EXPECT_EQ(float(v2.w),3.000000);
} 

TEST(SwittzleTest, vec4_ggaa) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.ggaa;
EXPECT_EQ(float(v2.x),2.000000);
EXPECT_EQ(float(v2.y),2.000000);
EXPECT_EQ(float(v2.z),4.000000);
EXPECT_EQ(float(v2.w),4.000000);
} 

TEST(SwittzleTest, vec4_gbrr) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.gbrr;
EXPECT_EQ(float(v2.x),2.000000);
EXPECT_EQ(float(v2.y),3.000000);
EXPECT_EQ(float(v2.z),1.000000);
EXPECT_EQ(float(v2.w),1.000000);
} 

TEST(SwittzleTest, vec4_gbrg) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.gbrg;
EXPECT_EQ(float(v2.x),2.000000);
EXPECT_EQ(float(v2.y),3.000000);
EXPECT_EQ(float(v2.z),1.000000);
EXPECT_EQ(float(v2.w),2.000000);
} 

TEST(SwittzleTest, vec4_gbrb) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.gbrb;
EXPECT_EQ(float(v2.x),2.000000);
EXPECT_EQ(float(v2.y),3.000000);
EXPECT_EQ(float(v2.z),1.000000);
EXPECT_EQ(float(v2.w),3.000000);
} 

TEST(SwittzleTest, vec4_gbra) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.gbra;
EXPECT_EQ(float(v2.x),2.000000);
EXPECT_EQ(float(v2.y),3.000000);
EXPECT_EQ(float(v2.z),1.000000);
EXPECT_EQ(float(v2.w),4.000000);
} 

TEST(SwittzleTest, vec4_gbgr) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.gbgr;
EXPECT_EQ(float(v2.x),2.000000);
EXPECT_EQ(float(v2.y),3.000000);
EXPECT_EQ(float(v2.z),2.000000);
EXPECT_EQ(float(v2.w),1.000000);
} 

TEST(SwittzleTest, vec4_gbgg) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.gbgg;
EXPECT_EQ(float(v2.x),2.000000);
EXPECT_EQ(float(v2.y),3.000000);
EXPECT_EQ(float(v2.z),2.000000);
EXPECT_EQ(float(v2.w),2.000000);
} 

TEST(SwittzleTest, vec4_gbgb) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.gbgb;
EXPECT_EQ(float(v2.x),2.000000);
EXPECT_EQ(float(v2.y),3.000000);
EXPECT_EQ(float(v2.z),2.000000);
EXPECT_EQ(float(v2.w),3.000000);
} 

TEST(SwittzleTest, vec4_gbga) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.gbga;
EXPECT_EQ(float(v2.x),2.000000);
EXPECT_EQ(float(v2.y),3.000000);
EXPECT_EQ(float(v2.z),2.000000);
EXPECT_EQ(float(v2.w),4.000000);
} 

TEST(SwittzleTest, vec4_gbbr) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.gbbr;
EXPECT_EQ(float(v2.x),2.000000);
EXPECT_EQ(float(v2.y),3.000000);
EXPECT_EQ(float(v2.z),3.000000);
EXPECT_EQ(float(v2.w),1.000000);
} 

TEST(SwittzleTest, vec4_gbbg) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.gbbg;
EXPECT_EQ(float(v2.x),2.000000);
EXPECT_EQ(float(v2.y),3.000000);
EXPECT_EQ(float(v2.z),3.000000);
EXPECT_EQ(float(v2.w),2.000000);
} 

TEST(SwittzleTest, vec4_gbbb) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.gbbb;
EXPECT_EQ(float(v2.x),2.000000);
EXPECT_EQ(float(v2.y),3.000000);
EXPECT_EQ(float(v2.z),3.000000);
EXPECT_EQ(float(v2.w),3.000000);
} 

TEST(SwittzleTest, vec4_gbba) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.gbba;
EXPECT_EQ(float(v2.x),2.000000);
EXPECT_EQ(float(v2.y),3.000000);
EXPECT_EQ(float(v2.z),3.000000);
EXPECT_EQ(float(v2.w),4.000000);
} 

TEST(SwittzleTest, vec4_gbar) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.gbar;
EXPECT_EQ(float(v2.x),2.000000);
EXPECT_EQ(float(v2.y),3.000000);
EXPECT_EQ(float(v2.z),4.000000);
EXPECT_EQ(float(v2.w),1.000000);
} 

TEST(SwittzleTest, vec4_gbag) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.gbag;
EXPECT_EQ(float(v2.x),2.000000);
EXPECT_EQ(float(v2.y),3.000000);
EXPECT_EQ(float(v2.z),4.000000);
EXPECT_EQ(float(v2.w),2.000000);
} 

TEST(SwittzleTest, vec4_gbab) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.gbab;
EXPECT_EQ(float(v2.x),2.000000);
EXPECT_EQ(float(v2.y),3.000000);
EXPECT_EQ(float(v2.z),4.000000);
EXPECT_EQ(float(v2.w),3.000000);
} 

TEST(SwittzleTest, vec4_gbaa) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.gbaa;
EXPECT_EQ(float(v2.x),2.000000);
EXPECT_EQ(float(v2.y),3.000000);
EXPECT_EQ(float(v2.z),4.000000);
EXPECT_EQ(float(v2.w),4.000000);
} 

TEST(SwittzleTest, vec4_garr) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.garr;
EXPECT_EQ(float(v2.x),2.000000);
EXPECT_EQ(float(v2.y),4.000000);
EXPECT_EQ(float(v2.z),1.000000);
EXPECT_EQ(float(v2.w),1.000000);
} 

TEST(SwittzleTest, vec4_garg) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.garg;
EXPECT_EQ(float(v2.x),2.000000);
EXPECT_EQ(float(v2.y),4.000000);
EXPECT_EQ(float(v2.z),1.000000);
EXPECT_EQ(float(v2.w),2.000000);
} 

TEST(SwittzleTest, vec4_garb) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.garb;
EXPECT_EQ(float(v2.x),2.000000);
EXPECT_EQ(float(v2.y),4.000000);
EXPECT_EQ(float(v2.z),1.000000);
EXPECT_EQ(float(v2.w),3.000000);
} 

TEST(SwittzleTest, vec4_gara) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.gara;
EXPECT_EQ(float(v2.x),2.000000);
EXPECT_EQ(float(v2.y),4.000000);
EXPECT_EQ(float(v2.z),1.000000);
EXPECT_EQ(float(v2.w),4.000000);
} 

TEST(SwittzleTest, vec4_gagr) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.gagr;
EXPECT_EQ(float(v2.x),2.000000);
EXPECT_EQ(float(v2.y),4.000000);
EXPECT_EQ(float(v2.z),2.000000);
EXPECT_EQ(float(v2.w),1.000000);
} 

TEST(SwittzleTest, vec4_gagg) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.gagg;
EXPECT_EQ(float(v2.x),2.000000);
EXPECT_EQ(float(v2.y),4.000000);
EXPECT_EQ(float(v2.z),2.000000);
EXPECT_EQ(float(v2.w),2.000000);
} 

TEST(SwittzleTest, vec4_gagb) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.gagb;
EXPECT_EQ(float(v2.x),2.000000);
EXPECT_EQ(float(v2.y),4.000000);
EXPECT_EQ(float(v2.z),2.000000);
EXPECT_EQ(float(v2.w),3.000000);
} 

TEST(SwittzleTest, vec4_gaga) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.gaga;
EXPECT_EQ(float(v2.x),2.000000);
EXPECT_EQ(float(v2.y),4.000000);
EXPECT_EQ(float(v2.z),2.000000);
EXPECT_EQ(float(v2.w),4.000000);
} 

TEST(SwittzleTest, vec4_gabr) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.gabr;
EXPECT_EQ(float(v2.x),2.000000);
EXPECT_EQ(float(v2.y),4.000000);
EXPECT_EQ(float(v2.z),3.000000);
EXPECT_EQ(float(v2.w),1.000000);
} 

TEST(SwittzleTest, vec4_gabg) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.gabg;
EXPECT_EQ(float(v2.x),2.000000);
EXPECT_EQ(float(v2.y),4.000000);
EXPECT_EQ(float(v2.z),3.000000);
EXPECT_EQ(float(v2.w),2.000000);
} 

TEST(SwittzleTest, vec4_gabb) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.gabb;
EXPECT_EQ(float(v2.x),2.000000);
EXPECT_EQ(float(v2.y),4.000000);
EXPECT_EQ(float(v2.z),3.000000);
EXPECT_EQ(float(v2.w),3.000000);
} 

TEST(SwittzleTest, vec4_gaba) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.gaba;
EXPECT_EQ(float(v2.x),2.000000);
EXPECT_EQ(float(v2.y),4.000000);
EXPECT_EQ(float(v2.z),3.000000);
EXPECT_EQ(float(v2.w),4.000000);
} 

TEST(SwittzleTest, vec4_gaar) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.gaar;
EXPECT_EQ(float(v2.x),2.000000);
EXPECT_EQ(float(v2.y),4.000000);
EXPECT_EQ(float(v2.z),4.000000);
EXPECT_EQ(float(v2.w),1.000000);
} 

TEST(SwittzleTest, vec4_gaag) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.gaag;
EXPECT_EQ(float(v2.x),2.000000);
EXPECT_EQ(float(v2.y),4.000000);
EXPECT_EQ(float(v2.z),4.000000);
EXPECT_EQ(float(v2.w),2.000000);
} 

TEST(SwittzleTest, vec4_gaab) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.gaab;
EXPECT_EQ(float(v2.x),2.000000);
EXPECT_EQ(float(v2.y),4.000000);
EXPECT_EQ(float(v2.z),4.000000);
EXPECT_EQ(float(v2.w),3.000000);
} 

TEST(SwittzleTest, vec4_gaaa) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.gaaa;
EXPECT_EQ(float(v2.x),2.000000);
EXPECT_EQ(float(v2.y),4.000000);
EXPECT_EQ(float(v2.z),4.000000);
EXPECT_EQ(float(v2.w),4.000000);
} 

TEST(SwittzleTest, vec4_brrr) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.brrr;
EXPECT_EQ(float(v2.x),3.000000);
EXPECT_EQ(float(v2.y),1.000000);
EXPECT_EQ(float(v2.z),1.000000);
EXPECT_EQ(float(v2.w),1.000000);
} 

TEST(SwittzleTest, vec4_brrg) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.brrg;
EXPECT_EQ(float(v2.x),3.000000);
EXPECT_EQ(float(v2.y),1.000000);
EXPECT_EQ(float(v2.z),1.000000);
EXPECT_EQ(float(v2.w),2.000000);
} 

TEST(SwittzleTest, vec4_brrb) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.brrb;
EXPECT_EQ(float(v2.x),3.000000);
EXPECT_EQ(float(v2.y),1.000000);
EXPECT_EQ(float(v2.z),1.000000);
EXPECT_EQ(float(v2.w),3.000000);
} 

TEST(SwittzleTest, vec4_brra) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.brra;
EXPECT_EQ(float(v2.x),3.000000);
EXPECT_EQ(float(v2.y),1.000000);
EXPECT_EQ(float(v2.z),1.000000);
EXPECT_EQ(float(v2.w),4.000000);
} 

TEST(SwittzleTest, vec4_brgr) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.brgr;
EXPECT_EQ(float(v2.x),3.000000);
EXPECT_EQ(float(v2.y),1.000000);
EXPECT_EQ(float(v2.z),2.000000);
EXPECT_EQ(float(v2.w),1.000000);
} 

TEST(SwittzleTest, vec4_brgg) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.brgg;
EXPECT_EQ(float(v2.x),3.000000);
EXPECT_EQ(float(v2.y),1.000000);
EXPECT_EQ(float(v2.z),2.000000);
EXPECT_EQ(float(v2.w),2.000000);
} 

TEST(SwittzleTest, vec4_brgb) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.brgb;
EXPECT_EQ(float(v2.x),3.000000);
EXPECT_EQ(float(v2.y),1.000000);
EXPECT_EQ(float(v2.z),2.000000);
EXPECT_EQ(float(v2.w),3.000000);
} 

TEST(SwittzleTest, vec4_brga) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.brga;
EXPECT_EQ(float(v2.x),3.000000);
EXPECT_EQ(float(v2.y),1.000000);
EXPECT_EQ(float(v2.z),2.000000);
EXPECT_EQ(float(v2.w),4.000000);
} 

TEST(SwittzleTest, vec4_brbr) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.brbr;
EXPECT_EQ(float(v2.x),3.000000);
EXPECT_EQ(float(v2.y),1.000000);
EXPECT_EQ(float(v2.z),3.000000);
EXPECT_EQ(float(v2.w),1.000000);
} 

TEST(SwittzleTest, vec4_brbg) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.brbg;
EXPECT_EQ(float(v2.x),3.000000);
EXPECT_EQ(float(v2.y),1.000000);
EXPECT_EQ(float(v2.z),3.000000);
EXPECT_EQ(float(v2.w),2.000000);
} 

TEST(SwittzleTest, vec4_brbb) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.brbb;
EXPECT_EQ(float(v2.x),3.000000);
EXPECT_EQ(float(v2.y),1.000000);
EXPECT_EQ(float(v2.z),3.000000);
EXPECT_EQ(float(v2.w),3.000000);
} 

TEST(SwittzleTest, vec4_brba) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.brba;
EXPECT_EQ(float(v2.x),3.000000);
EXPECT_EQ(float(v2.y),1.000000);
EXPECT_EQ(float(v2.z),3.000000);
EXPECT_EQ(float(v2.w),4.000000);
} 

TEST(SwittzleTest, vec4_brar) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.brar;
EXPECT_EQ(float(v2.x),3.000000);
EXPECT_EQ(float(v2.y),1.000000);
EXPECT_EQ(float(v2.z),4.000000);
EXPECT_EQ(float(v2.w),1.000000);
} 

TEST(SwittzleTest, vec4_brag) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.brag;
EXPECT_EQ(float(v2.x),3.000000);
EXPECT_EQ(float(v2.y),1.000000);
EXPECT_EQ(float(v2.z),4.000000);
EXPECT_EQ(float(v2.w),2.000000);
} 

TEST(SwittzleTest, vec4_brab) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.brab;
EXPECT_EQ(float(v2.x),3.000000);
EXPECT_EQ(float(v2.y),1.000000);
EXPECT_EQ(float(v2.z),4.000000);
EXPECT_EQ(float(v2.w),3.000000);
} 

TEST(SwittzleTest, vec4_braa) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.braa;
EXPECT_EQ(float(v2.x),3.000000);
EXPECT_EQ(float(v2.y),1.000000);
EXPECT_EQ(float(v2.z),4.000000);
EXPECT_EQ(float(v2.w),4.000000);
} 

TEST(SwittzleTest, vec4_bgrr) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.bgrr;
EXPECT_EQ(float(v2.x),3.000000);
EXPECT_EQ(float(v2.y),2.000000);
EXPECT_EQ(float(v2.z),1.000000);
EXPECT_EQ(float(v2.w),1.000000);
} 

TEST(SwittzleTest, vec4_bgrg) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.bgrg;
EXPECT_EQ(float(v2.x),3.000000);
EXPECT_EQ(float(v2.y),2.000000);
EXPECT_EQ(float(v2.z),1.000000);
EXPECT_EQ(float(v2.w),2.000000);
} 

TEST(SwittzleTest, vec4_bgrb) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.bgrb;
EXPECT_EQ(float(v2.x),3.000000);
EXPECT_EQ(float(v2.y),2.000000);
EXPECT_EQ(float(v2.z),1.000000);
EXPECT_EQ(float(v2.w),3.000000);
} 

TEST(SwittzleTest, vec4_bgra) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.bgra;
EXPECT_EQ(float(v2.x),3.000000);
EXPECT_EQ(float(v2.y),2.000000);
EXPECT_EQ(float(v2.z),1.000000);
EXPECT_EQ(float(v2.w),4.000000);
} 

TEST(SwittzleTest, vec4_bggr) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.bggr;
EXPECT_EQ(float(v2.x),3.000000);
EXPECT_EQ(float(v2.y),2.000000);
EXPECT_EQ(float(v2.z),2.000000);
EXPECT_EQ(float(v2.w),1.000000);
} 

TEST(SwittzleTest, vec4_bggg) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.bggg;
EXPECT_EQ(float(v2.x),3.000000);
EXPECT_EQ(float(v2.y),2.000000);
EXPECT_EQ(float(v2.z),2.000000);
EXPECT_EQ(float(v2.w),2.000000);
} 

TEST(SwittzleTest, vec4_bggb) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.bggb;
EXPECT_EQ(float(v2.x),3.000000);
EXPECT_EQ(float(v2.y),2.000000);
EXPECT_EQ(float(v2.z),2.000000);
EXPECT_EQ(float(v2.w),3.000000);
} 

TEST(SwittzleTest, vec4_bgga) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.bgga;
EXPECT_EQ(float(v2.x),3.000000);
EXPECT_EQ(float(v2.y),2.000000);
EXPECT_EQ(float(v2.z),2.000000);
EXPECT_EQ(float(v2.w),4.000000);
} 

TEST(SwittzleTest, vec4_bgbr) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.bgbr;
EXPECT_EQ(float(v2.x),3.000000);
EXPECT_EQ(float(v2.y),2.000000);
EXPECT_EQ(float(v2.z),3.000000);
EXPECT_EQ(float(v2.w),1.000000);
} 

TEST(SwittzleTest, vec4_bgbg) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.bgbg;
EXPECT_EQ(float(v2.x),3.000000);
EXPECT_EQ(float(v2.y),2.000000);
EXPECT_EQ(float(v2.z),3.000000);
EXPECT_EQ(float(v2.w),2.000000);
} 

TEST(SwittzleTest, vec4_bgbb) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.bgbb;
EXPECT_EQ(float(v2.x),3.000000);
EXPECT_EQ(float(v2.y),2.000000);
EXPECT_EQ(float(v2.z),3.000000);
EXPECT_EQ(float(v2.w),3.000000);
} 

TEST(SwittzleTest, vec4_bgba) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.bgba;
EXPECT_EQ(float(v2.x),3.000000);
EXPECT_EQ(float(v2.y),2.000000);
EXPECT_EQ(float(v2.z),3.000000);
EXPECT_EQ(float(v2.w),4.000000);
} 

TEST(SwittzleTest, vec4_bgar) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.bgar;
EXPECT_EQ(float(v2.x),3.000000);
EXPECT_EQ(float(v2.y),2.000000);
EXPECT_EQ(float(v2.z),4.000000);
EXPECT_EQ(float(v2.w),1.000000);
} 

TEST(SwittzleTest, vec4_bgag) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.bgag;
EXPECT_EQ(float(v2.x),3.000000);
EXPECT_EQ(float(v2.y),2.000000);
EXPECT_EQ(float(v2.z),4.000000);
EXPECT_EQ(float(v2.w),2.000000);
} 

TEST(SwittzleTest, vec4_bgab) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.bgab;
EXPECT_EQ(float(v2.x),3.000000);
EXPECT_EQ(float(v2.y),2.000000);
EXPECT_EQ(float(v2.z),4.000000);
EXPECT_EQ(float(v2.w),3.000000);
} 

TEST(SwittzleTest, vec4_bgaa) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.bgaa;
EXPECT_EQ(float(v2.x),3.000000);
EXPECT_EQ(float(v2.y),2.000000);
EXPECT_EQ(float(v2.z),4.000000);
EXPECT_EQ(float(v2.w),4.000000);
} 

TEST(SwittzleTest, vec4_bbrr) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.bbrr;
EXPECT_EQ(float(v2.x),3.000000);
EXPECT_EQ(float(v2.y),3.000000);
EXPECT_EQ(float(v2.z),1.000000);
EXPECT_EQ(float(v2.w),1.000000);
} 

TEST(SwittzleTest, vec4_bbrg) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.bbrg;
EXPECT_EQ(float(v2.x),3.000000);
EXPECT_EQ(float(v2.y),3.000000);
EXPECT_EQ(float(v2.z),1.000000);
EXPECT_EQ(float(v2.w),2.000000);
} 

TEST(SwittzleTest, vec4_bbrb) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.bbrb;
EXPECT_EQ(float(v2.x),3.000000);
EXPECT_EQ(float(v2.y),3.000000);
EXPECT_EQ(float(v2.z),1.000000);
EXPECT_EQ(float(v2.w),3.000000);
} 

TEST(SwittzleTest, vec4_bbra) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.bbra;
EXPECT_EQ(float(v2.x),3.000000);
EXPECT_EQ(float(v2.y),3.000000);
EXPECT_EQ(float(v2.z),1.000000);
EXPECT_EQ(float(v2.w),4.000000);
} 

TEST(SwittzleTest, vec4_bbgr) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.bbgr;
EXPECT_EQ(float(v2.x),3.000000);
EXPECT_EQ(float(v2.y),3.000000);
EXPECT_EQ(float(v2.z),2.000000);
EXPECT_EQ(float(v2.w),1.000000);
} 

TEST(SwittzleTest, vec4_bbgg) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.bbgg;
EXPECT_EQ(float(v2.x),3.000000);
EXPECT_EQ(float(v2.y),3.000000);
EXPECT_EQ(float(v2.z),2.000000);
EXPECT_EQ(float(v2.w),2.000000);
} 

TEST(SwittzleTest, vec4_bbgb) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.bbgb;
EXPECT_EQ(float(v2.x),3.000000);
EXPECT_EQ(float(v2.y),3.000000);
EXPECT_EQ(float(v2.z),2.000000);
EXPECT_EQ(float(v2.w),3.000000);
} 

TEST(SwittzleTest, vec4_bbga) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.bbga;
EXPECT_EQ(float(v2.x),3.000000);
EXPECT_EQ(float(v2.y),3.000000);
EXPECT_EQ(float(v2.z),2.000000);
EXPECT_EQ(float(v2.w),4.000000);
} 

TEST(SwittzleTest, vec4_bbbr) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.bbbr;
EXPECT_EQ(float(v2.x),3.000000);
EXPECT_EQ(float(v2.y),3.000000);
EXPECT_EQ(float(v2.z),3.000000);
EXPECT_EQ(float(v2.w),1.000000);
} 

TEST(SwittzleTest, vec4_bbbg) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.bbbg;
EXPECT_EQ(float(v2.x),3.000000);
EXPECT_EQ(float(v2.y),3.000000);
EXPECT_EQ(float(v2.z),3.000000);
EXPECT_EQ(float(v2.w),2.000000);
} 

TEST(SwittzleTest, vec4_bbbb) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.bbbb;
EXPECT_EQ(float(v2.x),3.000000);
EXPECT_EQ(float(v2.y),3.000000);
EXPECT_EQ(float(v2.z),3.000000);
EXPECT_EQ(float(v2.w),3.000000);
} 

TEST(SwittzleTest, vec4_bbba) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.bbba;
EXPECT_EQ(float(v2.x),3.000000);
EXPECT_EQ(float(v2.y),3.000000);
EXPECT_EQ(float(v2.z),3.000000);
EXPECT_EQ(float(v2.w),4.000000);
} 

TEST(SwittzleTest, vec4_bbar) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.bbar;
EXPECT_EQ(float(v2.x),3.000000);
EXPECT_EQ(float(v2.y),3.000000);
EXPECT_EQ(float(v2.z),4.000000);
EXPECT_EQ(float(v2.w),1.000000);
} 

TEST(SwittzleTest, vec4_bbag) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.bbag;
EXPECT_EQ(float(v2.x),3.000000);
EXPECT_EQ(float(v2.y),3.000000);
EXPECT_EQ(float(v2.z),4.000000);
EXPECT_EQ(float(v2.w),2.000000);
} 

TEST(SwittzleTest, vec4_bbab) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.bbab;
EXPECT_EQ(float(v2.x),3.000000);
EXPECT_EQ(float(v2.y),3.000000);
EXPECT_EQ(float(v2.z),4.000000);
EXPECT_EQ(float(v2.w),3.000000);
} 

TEST(SwittzleTest, vec4_bbaa) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.bbaa;
EXPECT_EQ(float(v2.x),3.000000);
EXPECT_EQ(float(v2.y),3.000000);
EXPECT_EQ(float(v2.z),4.000000);
EXPECT_EQ(float(v2.w),4.000000);
} 

TEST(SwittzleTest, vec4_barr) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.barr;
EXPECT_EQ(float(v2.x),3.000000);
EXPECT_EQ(float(v2.y),4.000000);
EXPECT_EQ(float(v2.z),1.000000);
EXPECT_EQ(float(v2.w),1.000000);
} 

TEST(SwittzleTest, vec4_barg) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.barg;
EXPECT_EQ(float(v2.x),3.000000);
EXPECT_EQ(float(v2.y),4.000000);
EXPECT_EQ(float(v2.z),1.000000);
EXPECT_EQ(float(v2.w),2.000000);
} 

TEST(SwittzleTest, vec4_barb) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.barb;
EXPECT_EQ(float(v2.x),3.000000);
EXPECT_EQ(float(v2.y),4.000000);
EXPECT_EQ(float(v2.z),1.000000);
EXPECT_EQ(float(v2.w),3.000000);
} 

TEST(SwittzleTest, vec4_bara) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.bara;
EXPECT_EQ(float(v2.x),3.000000);
EXPECT_EQ(float(v2.y),4.000000);
EXPECT_EQ(float(v2.z),1.000000);
EXPECT_EQ(float(v2.w),4.000000);
} 

TEST(SwittzleTest, vec4_bagr) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.bagr;
EXPECT_EQ(float(v2.x),3.000000);
EXPECT_EQ(float(v2.y),4.000000);
EXPECT_EQ(float(v2.z),2.000000);
EXPECT_EQ(float(v2.w),1.000000);
} 

TEST(SwittzleTest, vec4_bagg) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.bagg;
EXPECT_EQ(float(v2.x),3.000000);
EXPECT_EQ(float(v2.y),4.000000);
EXPECT_EQ(float(v2.z),2.000000);
EXPECT_EQ(float(v2.w),2.000000);
} 

TEST(SwittzleTest, vec4_bagb) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.bagb;
EXPECT_EQ(float(v2.x),3.000000);
EXPECT_EQ(float(v2.y),4.000000);
EXPECT_EQ(float(v2.z),2.000000);
EXPECT_EQ(float(v2.w),3.000000);
} 

TEST(SwittzleTest, vec4_baga) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.baga;
EXPECT_EQ(float(v2.x),3.000000);
EXPECT_EQ(float(v2.y),4.000000);
EXPECT_EQ(float(v2.z),2.000000);
EXPECT_EQ(float(v2.w),4.000000);
} 

TEST(SwittzleTest, vec4_babr) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.babr;
EXPECT_EQ(float(v2.x),3.000000);
EXPECT_EQ(float(v2.y),4.000000);
EXPECT_EQ(float(v2.z),3.000000);
EXPECT_EQ(float(v2.w),1.000000);
} 

TEST(SwittzleTest, vec4_babg) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.babg;
EXPECT_EQ(float(v2.x),3.000000);
EXPECT_EQ(float(v2.y),4.000000);
EXPECT_EQ(float(v2.z),3.000000);
EXPECT_EQ(float(v2.w),2.000000);
} 

TEST(SwittzleTest, vec4_babb) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.babb;
EXPECT_EQ(float(v2.x),3.000000);
EXPECT_EQ(float(v2.y),4.000000);
EXPECT_EQ(float(v2.z),3.000000);
EXPECT_EQ(float(v2.w),3.000000);
} 

TEST(SwittzleTest, vec4_baba) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.baba;
EXPECT_EQ(float(v2.x),3.000000);
EXPECT_EQ(float(v2.y),4.000000);
EXPECT_EQ(float(v2.z),3.000000);
EXPECT_EQ(float(v2.w),4.000000);
} 

TEST(SwittzleTest, vec4_baar) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.baar;
EXPECT_EQ(float(v2.x),3.000000);
EXPECT_EQ(float(v2.y),4.000000);
EXPECT_EQ(float(v2.z),4.000000);
EXPECT_EQ(float(v2.w),1.000000);
} 

TEST(SwittzleTest, vec4_baag) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.baag;
EXPECT_EQ(float(v2.x),3.000000);
EXPECT_EQ(float(v2.y),4.000000);
EXPECT_EQ(float(v2.z),4.000000);
EXPECT_EQ(float(v2.w),2.000000);
} 

TEST(SwittzleTest, vec4_baab) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.baab;
EXPECT_EQ(float(v2.x),3.000000);
EXPECT_EQ(float(v2.y),4.000000);
EXPECT_EQ(float(v2.z),4.000000);
EXPECT_EQ(float(v2.w),3.000000);
} 

TEST(SwittzleTest, vec4_baaa) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.baaa;
EXPECT_EQ(float(v2.x),3.000000);
EXPECT_EQ(float(v2.y),4.000000);
EXPECT_EQ(float(v2.z),4.000000);
EXPECT_EQ(float(v2.w),4.000000);
} 

TEST(SwittzleTest, vec4_arrr) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.arrr;
EXPECT_EQ(float(v2.x),4.000000);
EXPECT_EQ(float(v2.y),1.000000);
EXPECT_EQ(float(v2.z),1.000000);
EXPECT_EQ(float(v2.w),1.000000);
} 

TEST(SwittzleTest, vec4_arrg) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.arrg;
EXPECT_EQ(float(v2.x),4.000000);
EXPECT_EQ(float(v2.y),1.000000);
EXPECT_EQ(float(v2.z),1.000000);
EXPECT_EQ(float(v2.w),2.000000);
} 

TEST(SwittzleTest, vec4_arrb) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.arrb;
EXPECT_EQ(float(v2.x),4.000000);
EXPECT_EQ(float(v2.y),1.000000);
EXPECT_EQ(float(v2.z),1.000000);
EXPECT_EQ(float(v2.w),3.000000);
} 

TEST(SwittzleTest, vec4_arra) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.arra;
EXPECT_EQ(float(v2.x),4.000000);
EXPECT_EQ(float(v2.y),1.000000);
EXPECT_EQ(float(v2.z),1.000000);
EXPECT_EQ(float(v2.w),4.000000);
} 

TEST(SwittzleTest, vec4_argr) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.argr;
EXPECT_EQ(float(v2.x),4.000000);
EXPECT_EQ(float(v2.y),1.000000);
EXPECT_EQ(float(v2.z),2.000000);
EXPECT_EQ(float(v2.w),1.000000);
} 

TEST(SwittzleTest, vec4_argg) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.argg;
EXPECT_EQ(float(v2.x),4.000000);
EXPECT_EQ(float(v2.y),1.000000);
EXPECT_EQ(float(v2.z),2.000000);
EXPECT_EQ(float(v2.w),2.000000);
} 

TEST(SwittzleTest, vec4_argb) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.argb;
EXPECT_EQ(float(v2.x),4.000000);
EXPECT_EQ(float(v2.y),1.000000);
EXPECT_EQ(float(v2.z),2.000000);
EXPECT_EQ(float(v2.w),3.000000);
} 

TEST(SwittzleTest, vec4_arga) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.arga;
EXPECT_EQ(float(v2.x),4.000000);
EXPECT_EQ(float(v2.y),1.000000);
EXPECT_EQ(float(v2.z),2.000000);
EXPECT_EQ(float(v2.w),4.000000);
} 

TEST(SwittzleTest, vec4_arbr) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.arbr;
EXPECT_EQ(float(v2.x),4.000000);
EXPECT_EQ(float(v2.y),1.000000);
EXPECT_EQ(float(v2.z),3.000000);
EXPECT_EQ(float(v2.w),1.000000);
} 

TEST(SwittzleTest, vec4_arbg) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.arbg;
EXPECT_EQ(float(v2.x),4.000000);
EXPECT_EQ(float(v2.y),1.000000);
EXPECT_EQ(float(v2.z),3.000000);
EXPECT_EQ(float(v2.w),2.000000);
} 

TEST(SwittzleTest, vec4_arbb) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.arbb;
EXPECT_EQ(float(v2.x),4.000000);
EXPECT_EQ(float(v2.y),1.000000);
EXPECT_EQ(float(v2.z),3.000000);
EXPECT_EQ(float(v2.w),3.000000);
} 

TEST(SwittzleTest, vec4_arba) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.arba;
EXPECT_EQ(float(v2.x),4.000000);
EXPECT_EQ(float(v2.y),1.000000);
EXPECT_EQ(float(v2.z),3.000000);
EXPECT_EQ(float(v2.w),4.000000);
} 

TEST(SwittzleTest, vec4_arar) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.arar;
EXPECT_EQ(float(v2.x),4.000000);
EXPECT_EQ(float(v2.y),1.000000);
EXPECT_EQ(float(v2.z),4.000000);
EXPECT_EQ(float(v2.w),1.000000);
} 

TEST(SwittzleTest, vec4_arag) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.arag;
EXPECT_EQ(float(v2.x),4.000000);
EXPECT_EQ(float(v2.y),1.000000);
EXPECT_EQ(float(v2.z),4.000000);
EXPECT_EQ(float(v2.w),2.000000);
} 

TEST(SwittzleTest, vec4_arab) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.arab;
EXPECT_EQ(float(v2.x),4.000000);
EXPECT_EQ(float(v2.y),1.000000);
EXPECT_EQ(float(v2.z),4.000000);
EXPECT_EQ(float(v2.w),3.000000);
} 

TEST(SwittzleTest, vec4_araa) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.araa;
EXPECT_EQ(float(v2.x),4.000000);
EXPECT_EQ(float(v2.y),1.000000);
EXPECT_EQ(float(v2.z),4.000000);
EXPECT_EQ(float(v2.w),4.000000);
} 

TEST(SwittzleTest, vec4_agrr) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.agrr;
EXPECT_EQ(float(v2.x),4.000000);
EXPECT_EQ(float(v2.y),2.000000);
EXPECT_EQ(float(v2.z),1.000000);
EXPECT_EQ(float(v2.w),1.000000);
} 

TEST(SwittzleTest, vec4_agrg) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.agrg;
EXPECT_EQ(float(v2.x),4.000000);
EXPECT_EQ(float(v2.y),2.000000);
EXPECT_EQ(float(v2.z),1.000000);
EXPECT_EQ(float(v2.w),2.000000);
} 

TEST(SwittzleTest, vec4_agrb) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.agrb;
EXPECT_EQ(float(v2.x),4.000000);
EXPECT_EQ(float(v2.y),2.000000);
EXPECT_EQ(float(v2.z),1.000000);
EXPECT_EQ(float(v2.w),3.000000);
} 

TEST(SwittzleTest, vec4_agra) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.agra;
EXPECT_EQ(float(v2.x),4.000000);
EXPECT_EQ(float(v2.y),2.000000);
EXPECT_EQ(float(v2.z),1.000000);
EXPECT_EQ(float(v2.w),4.000000);
} 

TEST(SwittzleTest, vec4_aggr) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.aggr;
EXPECT_EQ(float(v2.x),4.000000);
EXPECT_EQ(float(v2.y),2.000000);
EXPECT_EQ(float(v2.z),2.000000);
EXPECT_EQ(float(v2.w),1.000000);
} 

TEST(SwittzleTest, vec4_aggg) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.aggg;
EXPECT_EQ(float(v2.x),4.000000);
EXPECT_EQ(float(v2.y),2.000000);
EXPECT_EQ(float(v2.z),2.000000);
EXPECT_EQ(float(v2.w),2.000000);
} 

TEST(SwittzleTest, vec4_aggb) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.aggb;
EXPECT_EQ(float(v2.x),4.000000);
EXPECT_EQ(float(v2.y),2.000000);
EXPECT_EQ(float(v2.z),2.000000);
EXPECT_EQ(float(v2.w),3.000000);
} 

TEST(SwittzleTest, vec4_agga) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.agga;
EXPECT_EQ(float(v2.x),4.000000);
EXPECT_EQ(float(v2.y),2.000000);
EXPECT_EQ(float(v2.z),2.000000);
EXPECT_EQ(float(v2.w),4.000000);
} 

TEST(SwittzleTest, vec4_agbr) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.agbr;
EXPECT_EQ(float(v2.x),4.000000);
EXPECT_EQ(float(v2.y),2.000000);
EXPECT_EQ(float(v2.z),3.000000);
EXPECT_EQ(float(v2.w),1.000000);
} 

TEST(SwittzleTest, vec4_agbg) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.agbg;
EXPECT_EQ(float(v2.x),4.000000);
EXPECT_EQ(float(v2.y),2.000000);
EXPECT_EQ(float(v2.z),3.000000);
EXPECT_EQ(float(v2.w),2.000000);
} 

TEST(SwittzleTest, vec4_agbb) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.agbb;
EXPECT_EQ(float(v2.x),4.000000);
EXPECT_EQ(float(v2.y),2.000000);
EXPECT_EQ(float(v2.z),3.000000);
EXPECT_EQ(float(v2.w),3.000000);
} 

TEST(SwittzleTest, vec4_agba) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.agba;
EXPECT_EQ(float(v2.x),4.000000);
EXPECT_EQ(float(v2.y),2.000000);
EXPECT_EQ(float(v2.z),3.000000);
EXPECT_EQ(float(v2.w),4.000000);
} 

TEST(SwittzleTest, vec4_agar) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.agar;
EXPECT_EQ(float(v2.x),4.000000);
EXPECT_EQ(float(v2.y),2.000000);
EXPECT_EQ(float(v2.z),4.000000);
EXPECT_EQ(float(v2.w),1.000000);
} 

TEST(SwittzleTest, vec4_agag) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.agag;
EXPECT_EQ(float(v2.x),4.000000);
EXPECT_EQ(float(v2.y),2.000000);
EXPECT_EQ(float(v2.z),4.000000);
EXPECT_EQ(float(v2.w),2.000000);
} 

TEST(SwittzleTest, vec4_agab) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.agab;
EXPECT_EQ(float(v2.x),4.000000);
EXPECT_EQ(float(v2.y),2.000000);
EXPECT_EQ(float(v2.z),4.000000);
EXPECT_EQ(float(v2.w),3.000000);
} 

TEST(SwittzleTest, vec4_agaa) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.agaa;
EXPECT_EQ(float(v2.x),4.000000);
EXPECT_EQ(float(v2.y),2.000000);
EXPECT_EQ(float(v2.z),4.000000);
EXPECT_EQ(float(v2.w),4.000000);
} 

TEST(SwittzleTest, vec4_abrr) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.abrr;
EXPECT_EQ(float(v2.x),4.000000);
EXPECT_EQ(float(v2.y),3.000000);
EXPECT_EQ(float(v2.z),1.000000);
EXPECT_EQ(float(v2.w),1.000000);
} 

TEST(SwittzleTest, vec4_abrg) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.abrg;
EXPECT_EQ(float(v2.x),4.000000);
EXPECT_EQ(float(v2.y),3.000000);
EXPECT_EQ(float(v2.z),1.000000);
EXPECT_EQ(float(v2.w),2.000000);
} 

TEST(SwittzleTest, vec4_abrb) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.abrb;
EXPECT_EQ(float(v2.x),4.000000);
EXPECT_EQ(float(v2.y),3.000000);
EXPECT_EQ(float(v2.z),1.000000);
EXPECT_EQ(float(v2.w),3.000000);
} 

TEST(SwittzleTest, vec4_abra) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.abra;
EXPECT_EQ(float(v2.x),4.000000);
EXPECT_EQ(float(v2.y),3.000000);
EXPECT_EQ(float(v2.z),1.000000);
EXPECT_EQ(float(v2.w),4.000000);
} 

TEST(SwittzleTest, vec4_abgr) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.abgr;
EXPECT_EQ(float(v2.x),4.000000);
EXPECT_EQ(float(v2.y),3.000000);
EXPECT_EQ(float(v2.z),2.000000);
EXPECT_EQ(float(v2.w),1.000000);
} 

TEST(SwittzleTest, vec4_abgg) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.abgg;
EXPECT_EQ(float(v2.x),4.000000);
EXPECT_EQ(float(v2.y),3.000000);
EXPECT_EQ(float(v2.z),2.000000);
EXPECT_EQ(float(v2.w),2.000000);
} 

TEST(SwittzleTest, vec4_abgb) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.abgb;
EXPECT_EQ(float(v2.x),4.000000);
EXPECT_EQ(float(v2.y),3.000000);
EXPECT_EQ(float(v2.z),2.000000);
EXPECT_EQ(float(v2.w),3.000000);
} 

TEST(SwittzleTest, vec4_abga) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.abga;
EXPECT_EQ(float(v2.x),4.000000);
EXPECT_EQ(float(v2.y),3.000000);
EXPECT_EQ(float(v2.z),2.000000);
EXPECT_EQ(float(v2.w),4.000000);
} 

TEST(SwittzleTest, vec4_abbr) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.abbr;
EXPECT_EQ(float(v2.x),4.000000);
EXPECT_EQ(float(v2.y),3.000000);
EXPECT_EQ(float(v2.z),3.000000);
EXPECT_EQ(float(v2.w),1.000000);
} 

TEST(SwittzleTest, vec4_abbg) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.abbg;
EXPECT_EQ(float(v2.x),4.000000);
EXPECT_EQ(float(v2.y),3.000000);
EXPECT_EQ(float(v2.z),3.000000);
EXPECT_EQ(float(v2.w),2.000000);
} 

TEST(SwittzleTest, vec4_abbb) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.abbb;
EXPECT_EQ(float(v2.x),4.000000);
EXPECT_EQ(float(v2.y),3.000000);
EXPECT_EQ(float(v2.z),3.000000);
EXPECT_EQ(float(v2.w),3.000000);
} 

TEST(SwittzleTest, vec4_abba) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.abba;
EXPECT_EQ(float(v2.x),4.000000);
EXPECT_EQ(float(v2.y),3.000000);
EXPECT_EQ(float(v2.z),3.000000);
EXPECT_EQ(float(v2.w),4.000000);
} 

TEST(SwittzleTest, vec4_abar) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.abar;
EXPECT_EQ(float(v2.x),4.000000);
EXPECT_EQ(float(v2.y),3.000000);
EXPECT_EQ(float(v2.z),4.000000);
EXPECT_EQ(float(v2.w),1.000000);
} 

TEST(SwittzleTest, vec4_abag) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.abag;
EXPECT_EQ(float(v2.x),4.000000);
EXPECT_EQ(float(v2.y),3.000000);
EXPECT_EQ(float(v2.z),4.000000);
EXPECT_EQ(float(v2.w),2.000000);
} 

TEST(SwittzleTest, vec4_abab) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.abab;
EXPECT_EQ(float(v2.x),4.000000);
EXPECT_EQ(float(v2.y),3.000000);
EXPECT_EQ(float(v2.z),4.000000);
EXPECT_EQ(float(v2.w),3.000000);
} 

TEST(SwittzleTest, vec4_abaa) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.abaa;
EXPECT_EQ(float(v2.x),4.000000);
EXPECT_EQ(float(v2.y),3.000000);
EXPECT_EQ(float(v2.z),4.000000);
EXPECT_EQ(float(v2.w),4.000000);
} 

TEST(SwittzleTest, vec4_aarr) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.aarr;
EXPECT_EQ(float(v2.x),4.000000);
EXPECT_EQ(float(v2.y),4.000000);
EXPECT_EQ(float(v2.z),1.000000);
EXPECT_EQ(float(v2.w),1.000000);
} 

TEST(SwittzleTest, vec4_aarg) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.aarg;
EXPECT_EQ(float(v2.x),4.000000);
EXPECT_EQ(float(v2.y),4.000000);
EXPECT_EQ(float(v2.z),1.000000);
EXPECT_EQ(float(v2.w),2.000000);
} 

TEST(SwittzleTest, vec4_aarb) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.aarb;
EXPECT_EQ(float(v2.x),4.000000);
EXPECT_EQ(float(v2.y),4.000000);
EXPECT_EQ(float(v2.z),1.000000);
EXPECT_EQ(float(v2.w),3.000000);
} 

TEST(SwittzleTest, vec4_aara) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.aara;
EXPECT_EQ(float(v2.x),4.000000);
EXPECT_EQ(float(v2.y),4.000000);
EXPECT_EQ(float(v2.z),1.000000);
EXPECT_EQ(float(v2.w),4.000000);
} 

TEST(SwittzleTest, vec4_aagr) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.aagr;
EXPECT_EQ(float(v2.x),4.000000);
EXPECT_EQ(float(v2.y),4.000000);
EXPECT_EQ(float(v2.z),2.000000);
EXPECT_EQ(float(v2.w),1.000000);
} 

TEST(SwittzleTest, vec4_aagg) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.aagg;
EXPECT_EQ(float(v2.x),4.000000);
EXPECT_EQ(float(v2.y),4.000000);
EXPECT_EQ(float(v2.z),2.000000);
EXPECT_EQ(float(v2.w),2.000000);
} 

TEST(SwittzleTest, vec4_aagb) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.aagb;
EXPECT_EQ(float(v2.x),4.000000);
EXPECT_EQ(float(v2.y),4.000000);
EXPECT_EQ(float(v2.z),2.000000);
EXPECT_EQ(float(v2.w),3.000000);
} 

TEST(SwittzleTest, vec4_aaga) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.aaga;
EXPECT_EQ(float(v2.x),4.000000);
EXPECT_EQ(float(v2.y),4.000000);
EXPECT_EQ(float(v2.z),2.000000);
EXPECT_EQ(float(v2.w),4.000000);
} 

TEST(SwittzleTest, vec4_aabr) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.aabr;
EXPECT_EQ(float(v2.x),4.000000);
EXPECT_EQ(float(v2.y),4.000000);
EXPECT_EQ(float(v2.z),3.000000);
EXPECT_EQ(float(v2.w),1.000000);
} 

TEST(SwittzleTest, vec4_aabg) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.aabg;
EXPECT_EQ(float(v2.x),4.000000);
EXPECT_EQ(float(v2.y),4.000000);
EXPECT_EQ(float(v2.z),3.000000);
EXPECT_EQ(float(v2.w),2.000000);
} 

TEST(SwittzleTest, vec4_aabb) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.aabb;
EXPECT_EQ(float(v2.x),4.000000);
EXPECT_EQ(float(v2.y),4.000000);
EXPECT_EQ(float(v2.z),3.000000);
EXPECT_EQ(float(v2.w),3.000000);
} 

TEST(SwittzleTest, vec4_aaba) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.aaba;
EXPECT_EQ(float(v2.x),4.000000);
EXPECT_EQ(float(v2.y),4.000000);
EXPECT_EQ(float(v2.z),3.000000);
EXPECT_EQ(float(v2.w),4.000000);
} 

TEST(SwittzleTest, vec4_aaar) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.aaar;
EXPECT_EQ(float(v2.x),4.000000);
EXPECT_EQ(float(v2.y),4.000000);
EXPECT_EQ(float(v2.z),4.000000);
EXPECT_EQ(float(v2.w),1.000000);
} 

TEST(SwittzleTest, vec4_aaag) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.aaag;
EXPECT_EQ(float(v2.x),4.000000);
EXPECT_EQ(float(v2.y),4.000000);
EXPECT_EQ(float(v2.z),4.000000);
EXPECT_EQ(float(v2.w),2.000000);
} 

TEST(SwittzleTest, vec4_aaab) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.aaab;
EXPECT_EQ(float(v2.x),4.000000);
EXPECT_EQ(float(v2.y),4.000000);
EXPECT_EQ(float(v2.z),4.000000);
EXPECT_EQ(float(v2.w),3.000000);
} 

TEST(SwittzleTest, vec4_aaaa) {
vec4 v1 = vec4(1.000000,2.000000,3.000000,4.000000);
vec4 v2 = v1.aaaa;
EXPECT_EQ(float(v2.x),4.000000);
EXPECT_EQ(float(v2.y),4.000000);
EXPECT_EQ(float(v2.z),4.000000);
EXPECT_EQ(float(v2.w),4.000000);
} 

} 

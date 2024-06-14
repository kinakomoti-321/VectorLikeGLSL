#pragma once

#include "./scalar.h"
#include "./vec2.h"
#include "./vec3.h"

namespace VectorLikeGLSL {
	template<typename vec_type, unsigned int i0_, unsigned int i1_, unsigned int i2_, unsigned int i3_>
	struct Vector4_Swizzle {
		float v[4];
		vec_type operator=(const vec_type& vec) {
			return vec_type(v[i0_] = vec.x, v[i1_] = vec.y, v[i2_] = vec.z, v[i3_]);
		}
		operator vec_type() {
			return vec_type(v[i0_], v[i1_], v[i2_], v[i3_]);
		}
	};

	struct vec4 {
		union {
			float v[4];
			scalar_swizzle<0> x, r;
			scalar_swizzle<1> y, g;
			scalar_swizzle<2> z, b;
			scalar_swizzle<3> w, a;

			Vector4_Swizzle<vec4, 0, 0, 0, 0> xxxx;
			Vector4_Swizzle<vec4, 0, 0, 0, 1> xxxy;
			Vector4_Swizzle<vec4, 0, 0, 0, 2> xxxz;
			Vector4_Swizzle<vec4, 0, 0, 0, 3> xxxw;
			Vector4_Swizzle<vec4, 0, 0, 1, 0> xxyx;
			Vector4_Swizzle<vec4, 0, 0, 1, 1> xxyy;
			Vector4_Swizzle<vec4, 0, 0, 1, 2> xxyz;
			Vector4_Swizzle<vec4, 0, 0, 1, 3> xxyw;
			Vector4_Swizzle<vec4, 0, 0, 2, 0> xxzx;
			Vector4_Swizzle<vec4, 0, 0, 2, 1> xxzy;
			Vector4_Swizzle<vec4, 0, 0, 2, 2> xxzz;
			Vector4_Swizzle<vec4, 0, 0, 2, 3> xxzw;
			Vector4_Swizzle<vec4, 0, 0, 3, 0> xxwx;
			Vector4_Swizzle<vec4, 0, 0, 3, 1> xxwy;
			Vector4_Swizzle<vec4, 0, 0, 3, 2> xxwz;
			Vector4_Swizzle<vec4, 0, 0, 3, 3> xxww;
			Vector4_Swizzle<vec4, 0, 1, 0, 0> xyxx;
			Vector4_Swizzle<vec4, 0, 1, 0, 1> xyxy;
		};

		vec4() {
			v[0] = 0;
			v[1] = 0;
			v[2] = 0;
			v[3] = 0;
		}

		vec4(float a) {
			v[0] = a;
			v[1] = a;
			v[2] = a;
			v[3] = a;
		}

		vec4(float a, float b, float c, float d) {
			v[0] = a;
			v[1] = b;
			v[2] = c;
			v[3] = d;
		}
	};
}
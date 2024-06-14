#pragma once

#include "./scalar.h"
#include "./vec3.h"
#include "./vec4.h"

namespace VectorLikeGLSL {

	template<typename vec_type, unsigned int i0_, unsigned int i1_>
	struct Vector2_Swizzle {
		float v[2];
		vec_type operator=(const vec_type& vec) {
			return vec_type(v[i0_] = vec.x, v[i1_] = vec.y);
		}
		operator vec_type() {
			return vec_type(v[i0_], v[i1_]);
		}
	};

	struct vec2 {
		union {
			float v[2];

			scalar_swizzle<0> x, r;
			scalar_swizzle<1> y, g;

			Vector2_Swizzle<vec2, 0, 0> xx;
			Vector2_Swizzle<vec2, 0, 1> xy;
			Vector2_Swizzle<vec2, 1, 1> yx;
			Vector2_Swizzle<vec2, 1, 1> yy;
			
			Vector3_Swizzle<vec3, 0, 0, 0> xxx;

		};

		vec2() {
			v[0] = 0;
			v[1] = 0;
		}

		vec2(float x) {
			v[0] = x;
			v[1] = x;
		}

		vec2(float x, float y) {
			v[0] = x;
			v[1] = y;
		}
	};
}

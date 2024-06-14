#pragma once

#include "./scalar.h"
#include "./vec2.h"
#include "./vec4.h"

namespace VectorLikeGLSL {

	template<typename vec_type, unsigned int i0_, unsigned int i1_, unsigned int i2_>
	struct Vector3_Swizzle {
		float v[3];
		vec_type operator=(const vec_type& vec) {
			return vec_type(v[i0_] = vec.x, v[i1_] = vec.y, v[i2_] = vec.z);
		}
		operator vec_type() {
			return vec_type(v[i0_], v[i1_], v[i2_]);
		}
	};

	struct vec3 {
		union {
			float v[3];
		};

		vec3() {
			v[0] = 0;
			v[1] = 0;
			v[2] = 0;
		}

		vec3(float a) {
			v[0] = a;
			v[1] = a;
			v[2] = a;
		}

		vec3(float a, float b, float c) {
			v[0] = a;
			v[1] = b;
			v[2] = c;
		}
	};
}

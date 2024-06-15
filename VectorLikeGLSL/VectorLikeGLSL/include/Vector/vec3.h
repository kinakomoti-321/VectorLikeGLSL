#pragma once

#include "./swizzles.h"

namespace VectorLikeGLSL {
	struct vec2;
	struct vec4;

	struct vec3 {
		union {
			float v[3];
			//Vector4_Swizzle<vec4, 0, 0, 0, 0> xxxx;
			#include "./vec3_swizzle.h"
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

#pragma once

#include "./swizzles.h"

namespace VectorLikeGLSL {

	struct vec2;
	struct vec3;

	struct vec4 {
		union {
			float v[4];
			#include "./vec4_swizzle.h"
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
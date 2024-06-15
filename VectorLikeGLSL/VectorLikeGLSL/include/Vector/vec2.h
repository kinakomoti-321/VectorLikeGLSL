#pragma once

#include "./swizzles.h"

namespace VectorLikeGLSL {

	struct vec3;
	struct vec4;

	struct vec2 {
		union {
			float v[2];
			#include "./vec2_swizzle.h"
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

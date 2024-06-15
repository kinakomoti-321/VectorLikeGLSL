#pragma once

#include "./uswizzles.h"

namespace VectorLikeGLSL {
	struct vec2;
	struct vec4;

	struct uvec3 {
		union {
			unsigned int v[3];
			#include "./uvec3_swizzle.h"
		};

		uvec3() {
			v[0] = 0;
			v[1] = 0;
			v[2] = 0;
		}
		uvec3(unsigned int x, unsigned int y, unsigned int z) {
			v[0] = x;
			v[1] = y;
			v[2] = z;
		}
	};
}

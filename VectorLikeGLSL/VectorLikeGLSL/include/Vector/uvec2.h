#pragma once

#include "./uswizzles.h"
namespace VectorLikeGLSL {
	struct uvec3;
	struct uvec4;

	struct uvec2 {
		union {
			unsigned int v[2];
			#include "./uvec2_swizzle.h"
		};
		uvec2() {
			v[0] = 0;
			v[1] = 0;
		}
		uvec2(unsigned int x, unsigned int y) {
			v[0] = x;
			v[1] = y;
		}
	};
}

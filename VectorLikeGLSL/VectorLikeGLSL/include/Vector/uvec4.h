#pragma once

#include "./uswizzles.h"
namespace VectorLikeGLSL {
	struct uvec2;
	struct uvec3;

	struct uvec4 {
		union {
			unsigned int v[4];
			#include "./uvec4_swizzle.h"
		};
		uvec4() {
			v[0] = 0;
			v[1] = 0;
			v[2] = 0;
			v[3] = 0;
		}
		uvec4(unsigned int x, unsigned int y, unsigned int z, unsigned int w) {
			v[0] = x;
			v[1] = y;
			v[2] = z;
			v[3] = w;
		}
	};

}

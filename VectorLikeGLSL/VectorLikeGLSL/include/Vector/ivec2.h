#pragma once

#include "./iswizzles.h"

namespace VectorLikeGLSL {
	struct ivec3;
	struct ivec4;

	struct ivec2 {
		union {
			int v[2];
			#include "./ivec2_swizzle.h"
		};

		ivec2() {
			v[0] = 0;
			v[1] = 0;
		}

		ivec2(int x, int y) {
			v[0] = x;
			v[1] = y;
		}
	};
}

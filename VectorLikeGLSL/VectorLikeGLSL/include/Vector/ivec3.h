#pragma once

#include "./iswizzles.h"

namespace VectorLikeGLSL {
	struct ivec2;
	struct ivec4;

	struct ivec3 {
		union {
			int v[3];
			#include "./ivec3_swizzle.h"
		};

		ivec3() {
			v[0] = 0;
			v[1] = 0;
			v[2] = 0;
		}

		ivec3(int a) {
			v[0] = a;
			v[1] = a;
			v[2] = a;
		}

		ivec3(int x, int y, int z) {
			v[0] = x;
			v[1] = y;
			v[2] = z;
		}
	};
}

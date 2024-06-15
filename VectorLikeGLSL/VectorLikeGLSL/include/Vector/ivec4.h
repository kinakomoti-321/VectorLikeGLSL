#pragma once

#include "./iswizzles.h"

namespace VectorLikeGLSL {
	struct ivec2;
	struct ivec3;

	struct ivec4 {
		union {
			int v[4];
			#include "./ivec4_swizzle.h"
		};

		ivec4() {
			v[0] = 0;
			v[1] = 0;
			v[2] = 0;
			v[3] = 0;
		}

		ivec4(int a) {
			v[0] = a;
			v[1] = a;
			v[2] = a;
			v[3] = a;
		}

		ivec4(int x, int y, int z, int w) {
			v[0] = x;
			v[1] = y;
			v[2] = z;
			v[3] = w;
		}
	};

	
}

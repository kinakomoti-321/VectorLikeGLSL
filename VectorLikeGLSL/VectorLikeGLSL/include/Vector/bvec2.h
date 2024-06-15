#pragma once
#include "./bswizzles.h"
namespace VectorLikeGLSL {
	struct bvec3;
	struct bvec4;

	struct bvec2 {
		union {
			bool v[2];

			#include "./bvec2_swizzle.h"
		};
		bvec2() {
			v[0] = false;
			v[1] = false;
		}
		bvec2(bool x, bool y) {
			v[0] = x;
			v[1] = y;
		}
	};
}

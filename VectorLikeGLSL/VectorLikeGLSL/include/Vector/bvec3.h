#pragma once
#include "./bswizzles.h"

namespace VectorLikeGLSL {
	struct vec2;
	struct vec3;
	struct vec4;

	struct ivec2;
	struct ivec3;
	struct ivec4;

	struct uvec2;
	struct uvec3;
	struct uvec4;

	struct bvec2;
	struct bvec3;
	struct bvec4;

	struct bvec3 {
		union {
			bool v[3];
			#include "./bvec3_swizzle.h"
		};

		bvec3() {
			v[0] = false;
			v[1] = false;
			v[2] = false;
		}

		bvec3(bool a) {
			v[0] = a;
			v[1] = a;
			v[2] = a;
		}

		bvec3(bool x, bool y, bool z) {
			v[0] = x;
			v[1] = y;
			v[2] = z;
		}
	};
}

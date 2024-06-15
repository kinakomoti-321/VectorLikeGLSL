#pragma once
#include "./bswizzles.h"
namespace VectorLikeGLSL {
	struct bvec2;
	struct bvec3;
	
	struct bvec4 {
		union
		{
			bool v[4];
			#include "./bvec4_swizzle.h"	
		};

		bvec4() {
			v[0] = false;
			v[1] = false;
			v[2] = false;
			v[3] = false;
		}

		bvec4(bool a) {
			v[0] = a;
			v[1] = a;
			v[2] = a;
			v[3] = a;
		}

		bvec4(bool x, bool y, bool z, bool w) {
			v[0] = x;
			v[1] = y;
			v[2] = z;
			v[3] = w;
		}
	};
}

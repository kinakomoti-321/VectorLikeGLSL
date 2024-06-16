#pragma once

#include "../Vector/vector.h"

namespace VectorLikeGLSL {
	struct mat2 {
		vec2 m[2];

		mat2(const float a) {
			m[0] = vec2(a);
			m[1] = vec2(a);
		}

		mat2(const float a, const float b, const float c, const float d) {
			m[0] = vec2(a, b);
			m[1] = vec2(c, d);
		}

		mat2(const vec2& a, const vec2& b) {
			m[0] = a;
			m[1] = b;
		}

		mat2(const mat2& a) {
			m[0] = a.m[0];
			m[1] = a.m[1];
		}
	};

}

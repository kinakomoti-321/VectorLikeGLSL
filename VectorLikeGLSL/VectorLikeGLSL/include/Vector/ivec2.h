#pragma once

#include "./iswizzles.h"

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

	inline ivec2 operator+(const ivec2& a, const ivec2& b) {
		return ivec2(a.x + b.x, a.y + b.y);
	}

	inline ivec2 operator-(const ivec2& a, const ivec2& b) {
		return ivec2(a.x - b.x, a.y - b.y);
	}

	inline ivec2 operator*(const ivec2& a, const ivec2& b) {
		return ivec2(a.x * b.x, a.y * b.y);
	}

	inline ivec2 operator/(const ivec2& a, const ivec2& b) {
		return ivec2(a.x / b.x, a.y / b.y);
	}

	inline ivec2 operator%(const ivec2& a, const ivec2& b) {
		return ivec2(a.x % b.x, a.y % b.y);
	}

	inline ivec2 operator+(const ivec2& a, const int b) {
		return ivec2(a.x + b, a.y + b);
	}

	inline ivec2 operator+(const int a, const ivec2& b) {
		return ivec2(a + b.x, a + b.y);
	}

		
	inline ivec2 operator-(const ivec2& a, const int b) {
		return ivec2(a.x - b, a.y - b);
	}

	inline ivec2 operator-(const int a, const ivec2& b) {
		return ivec2(a - b.x, a - b.y);
	}

	inline ivec2 operator*(const ivec2& a, const int b) {
		return ivec2(a.x * b, a.y * b);
	}

	inline ivec2 operator*(const int a, const ivec2& b) {
		return ivec2(a * b.x, a * b.y);
	}

	inline ivec2 operator/(const ivec2& a, const int b) {
		return ivec2(a.x / b, a.y / b);
	}

	inline ivec2 operator/(const int a, const ivec2& b) {
		return ivec2(a / b.x, a / b.y);
	}

	inline ivec2 operator%(const ivec2& a, const int b) {
		return ivec2(a.x % b, a.y % b);
	}

	inline ivec2 operator%(const int a, const ivec2& b) {
		return ivec2(a % b.x, a % b.y);
	}

	inline ivec2 operator-(const ivec2& a) {
		return ivec2(-a.x, -a.y);
	}
}

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

	inline uvec2 operator+(const uvec2& a, const uvec2& b) {
		return uvec2(a.x + b.x, a.y + b.y);
	}

	inline uvec2 operator-(const uvec2& a, const uvec2& b) {
		return uvec2(a.x - b.x, a.y - b.y);
	}

	inline uvec2 operator*(const uvec2& a, const uvec2& b) {
		return uvec2(a.x * b.x, a.y * b.y);
	}

	inline uvec2 operator/(const uvec2& a, const uvec2& b) {
		return uvec2(a.x / b.x, a.y / b.y);
	}

	inline uvec2 operator%(const uvec2& a, const uvec2& b) {
		return uvec2(a.x % b.x, a.y % b.y);
	}

	inline uvec2 operator+(const uvec2& a, const unsigned int b) {
		return uvec2(a.x + b, a.y + b);
	}

	inline uvec2 operator+(const unsigned int a, const uvec2& b) {
		return uvec2(a + b.x, a + b.y);
	}

	inline uvec2 operator-(const uvec2& a, const unsigned int b) {
		return uvec2(a.x - b, a.y - b);
	}

	inline uvec2 operator-(const unsigned int a, const uvec2& b) {
		return uvec2(a - b.x, a - b.y);
	}

	inline uvec2 operator*(const uvec2& a, const unsigned int b) {
		return uvec2(a.x * b, a.y * b);
	}

	inline uvec2 operator*(const unsigned int a, const uvec2& b) {
		return uvec2(a * b.x, a * b.y);
	}

	inline uvec2 operator/(const uvec2& a, const unsigned int b) {
		return uvec2(a.x / b, a.y / b);
	}

	inline uvec2 operator/(const unsigned int a, const uvec2& b) {
		return uvec2(a / b.x, a / b.y);
	}

	inline uvec2 operator%(const uvec2& a, const unsigned int b) {
		return uvec2(a.x % b, a.y % b);
	}

	inline uvec2 operator%(const unsigned int a, const uvec2& b) {
		return uvec2(a % b.x, a % b.y);
	}

	inline uvec2 operator-(const uvec2& a) {
		return uvec2(-a.x, -a.y);
	}
}

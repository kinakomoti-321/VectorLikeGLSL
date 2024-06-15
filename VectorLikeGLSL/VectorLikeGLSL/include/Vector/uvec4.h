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
	
	inline uvec4 operator+(const uvec4& a, const uvec4& b) {
		return uvec4(a.x + b.x, a.y + b.y, a.z + b.z, a.w + b.w);
	}

	inline uvec4 operator-(const uvec4& a, const uvec4& b) {
		return uvec4(a.x - b.x, a.y - b.y, a.z - b.z, a.w - b.w);
	}

	inline uvec4 operator*(const uvec4& a, const uvec4& b) {
		return uvec4(a.x * b.x, a.y * b.y, a.z * b.z, a.w * b.w);
	}

	inline uvec4 operator/(const uvec4& a, const uvec4& b) {
		return uvec4(a.x / b.x, a.y / b.y, a.z / b.z, a.w / b.w);
	}

	inline uvec4 operator%(const uvec4& a, const uvec4& b) {
		return uvec4(a.x % b.x, a.y % b.y, a.z % b.z, a.w % b.w);
	}

	inline uvec4 operator+(const uvec4& a, const unsigned int b) {
		return uvec4(a.x + b, a.y + b, a.z + b, a.w + b);
	}

	inline uvec4 operator+(const unsigned int a, const uvec4& b) {
		return uvec4(a + b.x, a + b.y, a + b.z, a + b.w);
	}

	inline uvec4 operator-(const uvec4& a, const unsigned int b) {
		return uvec4(a.x - b, a.y - b, a.z - b, a.w - b);
	}

	inline uvec4 operator-(const unsigned int a, const uvec4& b) {
		return uvec4(a - b.x, a - b.y, a - b.z, a - b.w);
	}

	inline uvec4 operator*(const uvec4& a, const unsigned int b) {
		return uvec4(a.x * b, a.y * b, a.z * b, a.w * b);
	}

	inline uvec4 operator*(const unsigned int a, const uvec4& b) {
		return uvec4(a * b.x, a * b.y, a * b.z, a * b.w);
	}

	inline uvec4 operator/(const uvec4& a, const unsigned int b) {
		return uvec4(a.x / b, a.y / b, a.z / b, a.w / b);
	}

	inline uvec4 operator/(const unsigned int a, const uvec4& b) {
		return uvec4(a / b.x, a / b.y, a / b.z, a / b.w);
	}

	inline uvec4 operator%(const uvec4& a, const unsigned int b) {
		return uvec4(a.x % b, a.y % b, a.z % b, a.w % b);
	}

	inline uvec4 operator%(const unsigned int a, const uvec4& b) {
		return uvec4(a % b.x, a % b.y, a % b.z, a % b.w);
	}
	
	inline uvec4 operator-(const uvec4& a) {
		return uvec4(-a.x, -a.y, -a.z, -a.w);
	}
}

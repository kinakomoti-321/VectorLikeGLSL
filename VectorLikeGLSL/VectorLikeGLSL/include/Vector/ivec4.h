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

	inline ivec4 operator+(const ivec4& a, const ivec4& b) {
		return ivec4(a.x + b.x, a.y + b.y, a.z + b.z, a.w + b.w);
	}

	inline ivec4 operator-(const ivec4& a, const ivec4& b) {
		return ivec4(a.x - b.x, a.y - b.y, a.z - b.z, a.w - b.w);
	}

	inline ivec4 operator*(const ivec4& a, const ivec4& b) {
		return ivec4(a.x * b.x, a.y * b.y, a.z * b.z, a.w * b.w);
	}

	inline ivec4 operator/(const ivec4& a, const ivec4& b) {
		return ivec4(a.x / b.x, a.y / b.y, a.z / b.z, a.w / b.w);
	}

	inline ivec4 operator%(const ivec4& a, const ivec4& b) {
		return ivec4(a.x % b.x, a.y % b.y, a.z % b.z, a.w % b.w);
	}
	
	inline ivec4 operator+(const ivec4& a, const int b) {
		return ivec4(a.x + b, a.y + b, a.z + b, a.w + b);
	}
	inline ivec4 operator+(const int a, const ivec4& b) {
		return ivec4(a + b.x, a + b.y, a + b.z, a + b.w);
	}

	inline ivec4 operator-(const ivec4& a, const int b) {
		return ivec4(a.x - b, a.y - b, a.z - b, a.w - b);
	}
	inline ivec4 operator-(const int a, const ivec4& b) {
		return ivec4(a - b.x, a - b.y, a - b.z, a - b.w);
	}

	inline ivec4 operator*(const ivec4& a, const int b) {
		return ivec4(a.x * b, a.y * b, a.z * b, a.w * b);
	}
	inline ivec4 operator*(const int a, const ivec4& b) {
		return ivec4(a * b.x, a * b.y, a * b.z, a * b.w);
	}

	inline ivec4 operator/(const ivec4& a, const int b) {
		return ivec4(a.x / b, a.y / b, a.z / b, a.w / b);
	}
	inline ivec4 operator/(const int a, const ivec4& b) {
		return ivec4(a / b.x, a / b.y, a / b.z, a / b.w);
	}

	inline ivec4 operator%(const ivec4& a, const int b) {
		return ivec4(a.x % b, a.y % b, a.z % b, a.w % b);
	}
	inline ivec4 operator%(const int a, const ivec4& b) {
		return ivec4(a % b.x, a % b.y, a % b.z, a % b.w);
	}

	inline ivec4 operator-(const ivec4& a) {
		return ivec4(-a.x, -a.y, -a.z, -a.w);
	}

}

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

	inline ivec3 operator+(const ivec3& a, const ivec3& b) {
		return ivec3(a.x + b.x, a.y + b.y, a.z + b.z);
	}

	inline ivec3 operator-(const ivec3& a, const ivec3& b) {
		return ivec3(a.x - b.x, a.y - b.y, a.z - b.z);
	}


	inline ivec3 operator*(const ivec3& a, const ivec3& b) {
		return ivec3(a.x * b.x, a.y * b.y, a.z * b.z);
	}

	inline ivec3 operator/(const ivec3& a, const ivec3& b) {
		return ivec3(a.x / b.x, a.y / b.y, a.z / b.z);
	}
	
	inline ivec3 operator%(const ivec3& a, const ivec3& b) {
		return ivec3(a.x % b.x, a.y % b.y, a.z % b.z);
	}

	inline ivec3 operator+(const ivec3& a, const int b) {
		return ivec3(a.x + b, a.y + b, a.z + b);
	}

	inline ivec3 operator+(const int a, const ivec3& b) {
		return ivec3(a + b.x, a + b.y, a + b.z);
	}

	inline ivec3 operator-(const ivec3& a, const int b) {
		return ivec3(a.x - b, a.y - b, a.z - b);
	}

	inline ivec3 operator-(const int a, const ivec3& b) {
		return ivec3(a - b.x, a - b.y, a - b.z);
	}

	inline ivec3 operator*(const ivec3& a, const int b) {
		return ivec3(a.x * b, a.y * b, a.z * b);
	}

	inline ivec3 operator*(const int a, const ivec3& b) {
		return ivec3(a * b.x, a * b.y, a * b.z);
	}

	inline ivec3 operator/(const ivec3& a, const int b) {
		return ivec3(a.x / b, a.y / b, a.z / b);
	}

	inline ivec3 operator/(const int a, const ivec3& b) {
		return ivec3(a / b.x, a / b.y, a / b.z);
	}

	inline ivec3 operator%(const ivec3& a, const int b) {
		return ivec3(a.x % b, a.y % b, a.z % b);
	}
	inline ivec3 operator%(const int a, const ivec3& b) {
		return ivec3(a % b.x, a % b.y, a % b.z);
	}

	inline ivec3 operator-(const ivec3& a) {
		return ivec3(-a.x, -a.y, -a.z);
	}


}

#pragma once

#include "./uswizzles.h"
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

	struct uvec3 {
		union {
			unsigned int v[3];
#include "./uvec3_swizzle.h"
		};

		uvec3() {
			v[0] = 0;
			v[1] = 0;
			v[2] = 0;
		}
		uvec3(unsigned int x, unsigned int y, unsigned int z) {
			v[0] = x;
			v[1] = y;
			v[2] = z;
		}
	};

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
	inline uvec3 operator+(const uvec3& a, const uvec3& b) {
		return uvec3(a.x + b.x, a.y + b.y, a.z + b.z);
	}

	inline uvec3 operator-(const uvec3& a, const uvec3& b) {
		return uvec3(a.x - b.x, a.y - b.y, a.z - b.z);
	}

	inline uvec3 operator*(const uvec3& a, const uvec3& b) {
		return uvec3(a.x * b.x, a.y * b.y, a.z * b.z);
	}

	inline uvec3 operator/(const uvec3& a, const uvec3& b) {
		return uvec3(a.x / b.x, a.y / b.y, a.z / b.z);
	}

	inline uvec3 operator%(const uvec3& a, const uvec3& b) {
		return uvec3(a.x % b.x, a.y % b.y, a.z % b.z);
	}

	inline uvec3 operator+(const uvec3& a, const unsigned int b) {
		return uvec3(a.x + b, a.y + b, a.z + b);
	}

	inline uvec3 operator+(const unsigned int a, const uvec3& b) {
		return uvec3(a + b.x, a + b.y, a + b.z);
	}

	inline uvec3 operator-(const uvec3& a, const unsigned int b) {
		return uvec3(a.x - b, a.y - b, a.z - b);
	}

	inline uvec3 operator-(const unsigned int a, const uvec3& b) {
		return uvec3(a - b.x, a - b.y, a - b.z);
	}

	inline uvec3 operator*(const uvec3& a, const unsigned int b) {
		return uvec3(a.x * b, a.y * b, a.z * b);
	}

	inline uvec3 operator*(const unsigned int a, const uvec3& b) {
		return uvec3(a * b.x, a * b.y, a * b.z);
	}

	inline uvec3 operator/(const uvec3& a, const unsigned int b) {
		return uvec3(a.x / b, a.y / b, a.z / b);
	}

	inline uvec3 operator/(const unsigned int a, const uvec3& b) {
		return uvec3(a / b.x, a / b.y, a / b.z);
	}

	inline uvec3 operator%(const uvec3& a, const unsigned int b) {
		return uvec3(a.x % b, a.y % b, a.z % b);
	}

	inline uvec3 operator%(const unsigned int a, const uvec3& b) {
		return uvec3(a % b.x, a % b.y, a % b.z);
	}
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
}

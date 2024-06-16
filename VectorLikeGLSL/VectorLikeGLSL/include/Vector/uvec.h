#pragma once

#include <iostream>
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
		
		uvec2(const uvec2& a) {
			v[0] = a.v[0];
			v[1] = a.v[1];
		}

		uvec2(const uvec3& a);
		uvec2(const uvec4& a);

		uvec2(const vec2& a);
		uvec2(const vec3& a);
		uvec2(const vec4& a);

		uvec2(const ivec2& a);
		uvec2(const ivec3& a);
		uvec2(const ivec4& a);

		uvec2(const bvec2& a);
		uvec2(const bvec3& a);
		uvec2(const bvec4& a);
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

		uvec3(const uvec3& a) {
			v[0] = a.v[0];
			v[1] = a.v[1];
			v[2] = a.v[2];
		}

		uvec3(const uvec2& a, unsigned int b);
		uvec3(unsigned int a, const uvec2& b);
		uvec3(const uvec4& a);

		uvec3(const vec2& a, unsigned int z);
		uvec3(unsigned int x, const vec2& b);
		uvec3(const vec3& a);
		uvec3(const vec4& a);

		uvec3(const ivec2& a,unsigned int z);
		uvec3(unsigned int x, const ivec2& b);
		uvec3(const ivec3& a);
		uvec3(const ivec4& a);

		uvec3(const bvec2& a,unsigned int z);
		uvec3(unsigned int x, const bvec2& b);
		uvec3(const bvec3& a);
		uvec3(const bvec4& a);

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

		uvec4(const uvec4& a) {
			v[0] = a.v[0];
			v[1] = a.v[1];
			v[2] = a.v[2];
			v[3] = a.v[3];
		}

		uvec4(const uvec2& a, unsigned int z, unsigned int w);
		uvec4(unsigned int x, const uvec2& b, unsigned int w);
		uvec4(unsigned int x, unsigned int y, const uvec2& b);
		uvec4(const uvec2& a, const uvec2& b);
		uvec4(const uvec3& a, unsigned int w);
		uvec4(unsigned int x, const uvec3& b);

		uvec4(const vec2& a, unsigned int z, unsigned int w);
		uvec4(unsigned int x, const vec2& b, unsigned int w);
		uvec4(unsigned int x, unsigned int y, const vec2& b);
		uvec4(const vec2& a, const vec2& b);
		uvec4(const vec3& a, unsigned int w);
		uvec4(const unsigned int a, const vec3& b);
		uvec4(const vec4& a);

		uvec4(const ivec2& a, unsigned int z, unsigned int w);
		uvec4(unsigned int x, const ivec2& b, unsigned int w);
		uvec4(unsigned int x, unsigned int y, const ivec2& b);
		uvec4(const ivec2& a, const ivec2& b);
		uvec4(const ivec3& a, unsigned int w);
		uvec4(unsigned int a, const ivec3& b);
		uvec4(const ivec4& a);

		uvec4(const bvec2& a, unsigned int z, unsigned int w);
		uvec4(unsigned int x, const bvec2& b, unsigned int w);
		uvec4(unsigned int x, unsigned int y, const bvec2& b);
		uvec4(const bvec2& a, const bvec2& b);
		uvec4(const bvec3& a, unsigned int w);
		uvec4(unsigned int a, const bvec3& b);
		uvec4(const bvec4& a);


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
	
	inline std::ostream& operator<< (std::ostream& os, const uvec2& a) {
		os << "(" << a.x << ", " << a.y << ")";
		return os;
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
	
	inline std::ostream& operator<< (std::ostream& os, const uvec3& a) {
		os << "(" << a.x << ", " << a.y << ", " << a.z << ")";
		return os;
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

	inline std::ostream& operator<< (std::ostream& os, const uvec4& a) {
		os << "(" << a.x << ", " << a.y << ", " << a.z << ", " << a.w << ")";
		return os;
	}

}

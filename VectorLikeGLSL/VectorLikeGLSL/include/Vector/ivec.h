#pragma once
#include <iostream>
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
		
		ivec2(const ivec2& a) {
			v[0] = a.v[0];
			v[1] = a.v[1];
		}

		ivec2(const ivec3& a);
		ivec2(const ivec4& a);

		ivec2(const vec2& a);
		ivec2(const vec3& a);
		ivec2(const vec4& a);

		ivec2(const uvec2& a);
		ivec2(const uvec3& a);
		ivec2(const uvec4& a);

		ivec2(const bvec2& a);
		ivec2(const bvec3& a);
		ivec2(const bvec4& a);
	};


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

		ivec3(const ivec3& a) {
			v[0] = a.v[0];
			v[1] = a.v[1];
			v[2] = a.v[2];
		}

		ivec3(const ivec2& a, int z);
		ivec3(int x, const ivec2& b);
		ivec3(const ivec4& a);

		ivec3(const vec2& a, int z);
		ivec3(int x, const vec2& b);
		ivec3(const vec3& a);
		ivec3(const vec4& a);

		ivec3(const uvec2& a, int z);
		ivec3(int x, const uvec2& b);
		ivec3(const uvec3& a);
		ivec3(const uvec4& a);

		ivec3(const bvec2& a, int z);
		ivec3(int x, const bvec2& b);
		ivec3(const bvec3& a);
		ivec3(const bvec4& a);
	};

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
		ivec4(const ivec4& a) {
			v[0] = a.v[0];
			v[1] = a.v[1];
			v[2] = a.v[2];
			v[3] = a.v[3];
		}

		ivec4(const ivec2& a, int z, int w);
		ivec4(int x, const ivec2& b, int w);
		ivec4(int x, int y, const ivec2& c);
		ivec4(const ivec2& a, const ivec2& b);
		ivec4(const ivec3& a, int w);
		ivec4(int x, const ivec3& b);

		ivec4(const vec2& a, int z, int w);
		ivec4(int x, const vec2& b, int w);
		ivec4(int x, int y, const vec2& c);
		ivec4(const vec2& a, const vec2& b);
		ivec4(const vec3& a, int w);
		ivec4(int x, const vec3& b);
		ivec4(const vec4& a);

		ivec4(const uvec2& a, int z, int w);
		ivec4(int x, const uvec2& b, int w);
		ivec4(int x, int y, const uvec2& c);
		ivec4(const uvec2& a, const uvec2& b);
		ivec4(const uvec3& a, int w);
		ivec4(int x, const uvec3& b);
		ivec4(const uvec4& a);

		ivec4(const bvec2& a, int z, int w);
		ivec4(int x, const bvec2& b, int w);
		ivec4(int x, int y, const bvec2& c);
		ivec4(const bvec2& a, const bvec2& b);
		ivec4(const bvec3& a, int w);
		ivec4(int x, const bvec3& b);
		ivec4(const bvec4& a);
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

	inline std::ostream& operator<< (std::ostream& os, const ivec2& a) {
		os << "(" << a.x << ", " << a.y << ")";
		return os;
	}

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

	inline std::ostream& operator<< (std::ostream& os, const ivec3& a) {
		os << "(" << a.x << ", " << a.y << ", " << a.z << ")";
		return os;
	}

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

	inline std::ostream& operator<< (std::ostream& os, const ivec4& a) {
		os << "(" << a.x << ", " << a.y << ", " << a.z << ", " << a.w << ")";
		return os;
	}
}

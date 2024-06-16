#pragma once

#include "./swizzles.h"

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

	struct vec2 {
		union {
			float v[2];
#include "./vec2_swizzle.h"
		};

		vec2() {
			v[0] = 0;
			v[1] = 0;
		}

		vec2(float x) {
			v[0] = x;
			v[1] = x;
		}

		vec2(float x, float y) {
			v[0] = x;
			v[1] = y;
		}

		vec2(const vec2& a) {
			v[0] = a.v[0];
			v[1] = a.v[1];
		}

		vec2(const vec3& a);
		vec2(const vec4& a);

		vec2(const ivec2& a);
		vec2(const ivec3& a);
		vec2(const ivec4& a);

		vec2(const uvec2& a);
		vec2(const uvec3& a);
		vec2(const uvec4& a);

		vec2(const bvec2& a);
		vec2(const bvec3& a);
		vec2(const bvec4& a);
	};

	struct vec3 {
		union {
			float v[3];
#include "./vec3_swizzle.h"
		};

		vec3() {
			v[0] = 0;
			v[1] = 0;
			v[2] = 0;
		}

		vec3(float a) {
			v[0] = a;
			v[1] = a;
			v[2] = a;
		}

		vec3(float a, float b, float c) {
			v[0] = a;
			v[1] = b;
			v[2] = c;
		}
		
		vec3(const vec2& a, float b);
		vec3(const float a, const vec2& b);
		vec3(const vec4& a);

		vec3(const ivec2& a, float b);
		vec3(const float a, const ivec2& b);
		vec3(const ivec3& a);
		vec3(const ivec4& a);

		vec3(const uvec2& a, float b);
		vec3(const float a, const uvec2& b);
		vec3(const uvec3& a);
		vec3(const uvec4& a);

		vec3(const bvec2& a, float b);
		vec3(float a, const bvec2& b);
		vec3(const bvec3& a);
		vec3(const bvec4& a);
	};

	struct vec4 {
		union {
			float v[4];
#include "./vec4_swizzle.h"
		};

		vec4() {
			v[0] = 0;
			v[1] = 0;
			v[2] = 0;
			v[3] = 0;
		}

		vec4(float a) {
			v[0] = a;
			v[1] = a;
			v[2] = a;
			v[3] = a;
		}

		vec4(float a, float b, float c, float d) {
			v[0] = a;
			v[1] = b;
			v[2] = c;
			v[3] = d;
		}

		vec4(const vec4& a) {
			v[0] = a.v[0];
			v[1] = a.v[1];
			v[2] = a.v[2];
			v[3] = a.v[3];
		}
		vec4(const vec2& a, float b, float c);
		vec4(float a, const vec2& b, float c);
		vec4(float a, float b, const vec2& c);
		vec4(const vec2& a, const vec2& b);
		vec4(const vec3& a, float b);
		vec4(float a, const vec3& b);

		vec4(const ivec2& a, float b, float c);
		vec4(float a, const ivec2& b, float c);
		vec4(float a, float b, const ivec2& c);
		vec4(const ivec2& a, const ivec2& b);
		vec4(const ivec3& a, float b);
		vec4(float a, const ivec3& b);
		vec4(const ivec4& a);

		vec4(const uvec2& a, float b, float c);
		vec4(float a, const uvec2& b, float c);
		vec4(float a, float b, const uvec2& c);
		vec4(const uvec2& a, const uvec2& b);
		vec4(const uvec3& a, float b);
		vec4(float a, const uvec3& b);
		vec4(const uvec4& a);

		vec4(const bvec2& a, float b, float c);
		vec4(float a, const bvec2& b, float c);
		vec4(float a, float b, const bvec2& c);
		vec4(const bvec2& a, const bvec2& b);
		vec4(const bvec3& a, float b);
		vec4(float a, const bvec3& b);
		vec4(const bvec4& a);
	};


	//--------------------------------------------------------------------------------
	//Operators
	//--------------------------------------------------------------------------------
	inline vec2 operator+(const vec2& a, const vec2& b) {
		return vec2(a.x + b.x, a.y + b.y);
	}

	inline vec2 operator-(const vec2& a, const vec2& b) {
		return vec2(a.x - b.x, a.y - b.y);
	}

	inline vec2 operator*(const vec2& a, const vec2& b) {
		return vec2(a.x * b.x, a.y * b.y);
	}

	inline vec2 operator/(const vec2& a, const vec2& b) {
		return vec2(a.x / b.x, a.y / b.y);
	}

	inline vec2 operator+(const vec2& a, const float b) {
		return vec2(a.x + b, a.y + b);
	}

	inline vec2 operator+(const float a, const vec2& b) {
		return vec2(a + b.x, a + b.y);
	}

	inline vec2 operator-(const vec2& a, const float b) {
		return vec2(a.x - b, a.y - b);
	}

	inline vec2 operator-(const float a, const vec2& b) {
		return vec2(a - b.x, a - b.y);
	}

	inline vec2 operator*(const vec2& a, const float b) {
		return vec2(a.x * b, a.y * b);
	}

	inline vec2 operator*(const float a, const vec2& b) {
		return vec2(a * b.x, a * b.y);
	}

	inline vec2 operator/(const vec2& a, const float b) {
		return vec2(a.x / b, a.y / b);
	}

	inline vec2 operator/(const float a, const vec2& b) {
		return vec2(a / b.x, a / b.y);
	}

	inline vec2 operator-(const vec2& a) {
		return vec2(-a.x, -a.y);
	}

	//--------------------------------------------------------------------------------
	//Operators
	//--------------------------------------------------------------------------------
	inline vec3 operator+(const vec3& a, const vec3& b) {
		return vec3(a.x + b.x, a.y + b.y, a.z + b.z);
	}

	inline vec3 operator-(const vec3& a, const vec3& b) {
		return vec3(a.x - b.x, a.y - b.y, a.z - b.z);
	}

	inline vec3 operator*(const vec3& a, const vec3& b) {
		return vec3(a.x * b.x, a.y * b.y, a.z * b.z);
	}

	inline vec3 operator/(const vec3& a, const vec3& b) {
		return vec3(a.x / b.x, a.y / b.y, a.z / b.z);
	}

	inline vec3 operator+(const vec3& a, const float b) {
		return vec3(a.x + b, a.y + b, a.z + b);
	}

	inline vec3 operator+(const float a, const vec3& b) {
		return vec3(a + b.x, a + b.y, a + b.z);
	}

	inline vec3 operator-(const vec3& a, const float b) {
		return vec3(a.x - b, a.y - b, a.z - b);
	}

	inline vec3 operator-(const float a, const vec3& b) {
		return vec3(a - b.x, a - b.y, a - b.z);
	}

	inline vec3 operator*(const vec3& a, const float b) {
		return vec3(a.x * b, a.y * b, a.z * b);
	}

	inline vec3 operator*(const float a, const vec3& b) {
		return vec3(a * b.x, a * b.y, a * b.z);
	}

	inline vec3 operator/(const vec3& a, const float b) {
		return vec3(a.x / b, a.y / b, a.z / b);
	}

	inline vec3 operator/(const float a, const vec3& b) {
		return vec3(a / b.x, a / b.y, a / b.z);
	}

	inline vec3 operator-(const vec3& a) {
		return vec3(-a.x, -a.y, -a.z);
	}

	//--------------------------------------------------------------------------------
//Operators
//--------------------------------------------------------------------------------
	inline vec4 operator+(const vec4& a, const vec4& b) {
		return vec4(a.x + b.x, a.y + b.y, a.z + b.z, a.w + b.w);
	}

	inline vec4 operator-(const vec4& a, const vec4& b) {
		return vec4(a.x - b.x, a.y - b.y, a.z - b.z, a.w - b.w);
	}

	inline vec4 operator*(const vec4& a, const vec4& b) {
		return vec4(a.x * b.x, a.y * b.y, a.z * b.z, a.w * b.w);
	}

	inline vec4 operator/(const vec4& a, const vec4& b) {
		return vec4(a.x / b.x, a.y / b.y, a.z / b.z, a.w / b.w);
	}

	inline vec4 operator+(const vec4& a, const float b) {
		return vec4(a.x + b, a.y + b, a.z + b, a.w + b);
	}

	inline vec4 operator+(const float a, const vec4& b) {
		return vec4(a + b.x, a + b.y, a + b.z, a + b.w);
	}

	inline vec4 operator-(const vec4& a, const float b) {
		return vec4(a.x - b, a.y - b, a.z - b, a.w - b);
	}

	inline vec4 operator-(const float a, const vec4& b) {
		return vec4(a - b.x, a - b.y, a - b.z, a - b.w);
	}

	inline vec4 operator*(const vec4& a, const float b) {
		return vec4(a.x * b, a.y * b, a.z * b, a.w * b);
	}

	inline vec4 operator*(const float a, const vec4& b) {
		return vec4(a * b.x, a * b.y, a * b.z, a * b.w);
	}

	inline vec4 operator/(const vec4& a, const float b) {
		return vec4(a.x / b, a.y / b, a.z / b, a.w / b);
	}

	inline vec4 operator/(const float a, const vec4& b) {
		return vec4(a / b.x, a / b.y, a / b.z, a / b.w);
	}

	inline vec4 operator-(const vec4& a) {
		return vec4(-a.x, -a.y, -a.z, -a.w);
	}

}

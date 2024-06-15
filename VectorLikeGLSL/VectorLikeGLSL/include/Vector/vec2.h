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
}

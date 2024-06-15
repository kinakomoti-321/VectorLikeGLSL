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

	struct vec3 {
		union {
			float v[3];
			//Vector4_Swizzle<vec4, 0, 0, 0, 0> xxxx;
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
	};
	
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

}

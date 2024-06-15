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
		
	};
	
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
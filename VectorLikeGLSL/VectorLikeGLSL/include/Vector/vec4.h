#pragma once

#include "./swizzles.h"

namespace VectorLikeGLSL {

	struct vec2;
	struct vec3;

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
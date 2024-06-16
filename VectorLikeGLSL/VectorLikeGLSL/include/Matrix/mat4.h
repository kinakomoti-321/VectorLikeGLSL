#pragma once

#include "../Vector/vector.h"

namespace VectorLikeGLSL {
	struct mat2;
	struct mat3;
	struct mat4;
	
	struct mat4 {
		vec4 m[4];

		mat4(const float a) {
			m[0] = vec4(a);
			m[1] = vec4(a);
			m[2] = vec4(a);
			m[3] = vec4(a);
		}

		mat4(
			const float a, const float b, const float c, const float d, 
			const float e, const float f, const float g, const float h, 
			const float i, const float j, const float k, const float l, 
			const float mm, const float n, const float o, const float p
		) {
			m[0] = vec4(a, b, c, d);
			m[1] = vec4(e, f, g, h);
			m[2] = vec4(i, j, k, l);
			m[3] = vec4(mm, n, o, p);
		}

		mat4(const vec4& a, const vec4& b, const vec4& c, const vec4& d) {
			m[0] = a;
			m[1] = b;
			m[2] = c;
			m[3] = d;
		}

		mat4(const mat4& a) {
			m[0] = a.m[0];
			m[1] = a.m[1];
			m[2] = a.m[2];
			m[3] = a.m[3];
		}

		mat4(const mat2& a);
		mat4(const mat3& b);
	};

	inline mat4 operator +(const mat4& a, const mat4& b) {
		return mat4(a.m[0] + b.m[0], a.m[1] + b.m[1], a.m[2] + b.m[2], a.m[3] + b.m[3]);
	}

	inline mat4 operator -(const mat4& a, const mat4& b) {
		return mat4(a.m[0] - b.m[0], a.m[1] - b.m[1], a.m[2] - b.m[2], a.m[3] - b.m[3]);
	}

	inline mat4 operator *(const mat4& a, const mat4& b) {
		return mat4(
			a.m[0] * b.m[0].x + a.m[1] * b.m[0].y + a.m[2] * b.m[0].z + a.m[3] * b.m[0].w,
			a.m[0] * b.m[1].x + a.m[1] * b.m[1].y + a.m[2] * b.m[1].z + a.m[3] * b.m[1].w,
			a.m[0] * b.m[2].x + a.m[1] * b.m[2].y + a.m[2] * b.m[2].z + a.m[3] * b.m[2].w,
			a.m[0] * b.m[3].x + a.m[1] * b.m[3].y + a.m[2] * b.m[3].z + a.m[3] * b.m[3].w
		);
	}

	inline mat4 operator *(const mat4& a, const float b) {
		return mat4(a.m[0] * b, a.m[1] * b, a.m[2] * b, a.m[3] * b);
	}

	inline mat4 operator *(const float a, const mat4& b) {
		return mat4(a * b.m[0], a * b.m[1], a * b.m[2], a * b.m[3]);
	}

	inline mat4 operator /(const mat4& a, const float b) {
		return mat4(a.m[0] / b, a.m[1] / b, a.m[2] / b, a.m[3] / b);
	}

	inline mat4 operator /(const float a, const mat4& b) {
		return mat4(a / b.m[0], a / b.m[1], a / b.m[2], a / b.m[3]);
	}	

}

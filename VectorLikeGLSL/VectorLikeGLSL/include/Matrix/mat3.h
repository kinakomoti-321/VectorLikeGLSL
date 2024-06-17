#pragma once

#include "../Vector/vector.h"

namespace VectorLikeGLSL {
	struct mat2;
	struct mat3;
	struct mat4;
	
	struct mat3 {
		vec3 m[3];

		mat3(const float a) {
			m[0] = vec3(a);
			m[1] = vec3(a);
			m[2] = vec3(a);
		}

		mat3(const float a, const float b, const float c, const float d, const float e, const float f, const float g, const float h, const float i) {
			m[0] = vec3(a, b, c);
			m[1] = vec3(d, e, f);
			m[2] = vec3(g, h, i);
		}

		mat3(const vec3& a, const vec3& b, const vec3& c) {
			m[0] = a;
			m[1] = b;
			m[2] = c;
		}

		mat3(const mat3& a) {
			m[0] = a.m[0];
			m[1] = a.m[1];
			m[2] = a.m[2];
		}
		
		mat3(const mat2& a);
		mat3(const mat4& b);


		vec3 operator[](const int i) const {
			return m[i];
		}

		vec3& operator[](const int i) {
			return m[i];
		}

		mat3& operator+=(const mat3& a) {
			m[0] += a.m[0];
			m[1] += a.m[1];
			m[2] += a.m[2];
			return *this;
		}

		mat3& operator-=(const mat3& a) {
			m[0] -= a.m[0];
			m[1] -= a.m[1];
			m[2] -= a.m[2];
			return *this;
		}


	};
	
	inline mat3 operator +(const mat3& a, const mat3& b) {
		return mat3(a.m[0] + b.m[0], a.m[1] + b.m[1], a.m[2] + b.m[2]);
	}

	inline mat3 operator -(const mat3& a, const mat3& b) {
		return mat3(a.m[0] - b.m[0], a.m[1] - b.m[1], a.m[2] - b.m[2]);
	}

	inline mat3 operator *(const mat3& a, const mat3& b) {
		return mat3(
			a.m[0] * b.m[0].x + a.m[1] * b.m[0].y + a.m[2] * b.m[0].z,
			a.m[0] * b.m[1].x + a.m[1] * b.m[1].y + a.m[2] * b.m[1].z,
			a.m[0] * b.m[2].x + a.m[1] * b.m[2].y + a.m[2] * b.m[2].z
		);
	}

	inline mat3 operator *(const mat3& a, const float b) {
		return mat3(a.m[0] * b, a.m[1] * b, a.m[2] * b);
	}

	inline mat3 operator *(const float a, const mat3& b) {
		return mat3(a * b.m[0], a * b.m[1], a * b.m[2]);
	}

	inline mat3 operator /(const mat3& a, const float b) {
		return mat3(a.m[0] / b, a.m[1] / b, a.m[2] / b);
	}

	inline mat3 operator /(const float a, const mat3& b) {
		return mat3(a / b.m[0], a / b.m[1], a / b.m[2]);
	}



}

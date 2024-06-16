#pragma once

#include "../Matrix/matrix.h"
#include "../Vector/vector.h"

namespace VectorLikeGLSL {
	inline mat2 matrixCompMult(const mat2& a, const mat2& b) {
		return mat2(
			a.m[0] * b.m[0],
			a.m[1] * b.m[1]
		);
	}

	inline mat3 matrixCompMult(const mat3& a, const mat3& b) {
		return mat3(
			a.m[0] * b.m[0],
			a.m[1] * b.m[1],
			a.m[2] * b.m[2]
		);
	}

	inline mat4 matrixCompMult(const mat4& a, const mat4& b) {
		return mat4(
			a.m[0] * b.m[0],
			a.m[1] * b.m[1],
			a.m[2] * b.m[2],
			a.m[3] * b.m[3]
		);
	}

	inline mat2 outerProduct(const vec2& c,const vec2& r) {
		return mat2(
			c.x * r.x, c.x * r.y,
			c.y * r.x, c.y * r.y
		);
	}


	inline mat3 outerProduct(const vec3& c, const vec3& r){
		return mat3(
			c.x * r.x, c.x * r.y, c.x * r.z,
			c.y * r.x, c.y * r.y, c.y * r.z,
			c.z * r.x, c.z * r.y, c.z * r.z	
		);
	}

	inline mat4 outerProduct(const vec4& c,const vec4& r) {
		return mat4(
			c.x * r.x, c.x * r.y, c.x * r.z, c.x * r.w,
			c.y * r.x, c.y * r.y, c.y * r.z, c.y * r.w,
			c.z * r.x, c.z * r.y, c.z * r.z, c.z * r.w,
			c.w * r.x, c.w * r.y, c.w * r.z, c.w * r.w
		);
	}

	inline mat2 transpose(const mat2& m) {
		return mat2(
			vec2(m.m[0].x, m.m[1].x),
			vec2(m.m[0].y, m.m[1].y)
		);
	}

	inline mat3 transpose(const mat3& m) {
		return mat3(
			vec3(m.m[0].x, m.m[1].x, m.m[2].x),
			vec3(m.m[0].y, m.m[1].y, m.m[2].y),
			vec3(m.m[0].z, m.m[1].z, m.m[2].z)
		);
	}

	inline mat4 transpose(const mat4& m) {
		return mat4(
			vec4(m.m[0].x, m.m[1].x, m.m[2].x, m.m[3].x),
			vec4(m.m[0].y, m.m[1].y, m.m[2].y, m.m[3].y),
			vec4(m.m[0].z, m.m[1].z, m.m[2].z, m.m[3].z),
			vec4(m.m[0].w, m.m[1].w, m.m[2].w, m.m[3].w)
		);
	}

	inline float determinant(const mat2& m) {
		return m.m[0].x * m.m[1].y - m.m[0].y * m.m[1].x;
	}

	inline float determinant(const mat3& m) {
		return m.m[0].x * (m.m[1].y * m.m[2].z - m.m[1].z * m.m[2].y) -
			m.m[0].y * (m.m[1].x * m.m[2].z - m.m[1].z * m.m[2].x) +
			m.m[0].z * (m.m[1].x * m.m[2].y - m.m[1].y * m.m[2].x);
	}

	inline float determinant(const mat4& m) {
		float a0 = m.m[0].x * m.m[1].y - m.m[0].y * m.m[1].x;
		float a1 = m.m[0].x * m.m[1].z - m.m[0].z * m.m[1].x;
		float a2 = m.m[0].x * m.m[1].w - m.m[0].w * m.m[1].x;
		float a3 = m.m[0].y * m.m[1].z - m.m[0].z * m.m[1].y;
		float a4 = m.m[0].y * m.m[1].w - m.m[0].w * m.m[1].y;
		float a5 = m.m[0].z * m.m[1].w - m.m[0].w * m.m[1].z;
		float b0 = m.m[2].x * m.m[3].y - m.m[2].y * m.m[3].x;
		float b1 = m.m[2].x * m.m[3].z - m.m[2].z * m.m[3].x;
		float b2 = m.m[2].x * m.m[3].w - m.m[2].w * m.m[3].x;
		float b3 = m.m[2].y * m.m[3].z - m.m[2].z * m.m[3].y;
		float b4 = m.m[2].y * m.m[3].w - m.m[2].w * m.m[3].y;
		float b5 = m.m[2].z * m.m[3].w - m.m[2].w * m.m[3].z;

		return a0 * b5 - a1 * b4 + a2 * b3 + a3 * b2 - a4 * b1 + a5 * b0;
	}

}

#pragma once

#include "./mat2.h"
#include "./mat3.h"
#include "./mat4.h"

namespace VectorLikeGLSL
{
	
	inline mat2::mat2(const mat3& a) {
		m[0] = vec2(a.m[0].x, a.m[0].y);
		m[1] = vec2(a.m[1].x, a.m[1].y);
	}
	inline mat2::mat2(const mat4& b) {
		m[0] = vec2(b.m[0].x, b.m[0].y);
		m[1] = vec2(b.m[1].x, b.m[1].y);
	}

	inline mat3::mat3(const mat2& a) {
		m[0] = vec3(a.m[0].x, a.m[0].y, 0.0f);
		m[1] = vec3(a.m[1].x, a.m[1].y, 0.0f);
		m[2] = vec3(0.0f, 0.0f, 0.0f);
	}
	inline mat3::mat3(const mat4& b) {
		m[0] = vec3(b.m[0].x, b.m[0].y, b.m[0].z);
		m[1] = vec3(b.m[1].x, b.m[1].y, b.m[1].z);
		m[2] = vec3(b.m[2].x, b.m[2].y, b.m[2].z);
	}

	inline mat4::mat4(const mat2& a) {
		m[0] = vec4(a.m[0].x, a.m[0].y, 0.0f, 0.0f);
		m[1] = vec4(a.m[1].x, a.m[1].y, 0.0f, 0.0f);
		m[2] = vec4(0.0f, 0.0f, 0.0f, 0.0f);
		m[3] = vec4(0.0f, 0.0f, 0.0f, 0.0f);
	}

	inline mat4::mat4(const mat3& b) {
		m[0] = vec4(b.m[0].x, b.m[0].y, b.m[0].z, 0.0f);
		m[1] = vec4(b.m[1].x, b.m[1].y, b.m[1].z, 0.0f);
		m[2] = vec4(b.m[2].x, b.m[2].y, b.m[2].z, 0.0f);
		m[3] = vec4(0.0f, 0.0f, 0.0f, 0.0f);
	}

}


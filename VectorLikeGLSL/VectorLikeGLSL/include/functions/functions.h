#pragma once
#include <cmath>
#include "../Vector/vector.h"

//https://registry.khronos.org/OpenGL/specs/gl/GLSLangSpec.4.50.pdf
namespace VectorLikeGLSL {

	inline float dot(const vec2& a, const vec2& b) {
		return a.x * b.x + a.y * b.y;
	}

	inline float dot(const vec3& a, const vec3& b) {
		return a.x * b.x + a.y * b.y + a.z * b.z;
	}

	inline float dot(const vec4& a, const vec4& b) {
		return a.x * b.x + a.y * b.y + a.z * b.z + a.w * b.w;
	}

	inline float length(const vec2& a) {
		return sqrt(a.x * a.x + a.y * a.y);
	}
	
	inline float length(const vec3& a) {
		return sqrt(a.x * a.x + a.y * a.y + a.z * a.z);
	}
	
	inline float length(const vec4& a) {
		return sqrt(a.x * a.x + a.y * a.y + a.z * a.z + a.w * a.w);
	}
	
	inline vec2 normalize(const vec2& a) {
		return a / length(a);
	}

	inline vec3 normalize(const vec3& a) {
		return a / length(a);
	}

	inline vec4 normalize(const vec4& a) {
		return a / length(a);
	}

	inline vec3 cross(const vec3& a, const vec3& b) {
		return vec3(a.y * b.z - a.z * b.y, a.z * b.x - a.x * b.z, a.x * b.y - a.y * b.x);
	}
	

}

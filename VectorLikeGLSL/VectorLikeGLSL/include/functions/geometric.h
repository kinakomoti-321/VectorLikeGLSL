#pragma once

#include <cmath>
#include "../Vector/vector.h"
namespace VectorLikeGLSL {
	inline float length(const vec2& v) {
		return std::sqrt(v.x * v.x + v.y * v.y);
	}

	inline float length(const vec3& v) {
		return std::sqrt(v.x * v.x + v.y * v.y + v.z * v.z);
	}

	inline float length(const vec4& v) {
		return std::sqrt(v.x * v.x + v.y * v.y + v.z * v.z + v.w * v.w);
	}

	inline float distance(const vec2& a, const vec2& b) {
		return length(a - b);
	}

	inline float distance(const vec3& a, const vec3& b) {
		return length(a - b);
	}

	inline float distance(const vec4& a, const vec4& b) {
		return length(a - b);
	}

	inline float dot(const vec2& a, const vec2& b) {
		return a.x * b.x + a.y * b.y;
	}

	inline float dot(const vec3& a, const vec3& b) {
		return a.x * b.x + a.y * b.y + a.z * b.z;
	}

	inline float dot(const vec4& a, const vec4& b) {
		return a.x * b.x + a.y * b.y + a.z * b.z + a.w * b.w;
	}


	inline vec2 normalize(const vec2& v) {
		return v / length(v);
	}

	inline vec3 normalize(const vec3& v) {
		return v / length(v);
	}

	inline vec4 normalize(const vec4& v) {
		return v / length(v);
	}


	inline vec3 cross(const vec3& a, const vec3& b) {
		return vec3(a.y * b.z - a.z * b.y,
			a.z * b.x - a.x * b.z,
			a.x * b.y - a.y * b.x);
	}
	

	//-----------------------------------------	
	//vec4 transform is not implemented, because it is used in only vertex shader.
	//-----------------------------------------	

	inline vec3 faceforward(const vec3& N, const vec3& I, const vec3& Nref) {
		return dot(Nref, I) < 0 ? N : -N;
	}
	
	inline vec2 reflect(const vec2& I, const vec2& N) {
		return I - 2.0f * dot(N, I) * N;
	}

	inline vec3 reflect(const vec3& I, const vec3& N) {
		return I - 2.0f * dot(N, I) * N;
	}

	inline vec4 reflect(const vec4& I, const vec4& N) {
		return I - 2.0f * dot(N, I) * N;
	}

	inline vec2 refract(const vec2& I, const vec2& N,const float eta) {
		float k = 1.0f - eta * eta * (1.0f - dot(N, I) * dot(N, I));
		if (k < 0.0f) {
			return vec2(0.0f);
		}
		else {
			return eta * I - (eta * dot(N, I) + std::sqrt(k)) * N;
		}
	}

	inline vec3 refract(const vec3& I, const vec3& N,const float eta) {
		float k = 1.0f - eta * eta * (1.0f - dot(N, I) * dot(N, I));
		if (k < 0.0f) {
			return vec3(0.0f);
		}
		else {
			return eta * I - (eta * dot(N, I) + std::sqrt(k)) * N;
		}
	}

	inline vec4 refract(const vec4& I, const vec4& N,const float eta) {
		float k = 1.0f - eta * eta * (1.0f - dot(N, I) * dot(N, I));
		if (k < 0.0f) {
			return vec4(0.0f);
		}
		else {
			return eta * I - (eta * dot(N, I) + std::sqrt(k)) * N;
		}
	}
}

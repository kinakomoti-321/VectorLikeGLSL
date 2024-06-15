#pragma once

#include "../common/common.h"
#include "../Vector/vector.h"
namespace VectorLikeGLSL {
	inline float abs(const float x) {
		return std::abs(x);
	}

	inline vec2 abs(const vec2& x) {
		return vec2(std::abs(x.x), std::abs(x.y));
	}

	inline vec3 abs(const vec3& x) {
		return vec3(std::abs(x.x), std::abs(x.y), std::abs(x.z));
	}

	inline vec4 abs(const vec4& x) {
		return vec4(std::abs(x.x), std::abs(x.y), std::abs(x.z), std::abs(x.w));
	}

	inline float sign(const float x) {
		return x > 0.0f ? 1.0f : x < 0.0f ? -1.0f : 0.0f;
	}

	inline vec2 sign(const vec2& x) {
		return vec2(sign(x.x), sign(x.y));
	}

	inline vec3 sign(const vec3& x) {
		return vec3(sign(x.x), sign(x.y), sign(x.z));
	}

	inline vec4 sign(const vec4& x) {
		return vec4(sign(x.x), sign(x.y), sign(x.z), sign(x.w));
	}

	inline float floor(const float x) {
		return std::floor(x);
	}

	inline vec2 floor(const vec2& x) {
		return vec2(std::floor(x.x), std::floor(x.y));
	}

	inline vec3 floor(const vec3& x) {
		return vec3(std::floor(x.x), std::floor(x.y), std::floor(x.z));
	}

	inline vec4 floor(const vec4& x) {
		return vec4(std::floor(x.x), std::floor(x.y), std::floor(x.z), std::floor(x.w));
	}

	inline float trunc(const float x) {
		return std::trunc(x);
	}

	inline vec2 trunc(const vec2& x) {
		return vec2(std::trunc(x.x), std::trunc(x.y));
	}

	inline vec3 trunc(const vec3& x) {
		return vec3(std::trunc(x.x), std::trunc(x.y), std::trunc(x.z));
	}

	inline vec4 trunc(const vec4& x) {
		return vec4(std::trunc(x.x), std::trunc(x.y), std::trunc(x.z), std::trunc(x.w));
	}

	inline float round(const float x) {
		return std::round(x);
	}

	inline vec2 round(const vec2& x) {
		return vec2(std::round(x.x), std::round(x.y));
	}

	inline vec3 round(const vec3& x) {
		return vec3(std::round(x.x), std::round(x.y), std::round(x.z));
	}

	inline vec4 round(const vec4& x) {
		return vec4(std::round(x.x), std::round(x.y), std::round(x.z), std::round(x.w));
	}


	inline float ceil(const float x) {
		return std::ceil(x);
	}

	inline vec2 ceil(const vec2& x) {
		return vec2(std::ceil(x.x), std::ceil(x.y));
	}

	inline vec3 ceil(const vec3& x) {
		return vec3(std::ceil(x.x), std::ceil(x.y), std::ceil(x.z));
	}

	inline vec4 ceil(const vec4& x) {
		return vec4(std::ceil(x.x), std::ceil(x.y), std::ceil(x.z), std::ceil(x.w));
	}


	inline float fract(const float x) {
		return x - std::floor(x);
	}

	inline vec2 fract(const vec2& x) {
		return vec2(fract(x.x), fract(x.y));
	}

	inline vec3 fract(const vec3& x) {
		return vec3(fract(x.x), fract(x.y), fract(x.z));
	}

	inline vec4 fract(const vec4& x) {
		return vec4(fract(x.x), fract(x.y), fract(x.z), fract(x.w));
	}


	inline float mod(const float x, const float y) {
		return x - y * floor(x / y);
	}

	inline vec2 mod(const vec2& x, const float y) {
		return vec2(mod(x.x, y), mod(x.y, y));
	}

	inline vec3 mod(const vec3& x, const float y) {
		return vec3(mod(x.x, y), mod(x.y, y), mod(x.z, y));
	}

	inline vec4 mod(const vec4& x, const float y) {
		return vec4(mod(x.x, y), mod(x.y, y), mod(x.z, y), mod(x.w, y));
	}

	inline vec2 mod(const vec2& x, const vec2& y) {
		return vec2(mod(x.x, y.x), mod(x.y, y.y));
	}

	inline vec3 mod(const vec3& x, const vec3& y) {
		return vec3(mod(x.x, y.x), mod(x.y, y.y), mod(x.z, y.z));
	}

	inline vec4 mod(const vec4& x, const vec4& y) {
		return vec4(mod(x.x, y.x), mod(x.y, y.y), mod(x.z, y.z), mod(x.w, y.w));
	}

	inline float min(const float x, const float y) {
		return std::min(x, y);
	}

	inline vec2 min(const vec2& x, const vec2& y) {
		return vec2(std::min(x.x, y.x), std::min(x.y, y.y));
	}

	inline vec3 min(const vec3& x, const vec3& y) {
		return vec3(std::min(x.x, y.x), std::min(x.y, y.y), std::min(x.z, y.z));
	}

	inline vec4 min(const vec4& x, const vec4& y) {
		return vec4(std::min(x.x, y.x), std::min(x.y, y.y), std::min(x.z, y.z), std::min(x.w, y.w));
	}

	inline vec2 min(const vec2& x, const float y) {
		return vec2(min(x.x, y), min(x.y, y));
	}

	inline vec3 min(const vec3& x, const float y) {
		return vec3(min(x.x, y), min(x.y, y), min(x.z, y));
	}

	inline vec4 min(const vec4& x, const float y) {
		return vec4(min(x.x, y), min(x.y, y), min(x.z, y), min(x.w, y));
	}

	inline vec2 min(const float x, const vec2& y) {
		return vec2(min(x, y.x), min(x, y.y));
	}

	inline vec3 min(const float x, const vec3& y) {
		return vec3(min(x, y.x), min(x, y.y), min(x, y.z));
	}

	inline vec4 min(const float x, const vec4& y) {
		return vec4(min(x, y.x), min(x, y.y), min(x, y.z), min(x, y.w));
	}


	inline float max(const float x, const float y) {
		return std::max(x, y);
	}

	inline vec2 max(const vec2& x, const vec2& y) {
		return vec2(max(x.x, y.x), max(x.y, y.y));
	}

	inline vec3 max(const vec3& x, const vec3& y) {
		return vec3(max(x.x, y.x), max(x.y, y.y), max(x.z, y.z));
	}

	inline vec4 max(const vec4& x, const vec4& y) {
		return vec4(max(x.x, y.x), max(x.y, y.y), max(x.z, y.z), max(x.w, y.w));
	}

	inline vec2 max(const vec2& x, const float y) {
		return vec2(max(x.x, y), max(x.y, y));
	}

	inline vec3 max(const vec3& x, const float y) {
		return vec3(max(x.x, y), max(x.y, y), max(x.z, y));
	}

	inline vec4 max(const vec4& x, const float y) {
		return vec4(max(x.x, y), max(x.y, y), max(x.z, y), max(x.w, y));
	}

	inline vec2 max(const float x, const vec2& y) {
		return vec2(max(x, y.x), max(x, y.y));
	}

	inline vec3 max(const float x, const vec3& y) {
		return vec3(max(x, y.x), max(x, y.y), max(x, y.z));
	}

	inline vec4 max(const float x, const vec4& y) {
		return vec4(max(x, y.x), max(x, y.y), max(x, y.z), max(x, y.w));
	}

	inline float clamp(const float x, const float minVal, const float maxVal) {
		return x < minVal ? minVal : (x > maxVal ? maxVal : x);
	}

	inline vec2 clamp(const vec2& x, const vec2& minVal, const vec2& maxVal) {
		return vec2(clamp(x.x, minVal.x, maxVal.x), clamp(x.y, minVal.y, maxVal.y));
	}

	inline vec3 clamp(const vec3& x, const vec3& minVal, const vec3& maxVal) {
		return vec3(clamp(x.x, minVal.x, maxVal.x), clamp(x.y, minVal.y, maxVal.y), clamp(x.z, minVal.z, maxVal.z));
	}

	inline vec4 clamp(const vec4& x, const vec4& minVal, const vec4& maxVal) {
		return vec4(clamp(x.x, minVal.x, maxVal.x), clamp(x.y, minVal.y, maxVal.y), clamp(x.z, minVal.z, maxVal.z), clamp(x.w, minVal.w, maxVal.w));
	}

	inline vec2 clamp(const vec2& x, const float minVal, const float maxVal) {
		return vec2(clamp(x.x, minVal, maxVal), clamp(x.y, minVal, maxVal));
	}

	inline vec3 clamp(const vec3& x, const float minVal, const float maxVal) {
		return vec3(clamp(x.x, minVal, maxVal), clamp(x.y, minVal, maxVal), clamp(x.z, minVal, maxVal));
	}

	inline vec4 clamp(const vec4& x, const float minVal, const float maxVal) {
		return vec4(clamp(x.x, minVal, maxVal), clamp(x.y, minVal, maxVal), clamp(x.z, minVal, maxVal), clamp(x.w, minVal, maxVal));
	}

	inline float mix(const float x, const float y, const float a) {
		return x * (1 - a) + y * a;
	}

	inline vec2 mix(const vec2& x, const vec2& y, const vec2& a) {
		return x * (vec2(1) - a) + y * a;
	}

	inline vec3 mix(const vec3& x, const vec3& y, const vec3& a) {
		return x * (vec3(1) - a) + y * a;
	}

	inline vec4 mix(const vec4& x, const vec4& y, const vec4& a) {
		return x * (vec4(1) - a) + y * a;
	}

	inline vec2 mix(const vec2& x, const vec2& y, const float a) {
		return x * (1 - a) + y * a;
	}

	inline vec3 mix(const vec3& x, const vec3& y, const float a) {
		return x * (1 - a) + y * a;
	}

	inline vec4 mix(const vec4& x, const vec4& y, const float a) {
		return x * (1 - a) + y * a;
	}

	inline float step(const float edge, const float x) {
		return x < edge ? 0.0f : 1.0f;
	}

	inline vec2 step(const vec2& edge, const vec2& x) {
		return vec2(step(edge.x, x.x), step(edge.y, x.y));
	}

	inline vec3 step(const vec3& edge, const vec3& x) {
		return vec3(step(edge.x, x.x), step(edge.y, x.y), step(edge.z, x.z));
	}

	inline vec4 step(const vec4& edge, const vec4& x) {
		return vec4(step(edge.x, x.x), step(edge.y, x.y), step(edge.z, x.z), step(edge.w, x.w));
	}

	inline vec2 step(const vec2& edge, const float x) {
		return vec2(step(edge.x, x), step(edge.y, x));
	}

	inline vec3 step(const vec3& edge, const float x) {
		return vec3(step(edge.x, x), step(edge.y, x), step(edge.z, x));
	}

	inline vec4 step(const vec4& edge, const float x) {
		return vec4(step(edge.x, x), step(edge.y, x), step(edge.z, x), step(edge.w, x));
	}

	inline float smoothstep(const float edge0, const float edge1, const float x) {
		
		float t = clamp((x - edge0) / (edge1 - edge0), 0, 1);
		return t * t * (3 - 2 * t);
	}

	inline vec2 smoothstep(const vec2& edge0, const vec2& edge1, const vec2& x) {
		vec2 t = clamp((x - edge0) / (edge1 - edge0), 0, 1);
		return t * t * (vec2(3) - vec2(2) * t);
	}

	inline vec3 smoothstep(const vec3& edge0, const vec3& edge1, const vec3& x) {
		vec3 t = clamp((x - edge0) / (edge1 - edge0), 0, 1);
		return t * t * (vec3(3) - vec3(2) * t);
	}

	inline vec4 smoothstep(const vec4& edge0, const vec4& edge1, const vec4& x) {
		vec4 t = clamp((x - edge0) / (edge1 - edge0), 0, 1);
		return t * t * (vec4(3) - vec4(2) * t);
	}

	inline vec2 smoothstep(const vec2& edge0, const vec2& edge1, const float x) {
		vec2 t = clamp((x - edge0) / (edge1 - edge0), 0, 1);
		return t * t * (vec2(3) - vec2(2) * t);
	}

	inline vec3 smoothstep(const vec3& edge0, const vec3& edge1, const float x) {
		vec3 t = clamp((x - edge0) / (edge1 - edge0), 0, 1);
		return t * t * (vec3(3) - vec3(2) * t);
	}

	inline vec4 smoothstep(const vec4& edge0, const vec4& edge1, const float x) {
		vec4 t = clamp((x - edge0) / (edge1 - edge0), 0, 1);
		return t * t * (vec4(3) - vec4(2) * t);
	}

	//TODO ----------------------
	//isnun
	//---------------------------

	//TODO ----------------------
	//isinf
	//---------------------------

	//TODO ----------------------
	//floatBitsToInt
	//---------------------------

	//TODO ----------------------
	//floatBitsToUint
	//---------------------------

	//TODO ----------------------
	//intBitsToFloat
	//---------------------------

	//TODO ----------------------
	//uintBitsToFloat
	//---------------------------

	
	inline float fma(const float a, const float b, const float c) {
		return std::fma(a, b, c);
	}	

	inline vec2 fma(const vec2& a, const vec2& b, const vec2& c) {
		return vec2(fma(a.x, b.x, c.x), fma(a.y, b.y, c.y));
	}

	inline vec3 fma(const vec3& a, const vec3& b, const vec3& c) {
		return vec3(fma(a.x, b.x, c.x), fma(a.y, b.y, c.y), fma(a.z, b.z, c.z));
	}

	inline vec4 fma(const vec4& a, const vec4& b, const vec4& c) {
		return vec4(fma(a.x, b.x, c.x), fma(a.y, b.y, c.y), fma(a.z, b.z, c.z), fma(a.w, b.w, c.w));
	}
	
	inline float frexp(const float x, int& exp) {
		return std::frexp(x, &exp);
	}

	//TODO ----------------------
	//frexp
	//---------------------------

	inline float ldexp(const float x, const int exp) {
		return std::ldexp(x, exp);
	}
	//TODO ----------------------
	//ldexp
	//---------------------------


}

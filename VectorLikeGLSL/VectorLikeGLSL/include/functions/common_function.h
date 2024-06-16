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

	inline int abs(const int x) {
		return std::abs(x);
	}

	inline ivec2 abs(const ivec2& x) {
		return ivec2(std::abs(x.x), std::abs(x.y));
	}

	inline ivec3 abs(const ivec3& x) {
		return ivec3(std::abs(x.x), std::abs(x.y), std::abs(x.z));
	}

	inline ivec4 abs(const ivec4& x) {
		return ivec4(std::abs(x.x), std::abs(x.y), std::abs(x.z), std::abs(x.w));
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

	inline int sign(const int x) {
		return x > 0 ? 1 : x < 0 ? -1 : 0;
	}

	inline ivec2 sign(const ivec2& x) {
		return ivec2(sign(x.x), sign(x.y));
	}

	inline ivec3 sign(const ivec3& x) {
		return ivec3(sign(x.x), sign(x.y), sign(x.z));
	}

	inline ivec4 sign(const ivec4& x) {
		return ivec4(sign(x.x), sign(x.y), sign(x.z), sign(x.w));
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

	inline int min(const int x, const int y) {
		return std::min(x, y);
	}

	inline ivec2 min(const ivec2& x, const ivec2& y) {
		return ivec2(std::min(x.x, y.x), std::min(x.y, y.y));
	}

	inline ivec3 min(const ivec3& x, const ivec3& y) {
		return ivec3(std::min(x.x, y.x), std::min(x.y, y.y), std::min(x.z, y.z));
	}

	inline ivec4 min(const ivec4& x, const ivec4& y) {
		return ivec4(std::min(x.x, y.x), std::min(x.y, y.y), std::min(x.z, y.z), std::min(x.w, y.w));
	}

	inline ivec2 min(const ivec2& x, const int y) {
		return ivec2(min(x.x, y), min(x.y, y));
	}

	inline ivec3 min(const ivec3& x, const int y) {
		return ivec3(min(x.x, y), min(x.y, y), min(x.z, y));
	}

	inline ivec4 min(const ivec4& x, const int y) {
		return ivec4(min(x.x, y), min(x.y, y), min(x.z, y), min(x.w, y));
	}

	inline ivec2 min(const int x, const ivec2& y) {
		return ivec2(min(x, y.x), min(x, y.y));
	}

	inline ivec3 min(const int x, const ivec3& y) {
		return ivec3(min(x, y.x), min(x, y.y), min(x, y.z));
	}

	inline ivec4 min(const int x, const ivec4& y) {
		return ivec4(min(x, y.x), min(x, y.y), min(x, y.z), min(x, y.w));
	}

	inline unsigned int min(const unsigned int x, const unsigned int y) {
		return std::min(x, y);
	}

	inline uvec2 min(const uvec2& x, const uvec2& y) {
		return uvec2(std::min(x.x, y.x), std::min(x.y, y.y));
	}

	inline uvec3 min(const uvec3& x, const uvec3& y) {
		return uvec3(std::min(x.x, y.x), std::min(x.y, y.y), std::min(x.z, y.z));
	}

	inline uvec4 min(const uvec4& x, const uvec4& y) {
		return uvec4(std::min(x.x, y.x), std::min(x.y, y.y), std::min(x.z, y.z), std::min(x.w, y.w));
	}

	inline uvec2 min(const uvec2& x, const unsigned int y) {
		return uvec2(min(x.x, y), min(x.y, y));
	}

	inline uvec3 min(const uvec3& x, const unsigned int y) {
		return uvec3(min(x.x, y), min(x.y, y), min(x.z, y));
	}

	inline uvec4 min(const uvec4& x, const unsigned int y) {
		return uvec4(min(x.x, y), min(x.y, y), min(x.z, y), min(x.w, y));
	}

	inline uvec2 min(const unsigned int x, const uvec2& y) {
		return uvec2(min(x, y.x), min(x, y.y));
	}

	inline uvec3 min(const unsigned int x, const uvec3& y) {
		return uvec3(min(x, y.x), min(x, y.y), min(x, y.z));
	}

	inline uvec4 min(const unsigned int x, const uvec4& y) {
		return uvec4(min(x, y.x), min(x, y.y), min(x, y.z), min(x, y.w));
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

	inline int max(const int x, const int y) {
		return std::max(x, y);
	}

	inline ivec2 max(const ivec2& x, const ivec2& y) {
		return ivec2(max(x.x, y.x), max(x.y, y.y));
	}

	inline ivec3 max(const ivec3& x, const ivec3& y) {
		return ivec3(max(x.x, y.x), max(x.y, y.y), max(x.z, y.z));
	}

	inline ivec4 max(const ivec4& x, const ivec4& y) {
		return ivec4(max(x.x, y.x), max(x.y, y.y), max(x.z, y.z), max(x.w, y.w));
	}

	inline ivec2 max(const ivec2& x, const int y) {
		return ivec2(max(x.x, y), max(x.y, y));
	}

	inline ivec3 max(const ivec3& x, const int y) {
		return ivec3(max(x.x, y), max(x.y, y), max(x.z, y));
	}

	inline ivec4 max(const ivec4& x, const int y) {
		return ivec4(max(x.x, y), max(x.y, y), max(x.z, y), max(x.w, y));
	}

	inline ivec2 max(const int x, const ivec2& y) {
		return ivec2(max(x, y.x), max(x, y.y));
	}

	inline ivec3 max(const int x, const ivec3& y) {
		return ivec3(max(x, y.x), max(x, y.y), max(x, y.z));
	}

	inline ivec4 max(const int x, const ivec4& y) {
		return ivec4(max(x, y.x), max(x, y.y), max(x, y.z), max(x, y.w));
	}

	inline unsigned int max(const unsigned int x, const unsigned int y) {
		return std::max(x, y);
	}

	inline uvec2 max(const uvec2& x, const uvec2& y) {
		return uvec2(max(x.x, y.x), max(x.y, y.y));
	}

	inline uvec3 max(const uvec3& x, const uvec3& y) {
		return uvec3(max(x.x, y.x), max(x.y, y.y), max(x.z, y.z));
	}

	inline uvec4 max(const uvec4& x, const uvec4& y) {
		return uvec4(max(x.x, y.x), max(x.y, y.y), max(x.z, y.z), max(x.w, y.w));
	}

	inline uvec2 max(const uvec2& x, const unsigned int y) {
		return uvec2(max(x.x, y), max(x.y, y));
	}

	inline uvec3 max(const uvec3& x, const unsigned int y) {
		return uvec3(max(x.x, y), max(x.y, y), max(x.z, y));
	}

	inline uvec4 max(const uvec4& x, const unsigned int y) {
		return uvec4(max(x.x, y), max(x.y, y), max(x.z, y), max(x.w, y));
	}

	inline uvec2 max(const unsigned int x, const uvec2& y) {
		return uvec2(max(x, y.x), max(x, y.y));
	}

	inline uvec3 max(const unsigned int x, const uvec3& y) {
		return uvec3(max(x, y.x), max(x, y.y), max(x, y.z));
	}

	inline uvec4 max(const unsigned int x, const uvec4& y) {
		return uvec4(max(x, y.x), max(x, y.y), max(x, y.z), max(x, y.w));
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

	inline int clamp(const int x, const int minVal, const int maxVal) {
		return x < minVal ? minVal : (x > maxVal ? maxVal : x);
	}

	inline ivec2 clamp(const ivec2& x, const ivec2& minVal, const ivec2& maxVal) {
		return ivec2(clamp(x.x, minVal.x, maxVal.x), clamp(x.y, minVal.y, maxVal.y));
	}

	inline ivec3 clamp(const ivec3& x, const ivec3& minVal, const ivec3& maxVal) {
		return ivec3(clamp(x.x, minVal.x, maxVal.x), clamp(x.y, minVal.y, maxVal.y), clamp(x.z, minVal.z, maxVal.z));
	}

	inline ivec4 clamp(const ivec4& x, const ivec4& minVal, const ivec4& maxVal) {
		return ivec4(clamp(x.x, minVal.x, maxVal.x), clamp(x.y, minVal.y, maxVal.y), clamp(x.z, minVal.z, maxVal.z), clamp(x.w, minVal.w, maxVal.w));
	}

	inline ivec2 clamp(const ivec2& x, const int minVal, const int maxVal) {
		return ivec2(clamp(x.x, minVal, maxVal), clamp(x.y, minVal, maxVal));
	}

	inline ivec3 clamp(const ivec3& x, const int minVal, const int maxVal) {
		return ivec3(clamp(x.x, minVal, maxVal), clamp(x.y, minVal, maxVal), clamp(x.z, minVal, maxVal));
	}

	inline ivec4 clamp(const ivec4& x, const int minVal, const int maxVal) {
		return ivec4(clamp(x.x, minVal, maxVal), clamp(x.y, minVal, maxVal), clamp(x.z, minVal, maxVal), clamp(x.w, minVal, maxVal));
	}

	inline unsigned int clamp(const unsigned int x, const unsigned int minVal, const unsigned int maxVal) {
		return x < minVal ? minVal : (x > maxVal ? maxVal : x);
	}

	inline uvec2 clamp(const uvec2& x, const uvec2& minVal, const uvec2& maxVal) {
		return uvec2(clamp(x.x, minVal.x, maxVal.x), clamp(x.y, minVal.y, maxVal.y));
	}

	inline uvec3 clamp(const uvec3& x, const uvec3& minVal, const uvec3& maxVal) {
		return uvec3(clamp(x.x, minVal.x, maxVal.x), clamp(x.y, minVal.y, maxVal.y), clamp(x.z, minVal.z, maxVal.z));
	}

	inline uvec4 clamp(const uvec4& x, const uvec4& minVal, const uvec4& maxVal) {
		return uvec4(clamp(x.x, minVal.x, maxVal.x), clamp(x.y, minVal.y, maxVal.y), clamp(x.z, minVal.z, maxVal.z), clamp(x.w, minVal.w, maxVal.w));
	}

	inline uvec2 clamp(const uvec2& x, const unsigned int minVal, const unsigned int maxVal) {
		return uvec2(clamp(x.x, minVal, maxVal), clamp(x.y, minVal, maxVal));
	}

	inline uvec3 clamp(const uvec3& x, const unsigned int minVal, const unsigned int maxVal) {
		return uvec3(clamp(x.x, minVal, maxVal), clamp(x.y, minVal, maxVal), clamp(x.z, minVal, maxVal));
	}

	inline uvec4 clamp(const uvec4& x, const unsigned int minVal, const unsigned int maxVal) {
		return uvec4(clamp(x.x, minVal, maxVal), clamp(x.y, minVal, maxVal), clamp(x.z, minVal, maxVal), clamp(x.w, minVal, maxVal));
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


	inline float mix(const float x, const float y, const bool a) {
		return a ? y : x;
	}
	
	inline vec2 mix(const vec2& x, const vec2& y, const bvec2& a) {
		return vec2(a.x ? y.x : x.x, a.y ? y.y : x.y);
	}

	inline vec3 mix(const vec3& x, const vec3& y, const bvec3& a) {
		return vec3(a.x ? y.x : x.x, a.y ? y.y : x.y, a.z ? y.z : x.z);
	}

	inline vec4 mix(const vec4& x, const vec4& y, const bvec4& a) {
		return vec4(a.x ? y.x : x.x, a.y ? y.y : x.y, a.z ? y.z : x.z, a.w ? y.w : x.w);
	}
	
	inline int mix(const int x, const int y, const bool a) {
		return a ? y : x;
	}

	inline ivec2 mix(const ivec2& x, const ivec2& y, const bvec2& a) {
		return ivec2(a.x ? y.x : x.x, a.y ? y.y : x.y);
	}

	inline ivec3 mix(const ivec3& x, const ivec3& y, const bvec3& a) {
		return ivec3(a.x ? y.x : x.x, a.y ? y.y : x.y, a.z ? y.z : x.z);
	}

	inline ivec4 mix(const ivec4& x, const ivec4& y, const bvec4& a) {
		return ivec4(a.x ? y.x : x.x, a.y ? y.y : x.y, a.z ? y.z : x.z, a.w ? y.w : x.w);
	}

	inline unsigned int mix(const unsigned int x, const unsigned int y, const bool a) {
		return a ? y : x;
	}

	inline uvec2 mix(const uvec2& x, const uvec2& y, const bvec2& a) {
		return uvec2(a.x ? y.x : x.x, a.y ? y.y : x.y);
	}

	inline uvec3 mix(const uvec3& x, const uvec3& y, const bvec3& a) {
		return uvec3(a.x ? y.x : x.x, a.y ? y.y : x.y, a.z ? y.z : x.z);
	}

	inline uvec4 mix(const uvec4& x, const uvec4& y, const bvec4& a) {
		return uvec4(a.x ? y.x : x.x, a.y ? y.y : x.y, a.z ? y.z : x.z, a.w ? y.w : x.w);
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

	inline vec2 step(const float edge, const vec2& x) {
		return vec2(step(edge, x.x), step(edge, x.y));
	}

	inline vec3 step(const float edge, const vec3& x) {
		return vec3(step(edge, x.x), step(edge, x.y), step(edge, x.z));
	}

	inline vec4 step(const float edge, const vec4& x) {
		return vec4(step(edge, x.x), step(edge, x.y), step(edge, x.z), step(edge, x.w));
	}

	inline float smoothstep(const float edge0, const float edge1, const float x) {
		
		float t = clamp((x - edge0) / (edge1 - edge0), 0.0f, 1.0f);
		return t * t * (3 - 2 * t);
	}

	inline vec2 smoothstep(const vec2& edge0, const vec2& edge1, const vec2& x) {
		vec2 t = clamp((x - edge0) / (edge1 - edge0), 0.0f, 1.0f);
		return t * t * (vec2(3) - vec2(2) * t);
	}

	inline vec3 smoothstep(const vec3& edge0, const vec3& edge1, const vec3& x) {
		vec3 t = clamp((x - edge0) / (edge1 - edge0), 0.0f, 1.0f);
		return t * t * (vec3(3) - vec3(2) * t);
	}

	inline vec4 smoothstep(const vec4& edge0, const vec4& edge1, const vec4& x) {
		vec4 t = clamp((x - edge0) / (edge1 - edge0), 0.0f, 1.0f);
		return t * t * (vec4(3) - vec4(2) * t);
	}

	inline vec2 smoothstep(const vec2& edge0, const vec2& edge1, const float x) {
		vec2 t = clamp((x - edge0) / (edge1 - edge0), 0.0f, 1.0f);
		return t * t * (vec2(3) - vec2(2) * t);
	}

	inline vec3 smoothstep(const vec3& edge0, const vec3& edge1, const float x) {
		vec3 t = clamp((x - edge0) / (edge1 - edge0), 0.0f, 1.0f);
		return t * t * (vec3(3) - vec3(2) * t);
	}

	inline vec4 smoothstep(const vec4& edge0, const vec4& edge1, const float x) {
		vec4 t = clamp((x - edge0) / (edge1 - edge0), 0.0f, 1.0f);
		return t * t * (vec4(3) - vec4(2) * t);
	}

	inline vec2 smoothstep(const float edge0, const float edge1, const vec2& x) {
		vec2 t = clamp((x - edge0) / (edge1 - edge0), 0.0f, 1.0f);
		return t * t * (vec2(3) - vec2(2) * t);
	}

	inline vec3 smoothstep(const float edge0, const float edge1, const vec3& x) {
		vec3 t = clamp((x - edge0) / (edge1 - edge0), 0.0f, 1.0f);
		return t * t * (vec3(3) - vec3(2) * t);
	}

	inline vec4 smoothstep(const float edge0, const float edge1, const vec4& x) {
		vec4 t = clamp((x - edge0) / (edge1 - edge0), 0.0f, 1.0f);
		return t * t * (vec4(3) - vec4(2) * t);
	}

	inline uvec2 isnan(const vec2& x) {
		return uvec2(std::isnan(x.x), std::isnan(x.y));
	}

	inline uvec3 isnan(const vec3& x) {
		return uvec3(std::isnan(x.x), std::isnan(x.y), std::isnan(x.z));
	}

	inline uvec4 isnan(const vec4& x) {
		return uvec4(std::isnan(x.x), std::isnan(x.y), std::isnan(x.z), std::isnan(x.w));
	}

	inline uvec2 isinf(const vec2& x) {
		return uvec2(std::isinf(x.x), std::isinf(x.y));
	}

	inline uvec3 isinf(const vec3& x) {
		return uvec3(std::isinf(x.x), std::isinf(x.y), std::isinf(x.z));
	}

	inline uvec4 isinf(const vec4& x) {
		return uvec4(std::isinf(x.x), std::isinf(x.y), std::isinf(x.z), std::isinf(x.w));
	}


	inline int floatBitsToInt(const float a) {
		return *reinterpret_cast<const int*>(&a);
	}

	inline ivec2 floatBitsToInt(const vec2& a) {
		return ivec2(floatBitsToInt(a.x), floatBitsToInt(a.y));
	}

	inline ivec3 floatBitsToInt(const vec3& a) {
		return ivec3(floatBitsToInt(a.x), floatBitsToInt(a.y), floatBitsToInt(a.z));
	}

	inline ivec4 floatBitsToInt(const vec4& a) {
		return ivec4(floatBitsToInt(a.x), floatBitsToInt(a.y), floatBitsToInt(a.z), floatBitsToInt(a.w));
	}


	inline unsigned int floatBitsToUint(float a) {
		return *reinterpret_cast<unsigned int*>(&a);
	}

	inline uvec2 floatBitsToUint(const vec2& a) {
		return uvec2(floatBitsToUint(a.x), floatBitsToUint(a.y));
	}

	inline uvec3 floatBitsToUint(const vec3& a) {
		return uvec3(floatBitsToUint(a.x), floatBitsToUint(a.y), floatBitsToUint(a.z));
	}

	inline uvec4 floatBitsToUint(const vec4& a) {
		return uvec4(floatBitsToUint(a.x), floatBitsToUint(a.y), floatBitsToUint(a.z), floatBitsToUint(a.w));
	}

	inline float intBitsToFloat(const int a) {
		return *reinterpret_cast<const float*>(&a);
	}

	inline vec2 intBitsToFloat(const ivec2& a) {
		return vec2(intBitsToFloat(a.x), intBitsToFloat(a.y));
	}

	inline vec3 intBitsToFloat(const ivec3& a) {
		return vec3(intBitsToFloat(a.x), intBitsToFloat(a.y), intBitsToFloat(a.z));
	}

	inline vec4 intBitsToFloat(const ivec4& a) {
		return vec4(intBitsToFloat(a.x), intBitsToFloat(a.y), intBitsToFloat(a.z), intBitsToFloat(a.w));
	}

	inline float uintBitsToFloat(const unsigned int a) {
		return *reinterpret_cast<const float*>(&a);
	}

	inline vec2 uintBitsToFloat(const uvec2& a) {
		return vec2(uintBitsToFloat(a.x), uintBitsToFloat(a.y));
	}

	inline vec3 uintBitsToFloat(const uvec3& a) {
		return vec3(uintBitsToFloat(a.x), uintBitsToFloat(a.y), uintBitsToFloat(a.z));
	}

	inline vec4 uintBitsToFloat(const uvec4& a) {
		return vec4(uintBitsToFloat(a.x), uintBitsToFloat(a.y), uintBitsToFloat(a.z), uintBitsToFloat(a.w));
	}
	
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

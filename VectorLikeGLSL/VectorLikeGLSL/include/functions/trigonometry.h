#pragma once
#include "../common/common.h"
#include "../Vector/vector.h"
namespace VectorLikeGLSL {
	float radians(float degree) {
		return degree * DEGREES_TO_RADIANS;
	}

	vec2 radians(const vec2& degree) {
		return degree * DEGREES_TO_RADIANS;
	}

	vec3 radians(const vec3& degree) {
		return degree * DEGREES_TO_RADIANS;
	}

	vec4 radians(const vec4& degree) {
		return degree * DEGREES_TO_RADIANS;
	}

	inline float degrees(float radian) {
		return radian * RADIANS_TO_DEGREES;
	}

	inline vec2 degrees(const vec2& radian) {
		return radian * RADIANS_TO_DEGREES;
	}

	inline vec3 degrees(const vec3& radian) {
		return radian * RADIANS_TO_DEGREES;
	}

	inline vec4 degrees(const vec4& radian) {
		return radian * RADIANS_TO_DEGREES;
	}

	inline float sin(float a) {
		return std::sin(a);
	}
	
	inline vec2 sin(const vec2& a) {
		return vec2(std::sin(a.x), std::sin(a.y));
	}

	inline vec3 sin(const vec3& a) {
		return vec3(std::sin(a.x), std::sin(a.y), std::sin(a.z));
	}
	
	inline vec4 sin(const vec4& a) {
		return vec4(std::sin(a.x), std::sin(a.y), std::sin(a.z), std::sin(a.w));
	}

	inline float cos(float a) {
		return std::cos(a);
	}	

	inline vec2 cos(const vec2& a) {
		return vec2(std::cos(a.x), std::cos(a.y));
	}

	inline vec3 cos(const vec3& a) {
		return vec3(std::cos(a.x), std::cos(a.y), std::cos(a.z));
	}

	inline vec4 cos(const vec4& a) {
		return vec4(std::cos(a.x), std::cos(a.y), std::cos(a.z), std::cos(a.w));
	}

	inline float tan(float a) {
		return std::tan(a);
	}

	inline vec2 tan(const vec2& a) {
		return vec2(std::tan(a.x), std::tan(a.y));
	}

	inline vec3 tan(const vec3& a) {
		return vec3(std::tan(a.x), std::tan(a.y), std::tan(a.z));
	}

	inline vec4 tan(const vec4& a) {
		return vec4(std::tan(a.x), std::tan(a.y), std::tan(a.z), std::tan(a.w));
	}

	inline float asin(float a) {
		return std::asin(a);
	}

	inline vec2 asin(const vec2& a) {
		return vec2(std::asin(a.x), std::asin(a.y));
	}

	inline vec3 asin(const vec3& a) {
		return vec3(std::asin(a.x), std::asin(a.y), std::asin(a.z));
	}

	inline vec4 asin(const vec4& a) {
		return vec4(std::asin(a.x), std::asin(a.y), std::asin(a.z), std::asin(a.w));
	}

	inline float acos(float a) {
		return std::acos(a);
	}

	inline vec2 acos(const vec2& a) {
		return vec2(std::acos(a.x), std::acos(a.y));
	}

	inline vec3 acos(const vec3& a) {
		return vec3(std::acos(a.x), std::acos(a.y), std::acos(a.z));
	}

	inline vec4 acos(const vec4& a) {
		return vec4(std::acos(a.x), std::acos(a.y), std::acos(a.z), std::acos(a.w));
	}

	inline float atan(float a) {
		return std::atan(a);
	}

	inline vec2 atan(const vec2& a) {
		return vec2(std::atan(a.x), std::atan(a.y));
	}

	inline vec3 atan(const vec3& a) {
		return vec3(std::atan(a.x), std::atan(a.y), std::atan(a.z));
	}

	inline vec4 atan(const vec4& a) {
		return vec4(std::atan(a.x), std::atan(a.y), std::atan(a.z), std::atan(a.w));
	}

	inline float atan(float y, float x) {
		return std::atan2(y, x);
	}

	inline vec2 atan(const vec2& y, const vec2& x) {
		return vec2(std::atan2(y.x, x.x), std::atan2(y.y, x.y));
	}

	inline vec3 atan(const vec3& y, const vec3& x) {
		return vec3(std::atan2(y.x, x.x), std::atan2(y.y, x.y), std::atan2(y.z, x.z));
	}

	inline vec4 atan(const vec4& y, const vec4& x) {
		return vec4(std::atan2(y.x, x.x), std::atan2(y.y, x.y), std::atan2(y.z, x.z), std::atan2(y.w, x.w));
	}

	inline float sinh(float a) {
		return std::sinh(a);
	}

	inline vec2 sinh(const vec2& a) {
		return vec2(std::sinh(a.x), std::sinh(a.y));
	}

	inline vec3 sinh(const vec3& a) {
		return vec3(std::sinh(a.x), std::sinh(a.y), std::sinh(a.z));
	}

	inline vec4 sinh(const vec4& a) {
		return vec4(std::sinh(a.x), std::sinh(a.y), std::sinh(a.z), std::sinh(a.w));
	}

	inline float cosh(float a) {
		return std::cosh(a);
	}

	inline vec2 cosh(const vec2& a) {
		return vec2(std::cosh(a.x), std::cosh(a.y));
	}

	inline vec3 cosh(const vec3& a) {
		return vec3(std::cosh(a.x), std::cosh(a.y), std::cosh(a.z));
	}

	inline vec4 cosh(const vec4& a) {
		return vec4(std::cosh(a.x), std::cosh(a.y), std::cosh(a.z), std::cosh(a.w));
	}

	inline float tanh(float a) {
		return std::tanh(a);
	}

	inline vec2 tanh(const vec2& a) {
		return vec2(std::tanh(a.x), std::tanh(a.y));
	}

	inline vec3 tanh(const vec3& a) {
		return vec3(std::tanh(a.x), std::tanh(a.y), std::tanh(a.z));
	}

	inline vec4 tanh(const vec4& a) {
		return vec4(std::tanh(a.x), std::tanh(a.y), std::tanh(a.z), std::tanh(a.w));
	}

	inline float asinh(float a) {
		return std::asinh(a);
	}

	inline vec2 asinh(const vec2& a) {
		return vec2(std::asinh(a.x), std::asinh(a.y));
	}

	inline vec3 asinh(const vec3& a) {
		return vec3(std::asinh(a.x), std::asinh(a.y), std::asinh(a.z));
	}

	inline vec4 asinh(const vec4& a) {
		return vec4(std::asinh(a.x), std::asinh(a.y), std::asinh(a.z), std::asinh(a.w));
	}

	inline float acosh(float a) {
		return std::acosh(a);
	}

	inline vec2 acosh(const vec2& a) {
		return vec2(std::acosh(a.x), std::acosh(a.y));
	}

	inline vec3 acosh(const vec3& a) {
		return vec3(std::acosh(a.x), std::acosh(a.y), std::acosh(a.z));
	}

	inline vec4 acosh(const vec4& a) {
		return vec4(std::acosh(a.x), std::acosh(a.y), std::acosh(a.z), std::acosh(a.w));
	}

	inline float atanh(float a) {
		return std::atanh(a);
	}

	inline vec2 atanh(const vec2& a) {
		return vec2(std::atanh(a.x), std::atanh(a.y));
	}

	inline vec3 atanh(const vec3& a) {
		return vec3(std::atanh(a.x), std::atanh(a.y), std::atanh(a.z));
	}

	inline vec4 atanh(const vec4& a) {
		return vec4(std::atanh(a.x), std::atanh(a.y), std::atanh(a.z), std::atanh(a.w));
	}
}


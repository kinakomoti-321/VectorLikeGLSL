#pragma once
#include <iostream>
#include "./bswizzles.h"

namespace VectorLikeGLSL {
	struct vec2;
	struct vec3;
	struct vec4;

	struct ivec2;
	struct ivec3;
	struct ivec4;

	struct uvec2;
	struct uvec3;
	struct uvec4;

	struct bvec2;
	struct bvec3;
	struct bvec4;

	struct bvec2 {
		union {
			bool v[2];

			#include "./bvec2_swizzle.h"
		};

		// Constructors
		bvec2() : v{ false, false } {}
		bvec2(bool x, bool y) : v{ x, y } {}
		bvec2(const bvec2& a) : v{ a.v[0], a.v[1] } {}

		bvec2(const bvec3& a);
		bvec2(const bvec4& a);

		// Cast constructors
		bvec2(const vec2& a);
		bvec2(const vec3& a);
		bvec2(const vec4& a);
		bvec2(const ivec2& a);
		bvec2(const ivec3& a);
		bvec2(const ivec4& a);
		bvec2(const uvec2& a);
		bvec2(const uvec3& a);
		bvec2(const uvec4& a);
		
		bool operator[](unsigned int i) const {
			return v[i];
		}

		bool& operator[](unsigned int i) {
			return v[i];
		}

	};

	struct bvec3 {
		union {
			bool v[3];
			#include "./bvec3_swizzle.h"
		};

		bvec3() {
			v[0] = false;
			v[1] = false;
			v[2] = false;
		}

		bvec3(bool a) {
			v[0] = a;
			v[1] = a;
			v[2] = a;
		}

		bvec3(bool x, bool y, bool z) {
			v[0] = x;
			v[1] = y;
			v[2] = z;
		}

		bvec3(const bvec3& a) {
			v[0] = a.x;
			v[1] = a.y;
			v[2] = a.z;
		}

		bvec3(const bvec2& a, bool b);
		bvec3(bool a, const bvec2& b);
		bvec3(const bvec4& a);

		bvec3(const vec2& a,bool b);
		bvec3(const bool a, const vec2& b);
		bvec3(const vec3& a);
		bvec3(const vec4& a);

		bvec3(const ivec2& a, bool b);
		bvec3(const bool a, const ivec2& b);
		bvec3(const ivec3& a);
		bvec3(const ivec4& a);

		bvec3(const uvec2& a, bool b);
		bvec3(const bool a, const uvec2& b);
		bvec3(const uvec3& a);
		bvec3(const uvec4& a);

		bool operator[](unsigned int i) const {
			return v[i];
		}

		bool& operator[](unsigned int i) {
			return v[i];
		}
	};

	struct bvec4 {
		union
		{
			bool v[4];
#include "./bvec4_swizzle.h"	
		};

		bvec4() {
			v[0] = false;
			v[1] = false;
			v[2] = false;
			v[3] = false;
		}

		bvec4(bool a) {
			v[0] = a;
			v[1] = a;
			v[2] = a;
			v[3] = a;
		}

		bvec4(bool x, bool y, bool z, bool w) {
			v[0] = x;
			v[1] = y;
			v[2] = z;
			v[3] = w;
		}

		bvec4(const bvec4& a) {
			v[0] = a.x;
			v[1] = a.y;
			v[2] = a.z;
			v[3] = a.w;
		}

		bvec4(const bvec2& a, bool b, bool c);
		bvec4(bool a, const bvec2& b, bool c);
		bvec4(bool a, bool b, const bvec2& c);
		bvec4(const bvec2& a, const bvec2& b);
		bvec4(const bvec3& a, bool b);
		bvec4(bool a, const bvec3& b);

		bvec4(const vec2& a, bool b, bool c);
		bvec4(bool a, const vec2& b, bool c);
		bvec4(bool a, bool b, const vec2& c);
		bvec4(const vec2& a, const vec2& b);
		bvec4(const vec3& a, bool b);
		bvec4(bool a, const vec3& b);
		bvec4(const vec4& a);

		bvec4(const ivec2& a, bool b, bool c);
		bvec4(bool a, const ivec2& b, bool c);
		bvec4(bool a, bool b, const ivec2& c);
		bvec4(const ivec2& a, const ivec2& b);
		bvec4(const ivec3& a, bool b);
		bvec4(bool a, const ivec3& b);
		bvec4(const ivec4& a);

		bvec4(const uvec2& a, bool b, bool c);
		bvec4(bool a, const uvec2& b, bool c);
		bvec4(bool a, bool b, const uvec2& c);
		bvec4(const uvec2& a, const uvec2& b);
		bvec4(const uvec3& a, bool b);
		bvec4(bool a, const uvec3& b);
		bvec4(const uvec4& a);

		bool operator[](unsigned int i) const {
			return v[i];
		}

		bool& operator[](unsigned int i) {
			return v[i];
		}
	};

	inline std::ostream& operator<<(std::ostream& os, const bvec2& a) {
		os << "bvec2(" << a.x << ", " << a.y << ")";
		return os;
	}

	inline std::ostream& operator<<(std::ostream& os, const bvec3& a) {
		os << "bvec3(" << a.x << ", " << a.y << ", " << a.z << ")";
		return os;
	}

	inline std::ostream& operator<<(std::ostream& os, const bvec4& a) {
		os << "bvec4(" << a.x << ", " << a.y << ", " << a.z << ", " << a.w << ")";
		return os;
	}
}

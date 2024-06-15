#pragma once
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
	};

}

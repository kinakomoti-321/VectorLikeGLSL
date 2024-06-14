#pragma once
namespace VectorLikeGLSL {
	//-----------------------------------------
	// scalar_swizzle
	//-----------------------------------------
	template<unsigned int I>
	struct scalar_swizzle
	{
		float v[1];
		float& operator=(const float x) {
			v[I] = x;
			return v[I];
		}
		operator float() const {
			return v[I];
		}
	};
}

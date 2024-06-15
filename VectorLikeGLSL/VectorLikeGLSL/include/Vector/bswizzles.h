#pragma once

namespace VectorLikeGLSL {
	//-----------------------------------------
	// scalar_swizzle
	//-----------------------------------------
	template<unsigned int I>
	struct Bscalar_swizzle
	{
		bool v[1];
		float& operator=(const float x) {
			v[I] = x;
			return v[I];
		}
		operator bool() const {
			return v[I];
		}
	};


	template<typename vec_type, unsigned int i0_, unsigned int i1_>
	struct BVector2_Swizzle {
		bool v[2];
		vec_type operator=(const vec_type& vec) {
			return vec_type(v[i0_] = vec.x, v[i1_] = vec.y);
		}
		operator vec_type() {
			return vec_type(v[i0_], v[i1_]);
		}
	};

	template<typename vec_type, unsigned int i0_, unsigned int i1_, unsigned int i2_>
	struct BVector3_Swizzle {
		bool v[3];
		vec_type operator=(const vec_type& vec) {
			return vec_type(v[i0_] = vec.x, v[i1_] = vec.y, v[i2_] = vec.z);
		}
		operator vec_type() {
			return vec_type(v[i0_], v[i1_], v[i2_]);
		}
	};

	template<typename vec_type, unsigned int i0_, unsigned int i1_, unsigned int i2_, unsigned int i3_>
	struct BVector4_Swizzle {
		bool v[4];
		vec_type operator=(const vec_type& vec) {
			return vec_type(v[i0_] = vec.x, v[i1_] = vec.y, v[i2_] = vec.z, v[i3_]);
		}
		operator vec_type() {
			return vec_type(v[i0_], v[i1_], v[i2_], v[i3_]);
		}
	};

}

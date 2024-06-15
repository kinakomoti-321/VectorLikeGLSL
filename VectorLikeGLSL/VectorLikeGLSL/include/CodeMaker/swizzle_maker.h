//---------------------------------------------------------------------------------
//---------------------------------------------------------------------------------
// File: swizzle_maker.h
// swizzle operator code maker
//---------------------------------------------------------------------------------
//---------------------------------------------------------------------------------

#pragma once

#include <fstream>
#include <string>
#include "../vector_like_glsl.h"
#include "../common/common.h"

#define VECTOR_SWIZZLE_FORMAT(a) "Vector" + std::to_string(a) + "_Swizzle"
#define SCALAR_SWIZZLE_FORMAT(a) "scalar_swizzle<" + std::to_string(a) + ">"

#define VECTOR2_NAME "vec2"
#define VECTOR3_NAME "vec3"
#define VECTOR4_NAME "vec4"

#define BVECTOR_SWIZZLE_FORMAT(a) "BVector" + std::to_string(a) + "_Swizzle"
#define BSCALAR_SWIZZLE_FORMAT(a) "Bscalar_swizzle<" + std::to_string(a) + ">"

#define BVECTOR2_NAME "bvec2"	
#define BVECTOR3_NAME "bvec3"
#define BVECTOR4_NAME "bvec4"

#define IVECTOR_SWIZZLE_FORMAT(a) "IVector" + std::to_string(a) + "_Swizzle"
#define ISCALAR_SWIZZLE_FORMAT(a) "Iscalar_swizzle<" + std::to_string(a) + ">"
#define IVECTOR2_NAME "ivec2"
#define IVECTOR3_NAME "ivec3"
#define IVECTOR4_NAME "ivec4"

#define UVECTOR_SWIZZLE_FORMAT(a) "UVector" + std::to_string(a) + "_Swizzle"
#define USCALAR_SWIZZLE_FORMAT(a) "Uscalar_swizzle<" + std::to_string(a) + ">"
#define UVECTOR2_NAME "uvec2"
#define UVECTOR3_NAME "uvec3"
#define UVECTOR4_NAME "uvec4"

namespace VectorLikeGLSL {
	enum VectorType {
		VECTOR,
		BVECTOR,
		IVECTOR,
		UVECTOR
	};

	inline std::string NumberToSwizzleXYZW(int s) {
		if (s == 0) return "x";
		if (s == 1) return "y";
		if (s == 2) return "z";
		if (s == 3) return "w";
		return "";
	}

	inline std::string GetSwizzleXYZW(int dim = 1, int i = 0, int j = 0, int k = 0, int l = 0) {
		if (dim == 1) {
			return NumberToSwizzleXYZW(i);
		}
		else if (dim == 2) {
			return NumberToSwizzleXYZW(i) + NumberToSwizzleXYZW(j);
		}
		else if (dim == 3) {
			return NumberToSwizzleXYZW(i) + NumberToSwizzleXYZW(j) + NumberToSwizzleXYZW(k);
		}
		else if (dim == 4) {
			return NumberToSwizzleXYZW(i) + NumberToSwizzleXYZW(j) + NumberToSwizzleXYZW(k) + NumberToSwizzleXYZW(l);
		}
		VLG_ERROREXIT("Invalid dimension");
		return "";
	}

	inline std::string NumberToSwizzleRGBA(int s) {
		if (s == 0) return "r";
		if (s == 1) return "g";
		if (s == 2) return "b";
		if (s == 3) return "a";
		return "";
	}

	inline std::string GetSwizzleRGBA(int dim = 1, int i = 0, int j = 0, int k = 0, int l = 0) {
		if (dim == 1) {
			return NumberToSwizzleRGBA(i);
		}
		else if (dim == 2) {
			return NumberToSwizzleRGBA(i) + NumberToSwizzleRGBA(j);
		}
		else if (dim == 3) {
			return NumberToSwizzleRGBA(i) + NumberToSwizzleRGBA(j) + NumberToSwizzleRGBA(k);
		}
		else if (dim == 4) {
			return NumberToSwizzleRGBA(i) + NumberToSwizzleRGBA(j) + NumberToSwizzleRGBA(k) + NumberToSwizzleRGBA(l);
		}
		VLG_ERROREXIT("Invalid dimension");
		return "";
	}



	inline std::string GetFormatFloatVectorSwizzle(int dim = 1, int i = 0, int j = 0, int k = 0, int l = 0) {
		if (dim == 1) {
			return SCALAR_SWIZZLE_FORMAT(i);
		}
		else if (dim == 2) {
			return VECTOR_SWIZZLE_FORMAT(dim) + "<" + VECTOR2_NAME + "," + std::to_string(i) + "," + std::to_string(j) + ">";
		}
		else if (dim == 3) {
			return VECTOR_SWIZZLE_FORMAT(dim) + "<" + VECTOR3_NAME + "," + std::to_string(i) + "," + std::to_string(j) + "," + std::to_string(k) + ">";
		}
		else if (dim == 4) {
			return VECTOR_SWIZZLE_FORMAT(dim) + "<" + VECTOR4_NAME + "," + std::to_string(i) + "," + std::to_string(j) + "," + std::to_string(k) + "," + std::to_string(l) + ">";
		}
		VLG_ERROREXIT("Invalid dimension");
		return "";
	}
	inline std::string GetFormatBoolVectorSwizzle(int dim = 1, int i = 0, int j = 0, int k = 0, int l = 0) {
		if (dim == 1) {
			return BSCALAR_SWIZZLE_FORMAT(i);
		}
		else if (dim == 2) {
			return BVECTOR_SWIZZLE_FORMAT(dim) + "<" + BVECTOR2_NAME + "," + std::to_string(i) + "," + std::to_string(j) + ">";
		}
		else if (dim == 3) {
			return BVECTOR_SWIZZLE_FORMAT(dim) + "<" + BVECTOR3_NAME + "," + std::to_string(i) + "," + std::to_string(j) + "," + std::to_string(k) + ">";
		}
		else if (dim == 4) {
			return BVECTOR_SWIZZLE_FORMAT(dim) + "<" + BVECTOR4_NAME + "," + std::to_string(i) + "," + std::to_string(j) + "," + std::to_string(k) + "," + std::to_string(l) + ">";
		}
		VLG_ERROREXIT("Invalid dimension");
		return "";
	}

	inline std::string GetFormatIntVectorSwizzle(int dim = 1, int i = 0, int j = 0, int k = 0, int l = 0) {
		if (dim == 1) {
			return ISCALAR_SWIZZLE_FORMAT(i);
		}
		else if (dim == 2) {
			return IVECTOR_SWIZZLE_FORMAT(dim) + "<" + IVECTOR2_NAME + "," + std::to_string(i) + "," + std::to_string(j) + ">";
		}
		else if (dim == 3) {
			return IVECTOR_SWIZZLE_FORMAT(dim) + "<" + IVECTOR3_NAME + "," + std::to_string(i) + "," + std::to_string(j) + "," + std::to_string(k) + ">";
		}
		else if (dim == 4) {
			return IVECTOR_SWIZZLE_FORMAT(dim) + "<" + IVECTOR4_NAME + "," + std::to_string(i) + "," + std::to_string(j) + "," + std::to_string(k) + "," + std::to_string(l) + ">";
		}
		VLG_ERROREXIT("Invalid dimension");
		return "";
	}

	inline std::string GetFormatUIntVectorSwizzle(int dim = 1, int i = 0, int j = 0, int k = 0, int l = 0) {
		if (dim == 1) {
			return USCALAR_SWIZZLE_FORMAT(i);
		}
		else if (dim == 2) {
			return UVECTOR_SWIZZLE_FORMAT(dim) + "<" + UVECTOR2_NAME + "," + std::to_string(i) + "," + std::to_string(j) + ">";
		}
		else if (dim == 3) {
			return UVECTOR_SWIZZLE_FORMAT(dim) + "<" + UVECTOR3_NAME + "," + std::to_string(i) + "," + std::to_string(j) + "," + std::to_string(k) + ">";
		}
		else if (dim == 4) {
			return UVECTOR_SWIZZLE_FORMAT(dim) + "<" + UVECTOR4_NAME + "," + std::to_string(i) + "," + std::to_string(j) + "," + std::to_string(k) + "," + std::to_string(l) + ">";
		}
		VLG_ERROREXIT("Invalid dimension");
		return "";
	}

	inline std::string GetFormatVectorSwizzle(int dim = 1,VectorType type =VectorType::VECTOR ,int i = 0, int j = 0, int k = 0, int l = 0) {
		switch (type)
		{
		case VectorLikeGLSL::VECTOR:
			return GetFormatFloatVectorSwizzle(dim, i, j, k, l);
			break;
		case VectorLikeGLSL::BVECTOR:
			return GetFormatBoolVectorSwizzle(dim, i, j, k, l);
			break;
		case VectorLikeGLSL::IVECTOR:
			return GetFormatIntVectorSwizzle(dim, i, j, k, l);
			break;
		case VectorLikeGLSL::UVECTOR:
			return GetFormatUIntVectorSwizzle(dim, i, j, k, l);
			break;
		default:
			break;
		}
		return "";
	}

	inline bool MakeVectorSwizzleCode(std::string filepath, int dim,VectorType type) {
		std::ofstream file(filepath);

		if (!file.is_open()) {
			VLG_ERROR("Failed to open the file.");
			return false;
		}

		int DIM = dim;

		for (int i = 0; i < DIM; ++i) {
			std::string classname = GetFormatVectorSwizzle(1,type, i);
			std::string swizzle = GetSwizzleXYZW(1, i);

			file << classname << " " << swizzle << ";" << std::endl;
		}

		file << std::endl;

		for (int i = 0; i < DIM; ++i) {
			for (int j = 0; j < DIM; ++j) {

				std::string classname = GetFormatVectorSwizzle(2,type, i, j);
				std::string swizzle = GetSwizzleXYZW(2, i, j);

				file << classname << " " << swizzle << ";" << std::endl;
			}
		}

		file << std::endl;

		for (int i = 0; i < DIM; ++i) {
			for (int j = 0; j < DIM; ++j) {
				for (int k = 0; k < DIM; ++k) {
					std::string classname = GetFormatVectorSwizzle(3,type, i, j, k);
					std::string swizzle = GetSwizzleXYZW(3, i, j, k);

					file << classname << " " << swizzle << ";" << std::endl;
				}
			}
		}

		file << std::endl;

		for (int i = 0; i < DIM; ++i) {
			for (int j = 0; j < DIM; ++j) {
				for (int k = 0; k < DIM; ++k) {
					for (int l = 0; l < DIM; ++l) {
						std::string classname = GetFormatVectorSwizzle(4,type, i, j, k, l);
						std::string swizzle = GetSwizzleXYZW(4, i, j, k, l);


						file << classname << " " << swizzle << ";" << std::endl;
					}
				}
			}
		}

		file << std::endl;

		//RGBA
		for (int i = 0; i < DIM; ++i) {
			std::string classname = GetFormatVectorSwizzle(1,type, i);
			std::string swizzle = GetSwizzleRGBA(1, i);

			file << classname << " " << swizzle << ";" << std::endl;
		}

		file << std::endl;

		for (int i = 0; i < DIM; ++i) {
			for (int j = 0; j < DIM; ++j) {

				std::string classname = GetFormatVectorSwizzle(2,type, i, j);
				std::string swizzle = GetSwizzleRGBA(2, i, j);

				file << classname << " " << swizzle << ";" << std::endl;
			}
		}

		file << std::endl;

		for (int i = 0; i < DIM; ++i) {
			for (int j = 0; j < DIM; ++j) {
				for (int k = 0; k < DIM; ++k) {
					std::string classname = GetFormatVectorSwizzle(3,type, i, j, k);
					std::string swizzle = GetSwizzleRGBA(3, i, j, k);

					file << classname << " " << swizzle << ";" << std::endl;
				}
			}
		}

		file << std::endl;

		for (int i = 0; i < DIM; ++i) {
			for (int j = 0; j < DIM; ++j) {
				for (int k = 0; k < DIM; ++k) {
					for (int l = 0; l < DIM; ++l) {
						std::string classname = GetFormatVectorSwizzle(4,type, i, j, k, l);
						std::string swizzle = GetSwizzleRGBA(4, i, j, k, l);

						file << classname << " " << swizzle << ";" << std::endl;
					}
				}
			}
		}
		file.close();

		return true;
	}

} // namespace VectorLikeGLSL


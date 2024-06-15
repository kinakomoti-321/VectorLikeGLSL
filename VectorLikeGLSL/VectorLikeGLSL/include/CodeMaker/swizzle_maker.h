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


namespace VectorLikeGLSL {

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

	inline std::string GetFormatVectorSwizzle(int dim = 1, int i = 0, int j = 0, int k = 0, int l = 0) {
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

	inline bool MakeVectorSwizzleCode(std::string filepath, int dim) {
		std::ofstream file(filepath);

		if (!file.is_open()) {
			VLG_ERROR("Failed to open the file.");
			return false;
		}

		int DIM = dim;

		for (int i = 0; i < DIM; ++i) {
			std::string classname = GetFormatVectorSwizzle(1, i);
			std::string swizzle = GetSwizzleXYZW(1, i);

			file << classname << " " << swizzle << ";" << std::endl;
		}

		file << std::endl;

		for (int i = 0; i < DIM; ++i) {
			for (int j = 0; j < DIM; ++j) {

				std::string classname = GetFormatVectorSwizzle(2, i, j);
				std::string swizzle = GetSwizzleXYZW(2, i, j);

				file << classname << " " << swizzle << ";" << std::endl;
			}
		}

		file << std::endl;

		for (int i = 0; i < DIM; ++i) {
			for (int j = 0; j < DIM; ++j) {
				for (int k = 0; k < DIM; ++k) {
					std::string classname = GetFormatVectorSwizzle(3, i, j, k);
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
						std::string classname = GetFormatVectorSwizzle(4, i, j, k, l);
						std::string swizzle = GetSwizzleXYZW(4, i, j, k, l);


						file << classname << " " << swizzle << ";" << std::endl;
					}
				}
			}
		}

		file << std::endl;

		//RGBA
		for (int i = 0; i < DIM; ++i) {
			std::string classname = GetFormatVectorSwizzle(1, i);
			std::string swizzle = GetSwizzleRGBA(1, i);

			file << classname << " " << swizzle << ";" << std::endl;
		}

		file << std::endl;

		for (int i = 0; i < DIM; ++i) {
			for (int j = 0; j < DIM; ++j) {

				std::string classname = GetFormatVectorSwizzle(2, i, j);
				std::string swizzle = GetSwizzleRGBA(2, i, j);

				file << classname << " " << swizzle << ";" << std::endl;
			}
		}

		file << std::endl;

		for (int i = 0; i < DIM; ++i) {
			for (int j = 0; j < DIM; ++j) {
				for (int k = 0; k < DIM; ++k) {
					std::string classname = GetFormatVectorSwizzle(3, i, j, k);
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
						std::string classname = GetFormatVectorSwizzle(4, i, j, k, l);
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


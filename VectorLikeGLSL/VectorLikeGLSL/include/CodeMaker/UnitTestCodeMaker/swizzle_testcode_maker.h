#pragma once
#include <iostream>
#include <fstream>

#include "../swizzle_maker.h"
namespace VectorLikeGLSL {

#define VECTOR_NAME_DIM(dim) "vec" + std::to_string(dim)
#define INITIAL_VALUE1 1.0f
#define INITIAL_VALUE2 2.0f
#define INITIAL_VALUE3 3.0f
#define INITIAL_VALUE4 4.0f
#define INITIAL_VALUE1_STR std::to_string(INITIAL_VALUE1)
#define INITIAL_VALUE2_STR std::to_string(INITIAL_VALUE2)
#define INITIAL_VALUE3_STR std::to_string(INITIAL_VALUE3)
#define INITIAL_VALUE4_STR std::to_string(INITIAL_VALUE4)

	inline std::string GetInitialValue(int dim) {
		if (dim == 2) return  VECTOR_NAME_DIM(dim) + "(" + INITIAL_VALUE1_STR + "," + INITIAL_VALUE2_STR + ")";
		if (dim == 3) return VECTOR_NAME_DIM(dim) + "(" + INITIAL_VALUE1_STR + "," + INITIAL_VALUE2_STR + "," + INITIAL_VALUE3_STR + ")";
		if (dim == 4) return VECTOR_NAME_DIM(dim) + "(" + INITIAL_VALUE1_STR + "," + INITIAL_VALUE2_STR + "," + INITIAL_VALUE3_STR + "," + INITIAL_VALUE4_STR + ")";
		VLG_ERROREXIT("Invalid dimension");
		return "";
	}

	inline std::string GetAnswerValue(int i) {
		if (i == 0) return INITIAL_VALUE1_STR;
		if (i == 1) return INITIAL_VALUE2_STR;
		if (i == 2) return INITIAL_VALUE3_STR;
		if (i == 3) return INITIAL_VALUE4_STR;
		VLG_ERROREXIT("Invalid index");
		return "";
	}

	inline std::string GetSwizzleTestCodeXYZW(int fromDim, int toDim, int i0 = 0, int i1 = 0, int i2 = 0, int i3 = 0) {

		std::string fromVectorName = VECTOR_NAME_DIM(fromDim);
		std::string toVectorName = VECTOR_NAME_DIM(toDim);
		std::string swizzle = GetSwizzleXYZW(toDim, i0, i1, i2, i3);

		std::string code = "";

		std::string a1 = GetAnswerValue(i0);
		std::string a2 = GetAnswerValue(i1);
		std::string a3 = GetAnswerValue(i2);
		std::string a4 = GetAnswerValue(i3);


		code += "TEST(SwittzleTest, " + fromVectorName + "_" + swizzle + ") {" + '\n';
		code += fromVectorName + " v1 = " + GetInitialValue(fromDim) + ";" + '\n';
		if (toDim == 1) {

			code += "EXPECT_EQ(float(v1." + swizzle + "), " + a1 + ");" + '\n';
		}
		else {
			code += toVectorName + " v2 = v1." + swizzle + ";" + '\n';

			code += "EXPECT_EQ(float(v2.x)," + a1 + ");" + '\n';
			if (toDim >= 2) code += "EXPECT_EQ(float(v2.y)," + a2 + ");" + '\n';
			if (toDim >= 3) code += "EXPECT_EQ(float(v2.z)," + a3 + ");" + '\n';
			if (toDim >= 4) code += "EXPECT_EQ(float(v2.w)," + a4 + ");" + '\n';
		}

		code += "} \n";

		return code;
	}

	inline std::string GetSwizzleTestCodeRGBA(int fromDim, int toDim, int i0 = 0, int i1 = 0, int i2 = 0, int i3 = 0) {

		std::string fromVectorName = VECTOR_NAME_DIM(fromDim);
		std::string toVectorName = VECTOR_NAME_DIM(toDim);
		std::string swizzle = GetSwizzleRGBA(toDim, i0, i1, i2, i3);

		std::string code = "";

		std::string a1 = GetAnswerValue(i0);
		std::string a2 = GetAnswerValue(i1);
		std::string a3 = GetAnswerValue(i2);
		std::string a4 = GetAnswerValue(i3);


		code += "TEST(SwittzleTest, " + fromVectorName + "_" + swizzle + ") {" + '\n';
		code += fromVectorName + " v1 = " + GetInitialValue(fromDim) + ";" + '\n';
		if (toDim == 1) {

			code += "EXPECT_EQ(float(v1." + swizzle + "), " + a1 + ");" + '\n';
		}
		else {
			code += toVectorName + " v2 = v1." + swizzle + ";" + '\n';

			code += "EXPECT_EQ(float(v2.x)," + a1 + ");" + '\n';
			if (toDim >= 2) code += "EXPECT_EQ(float(v2.y)," + a2 + ");" + '\n';
			if (toDim >= 3) code += "EXPECT_EQ(float(v2.z)," + a3 + ");" + '\n';
			if (toDim >= 4) code += "EXPECT_EQ(float(v2.w)," + a4 + ");" + '\n';
		}

		code += "} \n";

		return code;
	}

	inline bool MakeVectorSwizzleUnitTest(std::string filepath, int dim) {
		std::ofstream file(filepath);

		if (!file.is_open()) {
			VLG_ERROR("Failed to open the file.");
			return false;
		}

		int DIM = dim;

		file << "#include \"pch.h\" \n #include \"vector_like_glsl.h\" \n using namespace VectorLikeGLSL; \n";
		file << "namespace " << "Vector" << std::to_string(dim) << " {" << "\n";

		for (int i = 0; i < DIM; ++i) {
			file << GetSwizzleTestCodeXYZW(DIM, 1, i) << std::endl;
		}

		for (int i = 0; i < DIM; ++i) {
			for (int j = 0; j < DIM; ++j) {
				file << GetSwizzleTestCodeXYZW(DIM, 2, i, j) << std::endl;
			}
		}

		for (int i = 0; i < DIM; ++i) {
			for (int j = 0; j < DIM; ++j) {
				for (int k = 0; k < DIM; ++k) {
					file << GetSwizzleTestCodeXYZW(DIM, 3, i, j, k) << std::endl;
				}
			}
		}

		for (int i = 0; i < DIM; ++i) {
			for (int j = 0; j < DIM; ++j) {
				for (int k = 0; k < DIM; ++k) {
					for (int l = 0; l < DIM; ++l) {
						file << GetSwizzleTestCodeXYZW(DIM, 4, i, j, k,l) << std::endl;
					}
				}
			}
		}

		for (int i = 0; i < DIM; ++i) {
			file << GetSwizzleTestCodeRGBA(DIM, 1, i) << std::endl;
		}

		for (int i = 0; i < DIM; ++i) {
			for (int j = 0; j < DIM; ++j) {
				file << GetSwizzleTestCodeRGBA(DIM, 2, i, j) << std::endl;
			}
		}

		for (int i = 0; i < DIM; ++i) {
			for (int j = 0; j < DIM; ++j) {
				for (int k = 0; k < DIM; ++k) {
					file << GetSwizzleTestCodeRGBA(DIM, 3, i, j, k) << std::endl;
				}
			}
		}

		for (int i = 0; i < DIM; ++i) {
			for (int j = 0; j < DIM; ++j) {
				for (int k = 0; k < DIM; ++k) {
					for (int l = 0; l < DIM; ++l) {
						file << GetSwizzleTestCodeRGBA(DIM, 4, i, j, k,l) << std::endl;
					}
				}
			}
		}


		file << "} \n";

		file.close();

		return true;
	}

}

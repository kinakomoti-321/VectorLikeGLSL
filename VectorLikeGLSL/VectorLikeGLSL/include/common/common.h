#pragma once
namespace VectorLikeGLSL {

//--------------------------------------------------------------------------------
//Error Message
//--------------------------------------------------------------------------------
#define VLG_ERROR(msg) std::cerr << "VLG Error: " << msg << std::endl;
#define VLG_ERROREXIT(msg) std::cerr << "VLG Error: " << msg << std::endl; exit(1);

//--------------------------------------------------------------------------------
//Constants
//--------------------------------------------------------------------------------
	constexpr float PI = 3.1415926535897932384626433832795f;
	constexpr float PI2 = PI * 2.0f;
	constexpr float PI4 = PI * 4.0f;
	constexpr float PI_INV = 1.0f / PI;
	constexpr float PI2_INV = 1.0f / PI2;
	constexpr float PI4_INV = 1.0f / PI4;

	constexpr float DEGREES_TO_RADIANS = PI / 180.0f;
	constexpr float RADIANS_TO_DEGREES = 180.0f / PI;
}

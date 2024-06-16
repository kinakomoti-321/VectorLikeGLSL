#pragma once

#include "./common_function.h"
#include "../Vector/vector.h"
namespace VectorLikeGLSL {
	
	//First, converts each component of the normalized
	//floating - point value v into 8 - or 16 - bit integer values.
	//Then, the results are packed into the returned 32 - bit
	//unsigned integer.

	//TODO: Verify that this implementation is correct.

	inline unsigned int packUnorm2x16(const vec2& v) {
		unsigned int x= unsigned int(std::round(clamp(v.x,0.0f,1.0f) * 65535.0f));
		unsigned int y = unsigned int(std::round(clamp(v.y,0.0f,1.0f) * 65535.0f));
		return (x << 16) | y;
	}

	inline unsigned int packSnorm2x16(const vec2& v) {
		int x = int(std::round(clamp(v.x, -1.0f, 1.0f) * 32767.0f));
		int y = int(std::round(clamp(v.y, -1.0f, 1.0f) * 32767.0f));
		return (x << 16) | y;
	}

	inline unsigned int packUnorm4x8(const vec4& v) {
		unsigned int x = unsigned int(std::round(clamp(v.x, 0.0f, 1.0f) * 255.0f));
		unsigned int y = unsigned int(std::round(clamp(v.y, 0.0f, 1.0f) * 255.0f));
		unsigned int z = unsigned int(std::round(clamp(v.z, 0.0f, 1.0f) * 255.0f));
		unsigned int w = unsigned int(std::round(clamp(v.w, 0.0f, 1.0f) * 255.0f));
		return (x << 24) | (y << 16) | (z << 8) | w;
	}

	inline unsigned int packSnorm4x8(const vec4& v) {
		int x = int(std::round(clamp(v.x, -1.0f, 1.0f) * 127.0f));
		int y = int(std::round(clamp(v.y, -1.0f, 1.0f) * 127.0f));
		int z = int(std::round(clamp(v.z, -1.0f, 1.0f) * 127.0f));
		int w = int(std::round(clamp(v.w, -1.0f, 1.0f) * 127.0f));
		return (x << 24) | (y << 16) | (z << 8) | w;
	}
	
	inline vec2 unpackUnorm2x16(unsigned int p) {
		return vec2((p >> 16) & 0xFFFF, p & 0xFFFF) / 65535.0f;
	}

	inline vec2 unpackSnorm2x16(unsigned int p) {
		return vec2((p >> 16) & 0xFFFF, p & 0xFFFF) / 32767.0f;
	}

	inline vec4 unpackUnorm4x8(unsigned int p) {
		return vec4((p >> 24) & 0xFF, (p >> 16) & 0xFF, (p >> 8) & 0xFF, p & 0xFF) / 255.0f;
	}
	
	inline vec4 unpackSnorm4x8(unsigned int p) {
		return vec4((p >> 24) & 0xFF, (p >> 16) & 0xFF, (p >> 8) & 0xFF, p & 0xFF) / 127.0f;
	}

}

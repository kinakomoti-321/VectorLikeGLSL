#pragma once

#include "./vec.h"
#include "./bvec.h"
#include "./ivec.h"
#include "./uvec.h"

namespace VectorLikeGLSL {
	
	//----------------------------------------
	//vec cast
	//----------------------------------------
	vec2::vec2(const vec3& a) : v{ a.x,a.y } {};
	vec2::vec2(const vec4& a) : v{ a.x,a.y } {};

	vec2::vec2(const ivec2& a) : v{ float(a.x),float(a.y) } {};
	vec2::vec2(const ivec3& a) : v{ float(a.x),float(a.y) } {};
	vec2::vec2(const ivec4& a) : v{ float(a.x),float(a.y) } {};

	vec2::vec2(const uvec2& a) : v{ float(a.x),float(a.y) } {};
	vec2::vec2(const uvec3& a) : v{ float(a.x),float(a.y) } {};
	vec2::vec2(const uvec4& a) : v{ float(a.x),float(a.y) } {};

	vec2::vec2(const bvec2& a) : v{ float(a.x),float(a.y) } {};
	vec2::vec2(const bvec3& a) : v{ float(a.x),float(a.y) } {};
	vec2::vec2(const bvec4& a) : v{ float(a.x),float(a.y) } {};

	vec3::vec3(const vec2& a, float z) : v{ a.x,a.y,z } {};
	vec3::vec3(float x, const vec2& b) : v{ x,b.x,b.y } {};
	vec3::vec3(const vec4& a) : v{ a.x,a.y,a.z } {};

	vec3::vec3(const ivec2& a, int z) : v{ float(a.x),float(a.y),float(z) } {};
	vec3::vec3(int x, const ivec2& b) : v{ float(x),float(b.x),float(b.y) } {};
	vec3::vec3(const ivec3& a) : v{ float(a.x),float(a.y),float(a.z) } {};
	vec3::vec3(const ivec4& a) : v{ float(a.x),float(a.y),float(a.z) } {};

	vec3::vec3(const uvec2& a, unsigned int z) : v{ float(a.x),float(a.y),float(z) } {};
	vec3::vec3(unsigned int x, const uvec2& b) : v{ float(x),float(b.x),float(b.y) } {};
	vec3::vec3(const uvec3& a) : v{ float(a.x),float(a.y),float(a.z) } {};
	vec3::vec3(const uvec4& a) : v{ float(a.x),float(a.y),float(a.z) } {};

	vec3::vec3(const bvec2& a, bool z) : v{ float(a.x),float(a.y),float(z) } {};
	vec3::vec3(bool x, const bvec2& b) : v{ float(x),float(b.x),float(b.y) } {};
	vec3::vec3(const bvec3& a) : v{ float(a.x),float(a.y),float(a.z) } {};
	vec3::vec3(const bvec4& a) : v{ float(a.x),float(a.y),float(a.z) } {};

	vec4::vec4(const vec2& a, float z, float w) : v{ a.x,a.y,z,w } {};
	vec4::vec4(float x, const vec2& b, float w) : v{ x,b.x,b.y,w } {};
	vec4::vec4(float x, float y, const vec2& c) : v{ x,y,c.x,c.y } {};
	vec4::vec4(const vec2& a, const vec2& b) : v{ a.x,a.y,b.x,b.y } {};
	vec4::vec4(const vec3& a, float w) : v{ a.x,a.y,a.z,w } {};
	vec4::vec4(float x, const vec3& b) : v{ x,b.x,b.y,b.z } {};

	vec4::vec4(const ivec2& a, int z, int w) : v{ float(a.x),float(a.y),float(z),float(w) } {};
	vec4::vec4(int x, const ivec2& b, int w) : v{ float(x),float(b.x),float(b.y),float(w) } {};
	vec4::vec4(int x, int y, const ivec2& c) : v{ float(x),float(y),float(c.x),float(c.y) } {};
	vec4::vec4(const ivec2& a, const ivec2& b) : v{ float(a.x),float(a.y),float(b.x),float(b.y) } {};
	vec4::vec4(const ivec3& a, int w) : v{ float(a.x),float(a.y),float(a.z),float(w) } {};
	vec4::vec4(int x, const ivec3& b) : v{ float(x),float(b.x),float(b.y),float(b.z) } {};
	vec4::vec4(const ivec4& a) : v{ float(a.x),float(a.y),float(a.z),float(a.w) } {};
	
	vec4::vec4(const uvec2& a, unsigned int z, unsigned int w) : v{ float(a.x),float(a.y),float(z),float(w) } {};
	vec4::vec4(unsigned int x, const uvec2& b, unsigned int w) : v{ float(x),float(b.x),float(b.y),float(w) } {};
	vec4::vec4(unsigned int x, unsigned int y, const uvec2& c) : v{ float(x),float(y),float(c.x),float(c.y) } {};
	vec4::vec4(const uvec2& a, const uvec2& b) : v{ float(a.x),float(a.y),float(b.x),float(b.y) } {};
	vec4::vec4(const uvec3& a, unsigned int w) : v{ float(a.x),float(a.y),float(a.z),float(w) } {};
	vec4::vec4(unsigned int x, const uvec3& b) : v{ float(x),float(b.x),float(b.y),float(b.z) } {};
	vec4::vec4(const uvec4& a) : v{ float(a.x),float(a.y),float(a.z),float(a.w) } {};

	vec4::vec4(const bvec2& a, bool z, bool w) : v{ float(a.x),float(a.y),float(z),float(w) } {};
	vec4::vec4(bool x, const bvec2& b, bool w) : v{ float(x),float(b.x),float(b.y),float(w) } {};
	vec4::vec4(bool x, bool y, const bvec2& c) : v{ float(x),float(y),float(c.x),float(c.y) } {};
	vec4::vec4(const bvec2& a, const bvec2& b) : v{ float(a.x),float(a.y),float(b.x),float(b.y) } {};
	vec4::vec4(const bvec3& a, bool w) : v{ float(a.x),float(a.y),float(a.z),float(w) } {};
	vec4::vec4(bool x, const bvec3& b) : v{ float(x),float(b.x),float(b.y),float(b.z) } {};
	vec4::vec4(const bvec4& a) : v{ float(a.x),float(a.y),float(a.z),float(a.w) } {};


	//----------------------------------------
	//ivec cast
	//----------------------------------------
	
	ivec2::ivec2(const ivec3& a) : v{ a.x,a.y } {};
	ivec2::ivec2(const ivec4& a) : v{ a.x,a.y } {};

	ivec2::ivec2(const vec2& a) : v{ int(a.x),int(a.y) } {};
	ivec2::ivec2(const vec3& a) : v{ int(a.x),int(a.y) } {};
	ivec2::ivec2(const vec4& a) : v{ int(a.x),int(a.y) } {};

	ivec2::ivec2(const uvec2& a) : v{ int(a.x),int(a.y) } {};
	ivec2::ivec2(const uvec3& a) : v{ int(a.x),int(a.y) } {};
	ivec2::ivec2(const uvec4& a) : v{ int(a.x),int(a.y) } {};

	ivec3::ivec3(const ivec2& a, int z) : v{ a.x,a.y,z } {};
	ivec3::ivec3(int x, const ivec2& b) : v{ x,b.x,b.y } {};
	ivec3::ivec3(const ivec4& a) : v{ a.x,a.y,a.z } {};

	ivec3::ivec3(const vec2& a, float z) : v{ int(a.x),int(a.y),int(z) } {};
	ivec3::ivec3(float x, const vec2& b) : v{ int(x),int(b.x),int(b.y) } {};
	ivec3::ivec3(const vec3& a) : v{ int(a.x),int(a.y),int(a.z) } {};
	ivec3::ivec3(const vec4& a) : v{ int(a.x),int(a.y),int(a.z) } {};

	ivec3::ivec3(const uvec2& a, unsigned int z) : v{ int(a.x),int(a.y),int(z) } {};
	ivec3::ivec3(unsigned int x, const uvec2& b) : v{ int(x),int(b.x),int(b.y) } {};
	ivec3::ivec3(const uvec3& a) : v{ int(a.x),int(a.y),int(a.z) } {};
	ivec3::ivec3(const uvec4& a) : v{ int(a.x),int(a.y),int(a.z) } {};

	ivec3::ivec3(const bvec2& a, bool z) : v{ int(a.x),int(a.y),int(z) } {};
	ivec3::ivec3(bool x, const bvec2& b) : v{ int(x),int(b.x),int(b.y) } {};
	ivec3::ivec3(const bvec3& a) : v{ int(a.x),int(a.y),int(a.z) } {};
	ivec3::ivec3(const bvec4& a) : v{ int(a.x),int(a.y),int(a.z) } {};

	ivec4::ivec4(const ivec2& a, int z, int w) : v{ a.x,a.y,z,w } {};
	ivec4::ivec4(int x, const ivec2& b, int w) : v{ x,b.x,b.y,w } {};
	ivec4::ivec4(int x, int y, const ivec2& c) : v{ x,y,c.x,c.y } {};
	ivec4::ivec4(const ivec3& a, int w) : v{ a.x,a.y,a.z,w } {};
	ivec4::ivec4(int x, const ivec3& b) : v{ x,b.x,b.y,b.z } {};

	ivec4::ivec4(const vec2& a, float z, float w) : v{ int(a.x),int(a.y),int(z),int(w) } {};
	ivec4::ivec4(float x, const vec2& b, float w) : v{ int(x),int(b.x),int(b.y),int(w) } {};
	ivec4::ivec4(float x, float y, const vec2& c) : v{ int(x),int(y),int(c.x),int(c.y) } {};
	ivec4::ivec4(const vec3& a, float w) : v{ int(a.x),int(a.y),int(a.z),int(w) } {};
	ivec4::ivec4(float x, const vec3& b) : v{ int(x),int(b.x),int(b.y),int(b.z) } {};
	ivec4::ivec4(const vec4& a) : v{ int(a.x),int(a.y),int(a.z),int(a.w) } {};

	ivec4::ivec4(const uvec2& a, unsigned int z, unsigned int w) : v{ int(a.x),int(a.y),int(z),int(w) } {};
	ivec4::ivec4(unsigned int x, const uvec2& b, unsigned int w) : v{ int(x),int(b.x),int(b.y),int(w) } {};
	ivec4::ivec4(unsigned int x, unsigned int y, const uvec2& c) : v{ int(x),int(y),int(c.x),int(c.y) } {};
	ivec4::ivec4(const uvec3& a, unsigned int w) : v{ int(a.x),int(a.y),int(a.z),int(w) } {};
	ivec4::ivec4(unsigned int x, const uvec3& b) : v{ int(x),int(b.x),int(b.y),int(b.z) } {};
	ivec4::ivec4(const uvec4& a) : v{ int(a.x),int(a.y),int(a.z),int(a.w) } {};

	ivec4::ivec4(const bvec2& a, bool z, bool w) : v{ int(a.x),int(a.y),int(z),int(w) } {};
	ivec4::ivec4(bool x, const bvec2& b, bool w) : v{ int(x),int(b.x),int(b.y),int(w) } {};
	ivec4::ivec4(bool x, bool y, const bvec2& c) : v{ int(x),int(y),int(c.x),int(c.y) } {};
	ivec4::ivec4(const bvec3& a, bool w) : v{ int(a.x),int(a.y),int(a.z),int(w) } {};
	ivec4::ivec4(bool x, const bvec3& b) : v{ int(x),int(b.x),int(b.y),int(b.z) } {};
	ivec4::ivec4(const bvec4& a) : v{ int(a.x),int(a.y),int(a.z),int(a.w) } {};

	//----------------------------------------
	//uvec cast
	//----------------------------------------
	
	uvec2::uvec2(const uvec3& a) : v{ a.x,a.y } {};
	uvec2::uvec2(const uvec4& a) : v{ a.x,a.y } {};

	uvec2::uvec2(const vec2& a) : v{ unsigned int(a.x),unsigned int(a.y) } {};
	uvec2::uvec2(const vec3& a) : v{ unsigned int(a.x),unsigned int(a.y) } {};
	uvec2::uvec2(const vec4& a) : v{ unsigned int(a.x),unsigned int(a.y) } {};

	uvec2::uvec2(const ivec2& a) : v{ unsigned int(a.x),unsigned int(a.y) } {};
	uvec2::uvec2(const ivec3& a) : v{ unsigned int(a.x),unsigned int(a.y) } {};
	uvec2::uvec2(const ivec4& a) : v{ unsigned int(a.x),unsigned int(a.y) } {};

	uvec2::uvec2(const bvec2& a) : v{ unsigned int(a.x),unsigned int(a.y) } {};
	uvec2::uvec2(const bvec3& a) : v{ unsigned int(a.x),unsigned int(a.y) } {};
	uvec2::uvec2(const bvec4& a) : v{ unsigned int(a.x),unsigned int(a.y) } {};

	uvec3::uvec3(const uvec2& a, unsigned int z) : v{ a.x,a.y,z } {};
	uvec3::uvec3(unsigned int x, const uvec2& b) : v{ x,b.x,b.y } {};
	uvec3::uvec3(const uvec4& a) : v{ a.x,a.y,a.z } {};

	uvec3::uvec3(const vec2& a, float z) : v{ unsigned int(a.x),unsigned int(a.y),unsigned int(z) } {};
	uvec3::uvec3(float x, const vec2& b) : v{ unsigned int(x),unsigned int(b.x),unsigned int(b.y) } {};
	uvec3::uvec3(const vec3& a) : v{ unsigned int(a.x),unsigned int(a.y),unsigned int(a.z) } {};
	uvec3::uvec3(const vec4& a) : v{ unsigned int(a.x),unsigned int(a.y),unsigned int(a.z) } {};

	uvec3::uvec3(const ivec2& a, int z) : v{ unsigned int(a.x),unsigned int(a.y),unsigned int(z) } {};
	uvec3::uvec3(int x, const ivec2& b) : v{ unsigned int(x),unsigned int(b.x),unsigned int(b.y) } {};
	uvec3::uvec3(const ivec3& a) : v{ unsigned int(a.x),unsigned int(a.y),unsigned int(a.z) } {};
	uvec3::uvec3(const ivec4& a) : v{ unsigned int(a.x),unsigned int(a.y),unsigned int(a.z) } {};

	uvec3::uvec3(const bvec2& a, bool z) : v{ unsigned int(a.x),unsigned int(a.y),unsigned int(z) } {};
	uvec3::uvec3(bool x, const bvec2& b) : v{ unsigned int(x),unsigned int(b.x),unsigned int(b.y) } {};
	uvec3::uvec3(const bvec3& a) : v{ unsigned int(a.x),unsigned int(a.y),unsigned int(a.z) } {};
	uvec3::uvec3(const bvec4& a) : v{ unsigned int(a.x),unsigned int(a.y),unsigned int(a.z) } {};

	uvec4::uvec4(const uvec2& a, unsigned int z, unsigned int w) : v{ a.x,a.y,z,w } {};
	uvec4::uvec4(unsigned int x, const uvec2& b, unsigned int w) : v{ x,b.x,b.y,w } {};
	uvec4::uvec4(unsigned int x, unsigned int y, const uvec2& c) : v{ x,y,c.x,c.y } {};
	uvec4::uvec4(const uvec2& a, const uvec2& b) : v{ a.x,a.y,b.x,b.y } {};
	uvec4::uvec4(const uvec3& a, unsigned int w) : v{ a.x,a.y,a.z,w } {};
	uvec4::uvec4(unsigned int x, const uvec3& b) : v{ x,b.x,b.y,b.z } {};
	
	uvec4::uvec4(const vec2& a, float z, float w) : v{ unsigned int(a.x),unsigned int(a.y),unsigned int(z),unsigned int(w) } {};
	uvec4::uvec4(float x, const vec2& b, float w) : v{ unsigned int(x),unsigned int(b.x),unsigned int(b.y),unsigned int(w) } {};
	uvec4::uvec4(float x, float y, const vec2& c) : v{ unsigned int(x),unsigned int(y),unsigned int(c.x),unsigned int(c.y) } {};
	uvec4::uvec4(const vec2& a, const vec2& b) : v{ unsigned int(a.x),unsigned int(a.y),unsigned int(b.x),unsigned int(b.y) } {};
	uvec4::uvec4(const vec3& a, float w) : v{ unsigned int(a.x),unsigned int(a.y),unsigned int(a.z),unsigned int(w) } {};
	uvec4::uvec4(float x, const vec3& b) : v{ unsigned int(x),unsigned int(b.x),unsigned int(b.y),unsigned int(b.z) } {};
	uvec4::uvec4(const vec4& a) : v{ unsigned int(a.x),unsigned int(a.y),unsigned int(a.z),unsigned int(a.w) } {};

	uvec4::uvec4(const ivec2& a, int z, int w) : v{ unsigned int(a.x),unsigned int(a.y),unsigned int(z),unsigned int(w) } {};
	uvec4::uvec4(int x, const ivec2& b, int w) : v{ unsigned int(x),unsigned int(b.x),unsigned int(b.y),unsigned int(w) } {};
	uvec4::uvec4(int x, int y, const ivec2& c) : v{ unsigned int(x),unsigned int(y),unsigned int(c.x),unsigned int(c.y) } {};
	uvec4::uvec4(const ivec2& a, const ivec2& b) : v{ unsigned int(a.x),unsigned int(a.y),unsigned int(b.x),unsigned int(b.y) } {};
	uvec4::uvec4(const ivec3& a, int w) : v{ unsigned int(a.x),unsigned int(a.y),unsigned int(a.z),unsigned int(w) } {};
	uvec4::uvec4(int x, const ivec3& b) : v{ unsigned int(x),unsigned int(b.x),unsigned int(b.y),unsigned int(b.z) } {};
	uvec4::uvec4(const ivec4& a) : v{ unsigned int(a.x),unsigned int(a.y),unsigned int(a.z),unsigned int(a.w) } {};

	uvec4::uvec4(const bvec2& a, bool z, bool w) : v{ unsigned int(a.x),unsigned int(a.y),unsigned int(z),unsigned int(w) } {};
	uvec4::uvec4(bool x, const bvec2& b, bool w) : v{ unsigned int(x),unsigned int(b.x),unsigned int(b.y),unsigned int(w) } {};
	uvec4::uvec4(bool x, bool y, const bvec2& c) : v{ unsigned int(x),unsigned int(y),unsigned int(c.x),unsigned int(c.y) } {};
	uvec4::uvec4(const bvec2& a, const bvec2& b) : v{ unsigned int(a.x),unsigned int(a.y),unsigned int(b.x),unsigned int(b.y) } {};
	uvec4::uvec4(const bvec3& a, bool w) : v{ unsigned int(a.x),unsigned int(a.y),unsigned int(a.z),unsigned int(w) } {};
	uvec4::uvec4(bool x, const bvec3& b) : v{ unsigned int(x),unsigned int(b.x),unsigned int(b.y),unsigned int(b.z) } {};
	uvec4::uvec4(const bvec4& a) : v{ unsigned int(a.x),unsigned int(a.y),unsigned int(a.z),unsigned int(a.w) } {};


	//----------------------------------------
	//bvec cast
	//----------------------------------------
	
	bvec2::bvec2(const bvec3& a) : v{ a.x,a.y } {};
	bvec2::bvec2(const bvec4& a) : v{ a.x,a.y } {};

	bvec2::bvec2(const vec2& a) : v{ bool(a.x),bool(a.y) } {};
	bvec2::bvec2(const vec3& a) : v{ bool(a.x),bool(a.y) } {};
	bvec2::bvec2(const vec4& a) : v{ bool(a.x),bool(a.y) } {};

	bvec2::bvec2(const ivec2& a) : v{ bool(a.x),bool(a.y) } {};
	bvec2::bvec2(const ivec3& a) : v{ bool(a.x),bool(a.y) } {};
	bvec2::bvec2(const ivec4& a) : v{ bool(a.x),bool(a.y) } {};

	bvec2::bvec2(const uvec2& a) : v{ bool(a.x),bool(a.y) } {};
	bvec2::bvec2(const uvec3& a) : v{ bool(a.x),bool(a.y) } {};
	bvec2::bvec2(const uvec4& a) : v{ bool(a.x),bool(a.y) } {};

	bvec3::bvec3(const bvec2& a, bool z) : v{ a.x,a.y,z } {};
	bvec3::bvec3(bool a, const bvec2& b) : v{ a,b.x,b.y } {};
	bvec3::bvec3(const bvec4& a) : v{ a.x,a.y,a.z } {};

	bvec3::bvec3(const vec2& a,float b) : v{ bool(a.x),bool(a.y),bool(b)} {};
	bvec3::bvec3(const float a, const vec2& b) : v{ bool(a),bool(b.x),bool(b.y) } {};
	bvec3::bvec3(const vec3& a) : v{ bool(a.x),bool(a.y),bool(a.z) } {};
	bvec3::bvec3(const vec4& a) : v{ bool(a.x),bool(a.y),bool(a.z) } {};

	bvec3::bvec3(const ivec2& a, int b) : v{ bool(a.x),bool(a.y),bool(b) } {};
	bvec3::bvec3(const int a, const ivec2& b) : v{ bool(a),bool(b.x),bool(b.y) } {};
	bvec3::bvec3(const ivec3& a) : v{ bool(a.x),bool(a.y),bool(a.z) } {};
	bvec3::bvec3(const ivec4& a) : v{ bool(a.x),bool(a.y),bool(a.z) } {};

	bvec3::bvec3(const uvec2& a, unsigned int b) : v{ bool(a.x),bool(a.y),bool(b) } {};
	bvec3::bvec3(const unsigned int a, const uvec2& b) : v{ bool(a),bool(b.x),bool(b.y) } {};
	bvec3::bvec3(const uvec3& a) : v{ bool(a.x),bool(a.y),bool(a.z) } {};
	bvec3::bvec3(const uvec4& a) : v{ bool(a.x),bool(a.y),bool(a.z) } {};

	bvec4::bvec4(const bvec2& a, bool z, bool w) : v{ a.x,a.y,z,w } {};
	bvec4::bvec4(bool a, const bvec2& b, bool w) : v{ a,b.x,b.y,w } {};
	bvec4::bvec4(bool a, bool b, const bvec2& c) : v{ a,b,c.x,c.y } {};
	bvec4::bvec4(const bvec2& a, const bvec2& b) : v{ a.x,a.y,b.x,b.y } {};
	bvec4::bvec4(const bvec3& a, bool b) : v{ a.x,a.y,a.z,b } {};
	bvec4::bvec4(bool a, const bvec3& b) : v{ a,b.x,b.y,b.z } {};

	bvec4::bvec4(const vec2& a, float b, float c) : v{ bool(a.x),bool(a.y),bool(b),bool(c) } {};
	bvec4::bvec4(float a, const vec2& b, float c) : v{ bool(a),bool(b.x),bool(b.y),bool(c) } {};
	bvec4::bvec4(float a, float b, const vec2& c) : v{ bool(a),bool(b),bool(c.x),bool(c.y) } {};
	bvec4::bvec4(const vec2& a, const vec2& b) : v{ bool(a.x),bool(a.y),bool(b.x),bool(b.y) } {};
	bvec4::bvec4(const vec3& a, float b) : v{ bool(a.x),bool(a.y),bool(a.z),bool(b) } {};
	bvec4::bvec4(float a, const vec3& b) : v{ bool(a),bool(b.x),bool(b.y),bool(b.z) } {};
	bvec4::bvec4(const vec4& a) : v{ bool(a.x),bool(a.y),bool(a.z),bool(a.w) } {};


	bvec4::bvec4(const ivec2& a, int b, int c) : v{ bool(a.x),bool(a.y),bool(b),bool(c) } {};
	bvec4::bvec4(int a, const ivec2& b, int c) : v{ bool(a),bool(b.x),bool(b.y),bool(c) } {};
	bvec4::bvec4(int a, int b, const ivec2& c) : v{ bool(a),bool(b),bool(c.x),bool(c.y) } {};
	bvec4::bvec4(const ivec2& a, const ivec2& b) : v{ bool(a.x),bool(a.y),bool(b.x),bool(b.y) } {};
	bvec4::bvec4(const ivec3& a, int b) : v{ bool(a.x),bool(a.y),bool(a.z),bool(b) } {};
	bvec4::bvec4(int a, const ivec3& b) : v{ bool(a),bool(b.x),bool(b.y),bool(b.z) } {};
	bvec4::bvec4(const ivec4& a) : v{ bool(a.x),bool(a.y),bool(a.z),bool(a.w) } {};

	bvec4::bvec4(const uvec2& a, unsigned int b, unsigned int c) : v{ bool(a.x),bool(a.y),bool(b),bool(c) } {};
	bvec4::bvec4(unsigned int a, const uvec2& b, unsigned int c) : v{ bool(a),bool(b.x),bool(b.y),bool(c) } {};
	bvec4::bvec4(unsigned int a, unsigned int b, const uvec2& c) : v{ bool(a),bool(b),bool(c.x),bool(c.y) } {};
	bvec4::bvec4(const uvec2& a, const uvec2& b) : v{ bool(a.x),bool(a.y),bool(b.x),bool(b.y) } {};
	bvec4::bvec4(const uvec3& a, unsigned int b) : v{ bool(a.x),bool(a.y),bool(a.z),bool(b) } {};
	bvec4::bvec4(unsigned int a, const uvec3& b) : v{ bool(a),bool(b.x),bool(b.y),bool(b.z) } {};
	bvec4::bvec4(const uvec4& a) : v{ bool(a.x),bool(a.y),bool(a.z),bool(a.w) } {};

}

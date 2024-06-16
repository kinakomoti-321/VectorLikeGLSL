#pragma once

#include "./vec.h"
#include "./bvec.h"
#include "./ivec.h"
#include "./uvec.h"

namespace VectorLikeGLSL {
	
	//----------------------------------------
	//vec cast
	//----------------------------------------
	inline vec2::vec2(const vec3& a) : v{ a.x,a.y } {};
	inline vec2::vec2(const vec4& a) : v{ a.x,a.y } {};

	inline vec2::vec2(const ivec2& a) : v{ float(a.x),float(a.y) } {};
	inline vec2::vec2(const ivec3& a) : v{ float(a.x),float(a.y) } {};
	inline vec2::vec2(const ivec4& a) : v{ float(a.x),float(a.y) } {};

	inline vec2::vec2(const uvec2& a) : v{ float(a.x),float(a.y) } {};
	inline vec2::vec2(const uvec3& a) : v{ float(a.x),float(a.y) } {};
	inline vec2::vec2(const uvec4& a) : v{ float(a.x),float(a.y) } {};

	inline vec2::vec2(const bvec2& a) : v{ float(a.x),float(a.y) } {};
	inline vec2::vec2(const bvec3& a) : v{ float(a.x),float(a.y) } {};
	inline	vec2::vec2(const bvec4& a) : v{ float(a.x),float(a.y) } {};

	inline	vec3::vec3(const vec2& a, float z) : v{ a.x,a.y,z } {};
	inline	vec3::vec3(float x, const vec2& b) : v{ x,b.x,b.y } {};
	inline	vec3::vec3(const vec4& a) : v{ a.x,a.y,a.z } {};

	inline	vec3::vec3(const ivec2& a, float z) : v{ float(a.x),float(a.y),float(z) } {};
	inline	vec3::vec3(float x, const ivec2& b) : v{ float(x),float(b.x),float(b.y) } {};
	inline	vec3::vec3(const ivec3& a) : v{ float(a.x),float(a.y),float(a.z) } {};
	inline	vec3::vec3(const ivec4& a) : v{ float(a.x),float(a.y),float(a.z) } {};

	inline	vec3::vec3(const uvec2& a,float z) : v{ float(a.x),float(a.y),float(z) } {};
	inline	vec3::vec3(float x, const uvec2& b) : v{ float(x),float(b.x),float(b.y) } {};
	inline	vec3::vec3(const uvec3& a) : v{ float(a.x),float(a.y),float(a.z) } {};
	inline	vec3::vec3(const uvec4& a) : v{ float(a.x),float(a.y),float(a.z) } {};

	inline	vec3::vec3(const bvec2& a, float z) : v{ float(a.x),float(a.y),float(z) } {};
	inline	vec3::vec3(float x, const bvec2& b) : v{ float(x),float(b.x),float(b.y) } {};
	inline	vec3::vec3(const bvec3& a) : v{ float(a.x),float(a.y),float(a.z) } {};
	inline	vec3::vec3(const bvec4& a) : v{ float(a.x),float(a.y),float(a.z) } {};

	inline	vec4::vec4(const vec2& a, float z, float w) : v{ a.x,a.y,z,w } {};
	inline	vec4::vec4(float x, const vec2& b, float w) : v{ x,b.x,b.y,w } {};
	inline	vec4::vec4(float x, float y, const vec2& c) : v{ x,y,c.x,c.y } {};
	inline	vec4::vec4(const vec2& a, const vec2& b) : v{ a.x,a.y,b.x,b.y } {};
	inline	vec4::vec4(const vec3& a, float w) : v{ a.x,a.y,a.z,w } {};
	inline	vec4::vec4(float x, const vec3& b) : v{ x,b.x,b.y,b.z } {};

	inline	vec4::vec4(const ivec2& a, float z, float w) : v{ float(a.x),float(a.y),float(z),float(w) } {};
	inline	vec4::vec4(float x, const ivec2& b, float w) : v{ float(x),float(b.x),float(b.y),float(w) } {};
	inline	vec4::vec4(float x, float y, const ivec2& c) : v{ float(x),float(y),float(c.x),float(c.y) } {};
	inline	vec4::vec4(const ivec2& a, const ivec2& b) : v{ float(a.x),float(a.y),float(b.x),float(b.y) } {};
	inline	vec4::vec4(const ivec3& a, float w) : v{ float(a.x),float(a.y),float(a.z),float(w) } {};
	inline	vec4::vec4(float x, const ivec3& b) : v{ float(x),float(b.x),float(b.y),float(b.z) } {};
	inline	vec4::vec4(const ivec4& a) : v{ float(a.x),float(a.y),float(a.z),float(a.w) } {};
	
	inline	vec4::vec4(const uvec2& a, float z, float w) : v{ float(a.x),float(a.y),float(z),float(w) } {};
	inline	vec4::vec4(float x, const uvec2& b, float w) : v{ float(x),float(b.x),float(b.y),float(w) } {};
	inline	vec4::vec4(float x, float y, const uvec2& c) : v{ float(x),float(y),float(c.x),float(c.y) } {};
	inline	vec4::vec4(const uvec2& a, const uvec2& b) : v{ float(a.x),float(a.y),float(b.x),float(b.y) } {};
	inline	vec4::vec4(const uvec3& a, float w) : v{ float(a.x),float(a.y),float(a.z),float(w) } {};
	inline	vec4::vec4(float x, const uvec3& b) : v{ float(x),float(b.x),float(b.y),float(b.z) } {};
	inline	vec4::vec4(const uvec4& a) : v{ float(a.x),float(a.y),float(a.z),float(a.w) } {};

	inline	vec4::vec4(const bvec2& a, float z, float w) : v{ float(a.x),float(a.y),float(z),float(w) } {};
	inline	vec4::vec4(float x, const bvec2& b, float w) : v{ float(x),float(b.x),float(b.y),float(w) } {};
	inline	vec4::vec4(float x, float y, const bvec2& c) : v{ float(x),float(y),float(c.x),float(c.y) } {};
	inline	vec4::vec4(const bvec2& a, const bvec2& b) : v{ float(a.x),float(a.y),float(b.x),float(b.y) } {};
	inline	vec4::vec4(const bvec3& a, float w) : v{ float(a.x),float(a.y),float(a.z),float(w) } {};
	inline	vec4::vec4(float x, const bvec3& b) : v{ float(x),float(b.x),float(b.y),float(b.z) } {};
	inline	vec4::vec4(const bvec4& a) : v{ float(a.x),float(a.y),float(a.z),float(a.w) } {};


	//----------------------------------------
	//ivec cast
	//----------------------------------------
	
	inline	ivec2::ivec2(const ivec3& a) : v{ a.x,a.y } {};
	inline	ivec2::ivec2(const ivec4& a) : v{ a.x,a.y } {};

	inline	ivec2::ivec2(const vec2& a) : v{ int(a.x),int(a.y) } {};
	inline	ivec2::ivec2(const vec3& a) : v{ int(a.x),int(a.y) } {};
	inline	ivec2::ivec2(const vec4& a) : v{ int(a.x),int(a.y) } {};

	inline	ivec2::ivec2(const uvec2& a) : v{ int(a.x),int(a.y) } {};
	inline	ivec2::ivec2(const uvec3& a) : v{ int(a.x),int(a.y) } {};
	inline	ivec2::ivec2(const uvec4& a) : v{ int(a.x),int(a.y) } {};

	inline	ivec3::ivec3(const ivec2& a, int z) : v{ a.x,a.y,z } {};
	inline	ivec3::ivec3(int x, const ivec2& b) : v{ x,b.x,b.y } {};
	inline	ivec3::ivec3(const ivec4& a) : v{ a.x,a.y,a.z } {};

	inline	ivec3::ivec3(const vec2& a, int z) : v{ int(a.x),int(a.y),int(z) } {};
	inline	ivec3::ivec3(int x, const vec2& b) : v{ int(x),int(b.x),int(b.y) } {};
	inline	ivec3::ivec3(const vec3& a) : v{ int(a.x),int(a.y),int(a.z) } {};
	inline	ivec3::ivec3(const vec4& a) : v{ int(a.x),int(a.y),int(a.z) } {};

	inline	ivec3::ivec3(const uvec2& a, int z) : v{ int(a.x),int(a.y),int(z) } {};
	inline	ivec3::ivec3(int x, const uvec2& b) : v{ int(x),int(b.x),int(b.y) } {};
	inline	ivec3::ivec3(const uvec3& a) : v{ int(a.x),int(a.y),int(a.z) } {};
	inline	ivec3::ivec3(const uvec4& a) : v{ int(a.x),int(a.y),int(a.z) } {};

	inline	ivec3::ivec3(const bvec2& a, int z) : v{ int(a.x),int(a.y),int(z) } {};
	inline	ivec3::ivec3(int x, const bvec2& b) : v{ int(x),int(b.x),int(b.y) } {};
	inline	ivec3::ivec3(const bvec3& a) : v{ int(a.x),int(a.y),int(a.z) } {};
	inline	ivec3::ivec3(const bvec4& a) : v{ int(a.x),int(a.y),int(a.z) } {};

	inline	ivec4::ivec4(const ivec2& a, int z, int w) : v{ a.x,a.y,z,w } {};
	inline	ivec4::ivec4(int x, const ivec2& b, int w) : v{ x,b.x,b.y,w } {};
	inline	ivec4::ivec4(int x, int y, const ivec2& c) : v{ x,y,c.x,c.y } {};
	inline	ivec4::ivec4(const ivec2& a, const ivec2& b) : v{ a.x,a.y,b.x,b.y } {};
	inline	ivec4::ivec4(const ivec3& a, int w) : v{ a.x,a.y,a.z,w } {};
	inline	ivec4::ivec4(int x, const ivec3& b) : v{ x,b.x,b.y,b.z } {};

	inline	ivec4::ivec4(const vec2& a, int z, int w) : v{ int(a.x),int(a.y),int(z),int(w) } {};
	inline	ivec4::ivec4(int x, const vec2& b, int w) : v{ int(x),int(b.x),int(b.y),int(w) } {};
	inline	ivec4::ivec4(int x, int y, const vec2& c) : v{ int(x),int(y),int(c.x),int(c.y) } {};
	inline	ivec4::ivec4(const vec2& a, const vec2& b) : v{ int(a.x),int(a.y),int(b.x),int(b.y) } {};
	inline	ivec4::ivec4(const vec3& a, int w) : v{ int(a.x),int(a.y),int(a.z),int(w) } {};
	inline	ivec4::ivec4(int x, const vec3& b) : v{ int(x),int(b.x),int(b.y),int(b.z) } {};
	inline	ivec4::ivec4(const vec4& a) : v{ int(a.x),int(a.y),int(a.z),int(a.w) } {};

	inline	ivec4::ivec4(const uvec2& a, int z, int w) : v{ int(a.x),int(a.y),int(z),int(w) } {};
	inline	ivec4::ivec4(int x, const uvec2& b, int w) : v{ int(x),int(b.x),int(b.y),int(w) } {};
	inline	ivec4::ivec4(int x, int y, const uvec2& c) : v{ int(x),int(y),int(c.x),int(c.y) } {};
	inline	ivec4::ivec4(const uvec2& a, const uvec2& b) : v{ int(a.x),int(a.y),int(b.x),int(b.y) } {};
	inline	ivec4::ivec4(const uvec3& a, int w) : v{ int(a.x),int(a.y),int(a.z),int(w) } {};
	inline	ivec4::ivec4(int x, const uvec3& b) : v{ int(x),int(b.x),int(b.y),int(b.z) } {};
	inline	ivec4::ivec4(const uvec4& a) : v{ int(a.x),int(a.y),int(a.z),int(a.w) } {};

	inline	ivec4::ivec4(const bvec2& a, int z, int w) : v{ int(a.x),int(a.y),int(z),int(w) } {};
	inline	ivec4::ivec4(int x, const bvec2& b, int w) : v{ int(x),int(b.x),int(b.y),int(w) } {};
	inline	ivec4::ivec4(int x, int y, const bvec2& c) : v{ int(x),int(y),int(c.x),int(c.y) } {};
	inline	ivec4::ivec4(const bvec2& a, const bvec2& b) : v{ int(a.x),int(a.y),int(b.x),int(b.y) } {};
	inline	ivec4::ivec4(const bvec3& a, int w) : v{ int(a.x),int(a.y),int(a.z),int(w) } {};
	inline	ivec4::ivec4(int x, const bvec3& b) : v{ int(x),int(b.x),int(b.y),int(b.z) } {};
	inline	ivec4::ivec4(const bvec4& a) : v{ int(a.x),int(a.y),int(a.z),int(a.w) } {};

//----------------------------------------
//uvec cast
//----------------------------------------

	inline uvec2::uvec2(const uvec3& a) : v{ a.x,a.y } {};
	inline uvec2::uvec2(const uvec4& a) : v{ a.x,a.y } {};

	inline uvec2::uvec2(const vec2& a) : v{ unsigned int(a.x),unsigned int(a.y) } {};
	inline uvec2::uvec2(const vec3& a) : v{ unsigned int(a.x),unsigned int(a.y) } {};
	inline uvec2::uvec2(const vec4& a) : v{ unsigned int(a.x),unsigned int(a.y) } {};

	inline uvec2::uvec2(const ivec2& a) : v{ unsigned int(a.x),unsigned int(a.y) } {};
	inline uvec2::uvec2(const ivec3& a) : v{ unsigned int(a.x),unsigned int(a.y) } {};
	inline uvec2::uvec2(const ivec4& a) : v{ unsigned int(a.x),unsigned int(a.y) } {};

	inline uvec2::uvec2(const bvec2& a) : v{ unsigned int(a.x),unsigned int(a.y) } {};
	inline uvec2::uvec2(const bvec3& a) : v{ unsigned int(a.x),unsigned int(a.y) } {};
	inline uvec2::uvec2(const bvec4& a) : v{ unsigned int(a.x),unsigned int(a.y) } {};

	inline uvec3::uvec3(const uvec2& a, unsigned int z) : v{ a.x,a.y,z } {};
	inline uvec3::uvec3(unsigned int x, const uvec2& b) : v{ x,b.x,b.y } {};
	inline uvec3::uvec3(const uvec4& a) : v{ a.x,a.y,a.z } {};

	inline uvec3::uvec3(const vec2& a, unsigned int z) : v{ unsigned int(a.x),unsigned int(a.y),unsigned int(z) } {};
	inline uvec3::uvec3(unsigned int x, const vec2& b) : v{ unsigned int(x),unsigned int(b.x),unsigned int(b.y) } {};
	inline uvec3::uvec3(const vec3& a) : v{ unsigned int(a.x),unsigned int(a.y),unsigned int(a.z) } {};
	inline uvec3::uvec3(const vec4& a) : v{ unsigned int(a.x),unsigned int(a.y),unsigned int(a.z) } {};

	inline uvec3::uvec3(const ivec2& a, unsigned int z) : v{ unsigned int(a.x),unsigned int(a.y),unsigned int(z) } {};
	inline uvec3::uvec3(unsigned int x, const ivec2& b) : v{ unsigned int(x),unsigned int(b.x),unsigned int(b.y) } {};
	inline uvec3::uvec3(const ivec3& a) : v{ unsigned int(a.x),unsigned int(a.y),unsigned int(a.z) } {};
	inline uvec3::uvec3(const ivec4& a) : v{ unsigned int(a.x),unsigned int(a.y),unsigned int(a.z) } {};

	inline uvec3::uvec3(const bvec2& a, unsigned int z) : v{ unsigned int(a.x),unsigned int(a.y),unsigned int(z) } {};
	inline uvec3::uvec3(unsigned int x, const bvec2& b) : v{ unsigned int(x),unsigned int(b.x),unsigned int(b.y) } {};
	inline uvec3::uvec3(const bvec3& a) : v{ unsigned int(a.x),unsigned int(a.y),unsigned int(a.z) } {};
	inline uvec3::uvec3(const bvec4& a) : v{ unsigned int(a.x),unsigned int(a.y),unsigned int(a.z) } {};

	inline uvec4::uvec4(const uvec2& a, unsigned int z, unsigned int w) : v{ a.x,a.y,z,w } {};
	inline uvec4::uvec4(unsigned int x, const uvec2& b, unsigned int w) : v{ x,b.x,b.y,w } {};
	inline uvec4::uvec4(unsigned int x, unsigned int y, const uvec2& c) : v{ x,y,c.x,c.y } {};
	inline uvec4::uvec4(const uvec2& a, const uvec2& b) : v{ a.x,a.y,b.x,b.y } {};
	inline uvec4::uvec4(const uvec3& a, unsigned int w) : v{ a.x,a.y,a.z,w } {};
	inline uvec4::uvec4(unsigned int x, const uvec3& b) : v{ x,b.x,b.y,b.z } {};

	inline uvec4::uvec4(const vec2& a, unsigned int z, unsigned int w) : v{ unsigned int(a.x),unsigned int(a.y),unsigned int(z),unsigned int(w) } {};
	inline uvec4::uvec4(unsigned int x, const vec2& b, unsigned int w) : v{ unsigned int(x),unsigned int(b.x),unsigned int(b.y),unsigned int(w) } {};
	inline uvec4::uvec4(unsigned int x, unsigned int y, const vec2& c) : v{ unsigned int(x),unsigned int(y),unsigned int(c.x),unsigned int(c.y) } {};
	inline uvec4::uvec4(const vec2& a, const vec2& b) : v{ unsigned int(a.x),unsigned int(a.y),unsigned int(b.x),unsigned int(b.y) } {};
	inline uvec4::uvec4(const vec3& a, unsigned int w) : v{ unsigned int(a.x),unsigned int(a.y),unsigned int(a.z),unsigned int(w) } {};
	inline uvec4::uvec4(unsigned int x, const vec3& b) : v{ unsigned int(x),unsigned int(b.x),unsigned int(b.y),unsigned int(b.z) } {};
	inline uvec4::uvec4(const vec4& a) : v{ unsigned int(a.x),unsigned int(a.y),unsigned int(a.z),unsigned int(a.w) } {};

	inline uvec4::uvec4(const ivec2& a, unsigned int z, unsigned int w) : v{ unsigned int(a.x),unsigned int(a.y),z,w } {};
	inline uvec4::uvec4(unsigned int x, const ivec2& b, unsigned int w) : v{ unsigned int(x),unsigned int(b.x),unsigned int(b.y),unsigned int(w) } {};
	inline uvec4::uvec4(unsigned int x, unsigned int y, const ivec2& c) : v{ unsigned int(x),unsigned int(y),unsigned int(c.x),unsigned int(c.y) } {};
	inline uvec4::uvec4(const ivec2& a, const ivec2& b) : v{ unsigned int(a.x),unsigned int(a.y),unsigned int(b.x),unsigned int(b.y) } {};
	inline uvec4::uvec4(const ivec3& a, unsigned int w) : v{ unsigned int(a.x),unsigned int(a.y),unsigned int(a.z),unsigned int(w) } {};
	inline uvec4::uvec4(unsigned int x, const ivec3& b) : v{ unsigned int(x),unsigned int(b.x),unsigned int(b.y),unsigned int(b.z) } {};
	inline uvec4::uvec4(const ivec4& a) : v{ unsigned int(a.x),unsigned int(a.y),unsigned int(a.z),unsigned int(a.w) } {};

	inline uvec4::uvec4(const bvec2& a, unsigned int z, unsigned int w) : v{ unsigned int(a.x),unsigned int(a.y),unsigned int(z),unsigned int(w) } {};
	inline uvec4::uvec4(unsigned int x, const bvec2& b, unsigned int w) : v{ unsigned int(x),unsigned int(b.x),unsigned int(b.y),unsigned int(w) } {};
	inline uvec4::uvec4(unsigned int x, unsigned int y, const bvec2& c) : v{ unsigned int(x),unsigned int(y),unsigned int(c.x),unsigned int(c.y) } {};
	inline uvec4::uvec4(const bvec2& a, const bvec2& b) : v{ unsigned int(a.x),unsigned int(a.y),unsigned int(b.x),unsigned int(b.y) } {};
	inline uvec4::uvec4(const bvec3& a, unsigned int w) : v{ unsigned int(a.x),unsigned int(a.y),unsigned int(a.z),unsigned int(w) } {};
	inline uvec4::uvec4(unsigned int x, const bvec3& b) : v{ unsigned int(x),unsigned int(b.x),unsigned int(b.y),unsigned int(b.z) } {};
	inline uvec4::uvec4(const bvec4& a) : v{ unsigned int(a.x),unsigned int(a.y),unsigned int(a.z),unsigned int(a.w) } {};

//----------------------------------------
//bvec cast
//----------------------------------------
	

	inline bvec2::bvec2(const bvec3& a) : v{ a.x,a.y } {};
	inline bvec2::bvec2(const bvec4& a) : v{ a.x,a.y } {};

	inline bvec2::bvec2(const vec2& a) : v{ bool(a.x),bool(a.y) } {};
	inline bvec2::bvec2(const vec3& a) : v{ bool(a.x),bool(a.y) } {};
	inline bvec2::bvec2(const vec4& a) : v{ bool(a.x),bool(a.y) } {};

	inline bvec2::bvec2(const ivec2& a) : v{ bool(a.x),bool(a.y) } {};
	inline bvec2::bvec2(const ivec3& a) : v{ bool(a.x),bool(a.y) } {};
	inline bvec2::bvec2(const ivec4& a) : v{ bool(a.x),bool(a.y) } {};

	inline bvec2::bvec2(const uvec2& a) : v{ bool(a.x),bool(a.y) } {};
	inline bvec2::bvec2(const uvec3& a) : v{ bool(a.x),bool(a.y) } {};
	inline bvec2::bvec2(const uvec4& a) : v{ bool(a.x),bool(a.y) } {};

	inline bvec3::bvec3(const bvec2& a, bool z) : v{ a.x,a.y,z } {};
	inline bvec3::bvec3(bool a, const bvec2& b) : v{ a,b.x,b.y } {};
	inline bvec3::bvec3(const bvec4& a) : v{ a.x,a.y,a.z } {};

	inline bvec3::bvec3(const vec2& a, bool b) : v{ bool(a.x),bool(a.y),bool(b) } {};
	inline bvec3::bvec3(const bool a, const vec2& b) : v{ bool(a),bool(b.x),bool(b.y) } {};
	inline bvec3::bvec3(const vec3& a) : v{ bool(a.x),bool(a.y),bool(a.z) } {};
	inline bvec3::bvec3(const vec4& a) : v{ bool(a.x),bool(a.y),bool(a.z) } {};

	inline bvec3::bvec3(const ivec2& a, bool b) : v{ bool(a.x),bool(a.y),bool(b) } {};
	inline bvec3::bvec3(const bool a, const ivec2& b) : v{ bool(a),bool(b.x),bool(b.y) } {};
	inline bvec3::bvec3(const ivec3& a) : v{ bool(a.x),bool(a.y),bool(a.z) } {};
	inline bvec3::bvec3(const ivec4& a) : v{ bool(a.x),bool(a.y),bool(a.z) } {};

	inline bvec3::bvec3(const uvec2& a, bool b) : v{ bool(a.x),bool(a.y),bool(b) } {};
	inline bvec3::bvec3(const bool a, const uvec2& b) : v{ bool(a),bool(b.x),bool(b.y) } {};
	inline bvec3::bvec3(const uvec3& a) : v{ bool(a.x),bool(a.y),bool(a.z) } {};
	inline bvec3::bvec3(const uvec4& a) : v{ bool(a.x),bool(a.y),bool(a.z) } {};

	inline bvec4::bvec4(const bvec2& a, bool z, bool w) : v{ a.x,a.y,z,w } {};
	inline bvec4::bvec4(bool a, const bvec2& b, bool w) : v{ a,b.x,b.y,w } {};
	inline bvec4::bvec4(bool a, bool b, const bvec2& c) : v{ a,b,c.x,c.y } {};
	inline bvec4::bvec4(const bvec2& a, const bvec2& b) : v{ a.x,a.y,b.x,b.y } {};
	inline bvec4::bvec4(const bvec3& a, bool b) : v{ a.x,a.y,a.z,b } {};
	inline bvec4::bvec4(bool a, const bvec3& b) : v{ a,b.x,b.y,b.z } {};

	inline bvec4::bvec4(const vec2& a, bool b, bool c) : v{ bool(a.x),bool(a.y),bool(b),bool(c) } {};
	inline bvec4::bvec4(bool a, const vec2& b, bool c) : v{ bool(a),bool(b.x),bool(b.y),bool(c) } {};
	inline bvec4::bvec4(bool a, bool b, const vec2& c) : v{ bool(a),bool(b),bool(c.x),bool(c.y) } {};
	inline bvec4::bvec4(const vec2& a, const vec2& b) : v{ bool(a.x),bool(a.y),bool(b.x),bool(b.y) } {};
	inline bvec4::bvec4(const vec3& a, bool b) : v{ bool(a.x),bool(a.y),bool(a.z),bool(b) } {};
	inline bvec4::bvec4(bool a, const vec3& b) : v{ bool(a),bool(b.x),bool(b.y),bool(b.z) } {};
	inline bvec4::bvec4(const vec4& a) : v{ bool(a.x),bool(a.y),bool(a.z),bool(a.w) } {};

	inline bvec4::bvec4(const ivec2& a, bool b, bool c) : v{ bool(a.x),bool(a.y),bool(b),bool(c) } {};
	inline bvec4::bvec4(bool a, const ivec2& b, bool c) : v{ bool(a),bool(b.x),bool(b.y),bool(c) } {};
	inline bvec4::bvec4(bool a, bool b, const ivec2& c) : v{ bool(a),bool(b),bool(c.x),bool(c.y) } {};
	inline bvec4::bvec4(const ivec2& a, const ivec2& b) : v{ bool(a.x),bool(a.y),bool(b.x),bool(b.y) } {};
	inline bvec4::bvec4(const ivec3& a, bool b) : v{ bool(a.x),bool(a.y),bool(a.z),bool(b) } {};
	inline bvec4::bvec4(bool a, const ivec3& b) : v{ bool(a),bool(b.x),bool(b.y),bool(b.z) } {};
	inline bvec4::bvec4(const ivec4& a) : v{ bool(a.x),bool(a.y),bool(a.z),bool(a.w) } {};

	inline bvec4::bvec4(const uvec2& a, bool b, bool c) : v{ bool(a.x),bool(a.y),bool(b),bool(c) } {};
	inline bvec4::bvec4(bool a, const uvec2& b, bool c) : v{ bool(a),bool(b.x),bool(b.y),bool(c) } {};
	inline bvec4::bvec4(bool a, bool b, const uvec2& c) : v{ bool(a),bool(b),bool(c.x),bool(c.y) } {};
	inline bvec4::bvec4(const uvec2& a, const uvec2& b) : v{ bool(a.x),bool(a.y),bool(b.x),bool(b.y) } {};
	inline bvec4::bvec4(const uvec3& a, bool b) : v{ bool(a.x),bool(a.y),bool(a.z),bool(b) } {};
	inline bvec4::bvec4(bool a, const uvec3& b) : v{ bool(a),bool(b.x),bool(b.y),bool(b.z) } {};
	inline bvec4::bvec4(const uvec4& a) : v{ bool(a.x),bool(a.y),bool(a.z),bool(a.w) } {};
}

#include <iostream>
#include "../include/vector_like_glsl.h"

using namespace VectorLikeGLSL;

int main() {
	vec3 v1 = vec3(1.0);
	vec3 v2 = vec3(1.0, 2.0, 3.0);

	std::cout << v2.xxy << std::endl;

	vec3 v3 = v1 + v2;

	std::cout << v3 << std::endl;

	vec3 v4 = sin(radians(90.0 * v2.xxy));

	std::cout << v4 << std::endl;
	
	return 0;
}
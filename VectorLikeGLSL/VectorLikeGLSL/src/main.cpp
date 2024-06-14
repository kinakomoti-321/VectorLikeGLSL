#include <iostream>
#include "../include/vector_like_glsl.h"
#include "../include/CodeMaker/code_maker.h"

int main() {
	VectorLikeGLSL::MakeVectorSwizzleCode("test.txt",3);
	return 0;
}
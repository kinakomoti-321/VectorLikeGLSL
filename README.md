# VectorLikeGLSL
GLSLライクな書き方ができるベクトルのC++ヘッダーオンリーライブラリ。
Swizzle演算子、マトリックス(2x2,3x3,4x4)、GLSL4.50準拠のBuild-in関数を実装しています。

C++ Hedder-Only Vector Library like GLSL.
Swizzle Operator, Matrix(2x2,3x3,4x4), Build-in Function based GLSL4.50 are implemented.

## Feature
- Swizzle Operator(vec.xyz ...)
- Bool Vector, Int Vector, Unsigned Int Vector
- Matrix
- (almost) buidl-in function based GLSL4.50

## Usage
VectorLikeGLSL/VectorLikeGLSL/include/vector_like_glsl.hをインクルードすれば使うことができます。

```c++:example.cpp
#include <iostream>
#include "./vector_like_glsl.h"

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
```

## Attention
- Texture周りのBuild-in関数は実装されていません
- GLSLのnot関数はNotという名称で実装されています(notはC++のキーワードに被るため)

## TODOs
- Common Function
    - frexp
    - ldexp

- Integer Function
    - uaddCarry
    - usubBorrow
    - umulExtended
    - imulExtended
    - bitfieldExtract
    - bitfiedInsert
    - bitfieldReverse
    - bitCount
    - findLSB
    - findMSB

- Double Vector(dvec)

## License
MIT License

Copyright (c) 2024 Kinankomoti

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
#pragma once
namespace VectorLikeGLSL {
#define VLG_ERROR(msg) std::cerr << "Error: " << msg << std::endl;
#define VLG_ERROREXIT(msg) std::cerr << "Error: " << msg << std::endl; exit(1);
}

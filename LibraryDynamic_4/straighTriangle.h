#pragma once
#ifdef LYBRARYDYNAMIC_4_EXPORTS
#define LYBRARYDYNAMIC_4_API __declspec(dllexport)
#else
#define LYBRARYDYNAMIC_4_API __declspec(dllimport)
#endif
#include "triangle.h"
struct straighTriangle : public triangle
{
private:
     straighTriangle(int a, int b, int c, int À, int Â);

public:
     straighTriangle() : straighTriangle(10, 20, 30, 30, 60) {};
};
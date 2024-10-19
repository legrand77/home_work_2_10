#pragma once
#ifdef LYBRARYDYNAMIC_4_EXPORTS
#define LYBRARYDYNAMIC_4_API __declspec(dllexport)
#else
#define LYBRARYDYNAMIC_4_API __declspec(dllimport)
#endif

#include "triangle.h"
struct isoscelesTriangle : public triangle
{
private:
     isoscelesTriangle(int a, int b, int À, int Â);
public:
     isoscelesTriangle() : isoscelesTriangle(10, 20, 30, 60) {};
};
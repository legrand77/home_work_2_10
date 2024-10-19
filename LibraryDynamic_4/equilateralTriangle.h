#pragma once
#ifdef LYBRARYDYNAMIC_4_EXPORTS
#define LYBRARYDYNAMIC_4_API __declspec(dllexport)
#else
#define LYBRARYDYNAMIC_4_API __declspec(dllimport)
#endif

#include "triangle.h"
struct equilateralTriangle : public triangle
{
private:  
    equilateralTriangle(int a, int À);

public:
    equilateralTriangle() : equilateralTriangle(10, 60) {};
};
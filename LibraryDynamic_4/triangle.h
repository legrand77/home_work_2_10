#pragma once
#ifdef LYBRARYDYNAMIC_4_EXPORTS
#define LYBRARYDYNAMIC_4_API __declspec(dllexport)
#else
#define LYBRARYDYNAMIC_4_API __declspec(dllimport)
#endif
#include "figura.h"
struct triangle : public figura
{
protected:
    triangle(int a, int b, int c, int À, int Â, int C);

public:
    triangle():triangle(10, 20, 30, 50, 60, 70){};
};
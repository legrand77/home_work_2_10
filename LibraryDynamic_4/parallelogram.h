#pragma once
#ifdef LYBRARYDYNAMIC_4_EXPORTS
#define LYBRARYDYNAMIC_4_API __declspec(dllexport)
#else
#define LYBRARYDYNAMIC_4_API __declspec(dllimport)
#endif

#include "quadrilateral.h"
struct parallelogram : public quadrilateral
{
private:
     parallelogram(int a, int b, int À, int Â);
public:
     parallelogram() : parallelogram(30, 40, 20, 30) {};
};
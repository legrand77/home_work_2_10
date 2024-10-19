#pragma once
#ifdef LYBRARYDYNAMIC_4_EXPORTS
#define LYBRARYDYNAMIC_4_API __declspec(dllexport)
#else
#define LYBRARYDYNAMIC_4_API __declspec(dllimport)
#endif

#include "quadrilateral.h"
struct rectangle : public quadrilateral
{
private:
     rectangle(int a, int b);
public:
     rectangle() : rectangle(10, 30) {};
};
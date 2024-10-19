#pragma once
#ifdef LYBRARYDYNAMIC_4_EXPORTS
#define LYBRARYDYNAMIC_4_API __declspec(dllexport)
#else
#define LYBRARYDYNAMIC_4_API __declspec(dllimport)
#endif

#include "quadrilateral.h"
struct square : public quadrilateral
{
private:
     square(int a);
public:
     square() : square(30) {};
};
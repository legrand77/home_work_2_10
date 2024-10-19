#pragma once
#ifdef LYBRARYDYNAMIC_4_EXPORTS
#define LYBRARYDYNAMIC_4_API __declspec(dllexport)
#else
#define LYBRARYDYNAMIC_4_API __declspec(dllimport)
#endif

#include "figura.h"
struct quadrilateral : public figura
{
protected:
     quadrilateral(int a, int b, int c, int d, int A, int B, int C, int D);
public:
     quadrilateral() : quadrilateral(10, 20, 30, 50, 60, 70, 57, 45) {}
     void printBadge() override;
};
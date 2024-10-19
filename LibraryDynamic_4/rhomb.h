#pragma once
#ifdef LYBRARYDYNAMIC_4_EXPORTS
#define LYBRARYDYNAMIC_4_API __declspec(dllexport)
#else
#define LYBRARYDYNAMIC_4_API __declspec(dllimport)
#endif

#include "quadrilateral.h"
struct rhomb : public quadrilateral
{
private:
    rhomb(int a, int À, int Â);
    
public:
    rhomb() : rhomb(10, 20, 30) {};
};
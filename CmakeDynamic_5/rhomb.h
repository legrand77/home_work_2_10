#pragma once
#include "quadrilateral.h"
struct rhomb : public quadrilateral
{
private:
    rhomb(int a, int À, int Â);
    
public:
    rhomb() : rhomb(10, 20, 30) {};
};
#pragma once
#include "quadrilateral.h"
struct square : public quadrilateral
{
private:
     square(int a);
public:
     square() : square(30) {};
};
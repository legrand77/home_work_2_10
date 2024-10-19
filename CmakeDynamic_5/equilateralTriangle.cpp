#include <iostream>
#include <string>
#include "equilateralTriangle.h"
#include "figura.h"
#include "triangle.h"

    equilateralTriangle::equilateralTriangle(int a, int А)
    {
        name = { "Равносторонний треугольник: " };
        line_a = a;
        line_b = a;
        line_c = a;
        corner_A = А;
        corner_B = А;
        corner_C = А;
    }
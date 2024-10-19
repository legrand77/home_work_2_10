#include "triangle.h"
#include "figura.h"
#include "straighTriangle.h"
#include <iostream>
#include <string>

    straighTriangle::straighTriangle(int a, int b, int c, int А, int В)
    {
        name = { "Прямоугольный треугольник: " };
        line_a = a;
        line_b = b;
        line_c = c;
        corner_A = А;
        corner_B = В;
        corner_C = 90;
    }
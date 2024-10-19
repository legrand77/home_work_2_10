#include <iostream>
#include <string>
#include "figura.h"
#include "isoscelesTriangle.h"
#include "triangle.h"

    isoscelesTriangle::isoscelesTriangle(int a, int b, int А, int В)
    {
        name = { "Равнобедренный треугольник: " };
        line_a = a;
        line_b = b;
        line_c = a;
        corner_A = А;
        corner_B = В;
        corner_C = А;
    }
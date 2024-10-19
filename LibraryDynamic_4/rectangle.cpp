#include "figura.h"
#include "quadrilateral.h"
#include "rectangle.h"
#include <iostream>
#include <string>

rectangle::rectangle(int a, int b)
{
    name = { "Прямоугольник: " };
    line_a = a;
    line_b = b;
    line_c = a;
    line_d = b;
    corner_A = 90;
    corner_B = 90;
    corner_C = 90;
    corner_D = 90;
};
#include <iostream>
#include <string>
#include "figura.h"
#include "quadrilateral.h"
#include "square.h"

    square::square(int a)
    {
        name = { " вадрат: " };
        line_a = a;
        line_b = a;
        line_c = a;
        line_d = a;
        corner_A = 90;
        corner_B = 90;
        corner_C = 90;
        corner_D = 90;
    }
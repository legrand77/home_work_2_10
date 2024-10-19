#include <iostream>
#include <string>
#include "figura.h"
#include "quadrilateral.h"
#include "rhomb.h"

    rhomb::rhomb(int a, int А, int В)
    {
        name = { "Ромб: " };
        line_a = a;
        line_b = a;
        line_c = a;
        line_d = a;
        corner_A = А;
        corner_B = В;
        corner_C = А;
        corner_D = В;
    }
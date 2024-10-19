#include <iostream>
#include <string>
#include "equilateralTriangle.h"
#include "figura.h"
#include "isoscelesTriangle.h"
#include "parallelogram.h"
#include "quadrilateral.h"
#include "rectangle.h"
#include "rhomb.h"
#include "square.h"
#include "straighTriangle.h"
#include "triangle.h"


    parallelogram::parallelogram(int a, int b, int ְ, int ֲ)
    {
        name = { "ֿאנאככוכמדנאלל: " };
        line_a = a;
        line_b = b;
        line_c = a;
        line_d = b;
        corner_A = ְ;
        corner_B = ֲ;
        corner_C = ְ;
        corner_D = ֲ;
    }
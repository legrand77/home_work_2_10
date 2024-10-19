#include "figura.h"
#include "quadrilateral.h"
#include <iostream>
#include <string>

quadrilateral::quadrilateral(int a, int b, int c, int d, int A, int B, int C, int D)
{
    nSide = 4;
    name = { "Четырехугольник: " };
    line_a = a;
    line_b = b;
    line_c = c;
    line_d = d;
    corner_A = A;
    corner_B = B;
    corner_C = C;
    corner_D = D;
}

void quadrilateral::printBadge()
{
    std::cout << name << std::endl;
    std::cout << "Стороны:  а=" << line_a << " b=" << line_b << " c=" << line_c << " d=" << line_d << std::endl;
    std::cout << "Углы:  А=" << corner_A << " B=" << corner_B << " C=" << corner_C << " D=" << corner_D << std::endl;

}

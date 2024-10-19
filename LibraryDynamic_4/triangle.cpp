#include "figura.h"
#include "triangle.h"
#include <iostream>
#include <string>

triangle::triangle(int a, int b, int c, int А, int В, int C)
{
	nSide = 3;
	name = { "Треугольник: " };
	line_a = a;
	line_b = b;
	line_c = c;
	corner_A = А;
	corner_B = В;
	corner_C = C;
};
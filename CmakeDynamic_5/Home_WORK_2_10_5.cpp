#include <iostream>
#include <string>
#include "print.h"
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


int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Russian");
    system("chcp 1251");
    figura figury[10]{};
    rhomb a{};
    figury[0] = a;
    straighTriangle a1{};
    figury[1] = a1;
    isoscelesTriangle a2{};
    figury[2] = a2; 
    equilateralTriangle a3{};
    figury[3] = a3;
    quadrilateral a4{};
    figury[4] = a4;
    rectangle a5{};
    figury[5] = a5;
    square a6{};
    figury[6] = a6 ;
    parallelogram a7{};
    figury[7] = a7 ;
    triangle a8{};
    figury[8] = a8 ; 
    /*figury[0] = new rhomb;
    figury[1] = new straighTriangle;
    figury[2] = new isoscelesTriangle;
    figury[3] = new equilateralTriangle;
    figury[4] = new quadrilateral;
    figury[5] = new rectangle;
    figury[6] = new square;
    figury[7] = new parallelogram;
    figury[8] = new triangle;*/

    for (int i = 0; i < 9; i++)
    {
        print a{};
        a.print_info(figury[i]);
        std::cout << std::endl;
    }

    /*for (int i = 0; i < 9; i++)
    {
        delete figury[i];
    }*/
}

#include "figura.h"
#include <string>
#include <iostream>
  void figura:: printBadge()
    {
        std::cout << name << std::endl;
        std::cout << "Стороны:  а=" << line_a << " b=" << line_b << " c=" << line_c << std::endl;
        std::cout << "Углы:  А=" << corner_A << " B=" << corner_B << " C=" << corner_C << std::endl;
    }
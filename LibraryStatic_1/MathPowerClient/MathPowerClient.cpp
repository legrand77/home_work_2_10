#include <iostream>
#include "MathPower.h"
#include <string>

int main()
{
    setlocale(LC_ALL, "Russian");
    system("chcp 1251");
    std::string name;
    std::cout << "Введите имя:  ";
    std::cin >> name;
    MathPower::Greeter Greeter;
    Greeter.greeting(name);
}

#include "DynamicGoodbye.h"
#include <iostream>

int main()
{
    setlocale(LC_ALL, "Russian");
    system("chcp 1251");
    std::string name;
    std::cout << "Введите имя:  ";
    std::cin >> name;
    DynamicGoodbye::Leaver Leaver;
    Leaver.leave(name);
}
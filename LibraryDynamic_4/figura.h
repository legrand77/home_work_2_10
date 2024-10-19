#pragma once
#ifdef LYBRARYDYNAMIC_4_EXPORTS
#define LYBRARYDYNAMIC_4_API __declspec(dllexport)
#else
#define LYBRARYDYNAMIC_4_API __declspec(dllimport)
#endif
#include <string>
struct figura
{
protected:
    int nSide{};
    std::string name{ "Фигура: " };
    int line_a{};
    int line_b{};
    int line_c{};
    int line_d{};
    int corner_A{};
    int corner_B{};
    int corner_C{};
    int corner_D{};

public:
   virtual void printBadge();
};
#pragma once
#include <iostream>

#ifdef DYNAMIC_LIB_EXPORTS
#define DYNAMIC_LIB_API __declspec(dllexport)
#else
#define DYNAMIC_LIB_API __declspec(dllimport)
#endif

class Figure
{
public:
    std::string name = "";
    DYNAMIC_LIB_API Figure();
    DYNAMIC_LIB_API virtual void print_info();
};
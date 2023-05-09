#pragma once
#include "Figure.h"

class Triangle : public Figure
{
protected:

    int a;
    int b;
    int c; 
    int A; 
    int B; 
    int C;

public:

    DYNAMIC_LIB_API Triangle(int a, int b, int c, int A, int B, int C);

    DYNAMIC_LIB_API void print_info() override;
};

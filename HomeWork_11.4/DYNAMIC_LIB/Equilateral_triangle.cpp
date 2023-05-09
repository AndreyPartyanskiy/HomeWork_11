
#include "Triangle.h"
#include "Equilateral_triangle.h"


    Equilateral_triangle :: Equilateral_triangle(int a) : Triangle :: Triangle(a, b, c, A, B, C)
    {
        name = "Равносторонний треугольник";
        this->a = a;
        this->b = a;
        this->c = a;
        this->A = 60;
        this->B = 60;
        this->C = 60;
    };


#include "Triangle.h"
#include "Right_triangle.h"

Right_triangle::Right_triangle(int a, int b, int c, int A, int B): Triangle::Triangle(a, b, c, A, B, C)
{
    name = "Прямоугольный треугольник";
    this->a = a;
    this->b = b;
    this->c = c;
    this->A = A;
    this->B = B;
    this->C = 90;
};

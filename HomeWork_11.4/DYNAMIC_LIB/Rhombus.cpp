
#include "Parallelogram.h"
#include "Rhombus.h"

Rhombus :: Rhombus(int a, int A, int B) :Parallelogram :: Parallelogram(a, b, A, B)
{
    name = "Ромб";
    this->a = a;
    this->b = a;
    this->c = a;
    this->d = a;
    this->A = A;
    this->B = B;
    this->C = A;
    this->D = B;
};
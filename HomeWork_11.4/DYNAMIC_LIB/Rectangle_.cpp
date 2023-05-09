
#include "Parallelogram.h"
#include "Rectangle_.h"


    Rectangle_ :: Rectangle_(int a, int b) : Parallelogram :: Parallelogram(a, b, A, B)
    {
        name = "Прямоугольник";
        this->a = a;
        this->b = b;
        this->c = a;
        this->d = b;
        this->A = 90;
        this->B = 90;
        this->C = 90;
        this->D = 90;
    };
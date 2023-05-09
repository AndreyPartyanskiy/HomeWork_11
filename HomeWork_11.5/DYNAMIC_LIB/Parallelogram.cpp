
#include "Quadrangle.h"
#include "Parallelogram.h"


    Parallelogram :: Parallelogram(int a, int b, int A, int B) : Quadrangle :: Quadrangle(a, b, c, d, A, B, C, D)
    {
        name = "ֿאנאככוכמדנאלל";
        this->a = a;
        this->b = b;
        this->c = a;
        this->d = b;
        this->A = A;
        this->B = B;
        this->C = A;
        this->D = B;
    };


#include "Rhombus.h"
#include "Square.h"

    Square :: Square(int a) : Rhombus :: Rhombus(a, A, B)
    {
        name = " вадрат";
        this->a = a;
        this->b = a;
        this->c = a;
        this->d = a;
        this->A = 90;
        this->B = 90;
        this->C = 90;
        this->D = 90;
    };
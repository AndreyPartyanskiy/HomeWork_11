#include "Figure.h"

    Figure :: Figure()
    {
        name = "������";
    };

    void Figure::print_info()
    {
        std::cout << name << ": " << std::endl;
    };
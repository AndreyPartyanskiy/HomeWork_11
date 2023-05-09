// HW_11.3_DYNAMIC_LIB_CIENT.cpp 

#include <iostream>
#include "Leaver.h"
#include <Windows.h>

int main()
{
    system("chcp 1251");
    system("cls");
    std::string str;
    Leaver a;

    std::cout << "Введите имя: ";
    std::cin >> str;
    std::cout << a.leave(str) << std::endl;
    system("pause");
}

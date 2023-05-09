// HW_11_STAT_LIB_CLIENT.cpp 

#include <iostream>
#include "Greeter.h"
#include <Windows.h>

int main()
{
    system("chcp 1251");
    system("cls");
    Greeter a;
    std::string s;
    std::cout << "Введите имя : ";
    std::cin >> s;
    std::cout << a.greet(s) << std::endl;
    system("pause");
}

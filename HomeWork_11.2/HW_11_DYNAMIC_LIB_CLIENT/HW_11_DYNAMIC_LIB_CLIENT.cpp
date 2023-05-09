// HW_11_DYNAMIC_LIB_CLIENT.cpp 

#include <iostream>
#include "Leaver.h"
#include <Windows.h>

int main()
{
    system("chcp 1251");
    system("cls");
    Leaver a;
    std::string s;
    std::cout << "Введите имя : ";
    std::cin >> s;
    std::cout << a.leave(s) << std::endl;
    system("pause");
}

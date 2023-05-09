#pragma once
#include <iostream>
#ifdef HW_11_DYNAMIC_LIB_EXPORTS
#define HW_11_DYNAMIC_LIB_API __declspec(dllexport)
#else
#define HW_11_DYNAMIC_LIB_API __declspec(dllimport)
#endif

class Leaver
{
public:

	HW_11_DYNAMIC_LIB_API std::string leave(std::string a);
};


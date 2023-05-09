#include "Greeter.h"

std::string Greeter::greet(std::string a)
{
    a= "Здравствуйте, " + a + " !";
    return a;
}

#include "Shake.h"
#include "iostream"

Shake::Shake()
{
    std::cout << "Constructor for Shake Called" << std::endl;
}

Shake::~Shake()
{
    std::cout << "Destructor for Shake Called" << std::endl;
}

void Shake::TestFunction()
{
    std::cout << "Shake Test Function" << std::endl;
}

void Shake::VulnFunction()
{
   std::cout << "Modifying a string literal causes segmentation fault" << std::endl;
   char *str;
   str = "Executing vulnerable shake function";
   *(str+1) = 'n';
}
#include "Soda.h"
#include "iostream"

Soda::Soda()
{
    std::cout << "Constructor for Soda Called" << std::endl;
}

Soda::~Soda()
{
    std::cout << "Destructor for Soda Called" << std::endl;
}

void Soda::TestFunction()
{
    std::cout << "Soda Test Function" << std::endl;
}

void Soda::VulnFunction()
{
    std::cout << "This Vulnerable Function dereferences a NULL pointer" << std::endl;
    int sugarCount, size, flavor;
    int *sodaPtr;
    sugarCount = 10;
    sodaPtr = &sugarCount;
    size = *sodaPtr;
    sodaPtr=NULL;
    flavor = *sodaPtr;
}
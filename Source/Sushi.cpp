#include "Sushi.h"
#include <iostream>
#include <stdio.h>

Sushi::Sushi()
{
    std::cout << "Constructor for Sushi Called" << std::endl;
}

Sushi::~Sushi()
{
    std::cout << "Destructor for Sushi Called" << std::endl;
}

void Sushi::TestFunction()
{
    std::cout << "Sushi Test Function" << std::endl;
}

void Sushi::VulnFunction()
{
    //In C++ char pointers are marked as read obly
    char *str = "Foo";  
    // Which means this is illegal and results in a segfault
    *str = 'b';  
}       
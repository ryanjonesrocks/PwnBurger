#include "Burger.h"
#include <iostream>
#include <stdio.h>

Burger::Burger()
{
    std::cout << "Constructor for Burger Called" << std::endl;
}

Burger::~Burger()
{
    std::cout << "Destructor for Burger Called" << std::endl;
}

void Burger::TestFunction()
{
    std::cout << "Burger Test Function" << std::endl;
}

void Burger::VulnFunction()
{
    int *a; /* pointer variable declaration */
    int b;  /* actual variable declaration */
    *a=42;
    a=&b; /* store address of b in pointer variable*/
}
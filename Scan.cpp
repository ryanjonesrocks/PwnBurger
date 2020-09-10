#include "Scan.h"
#include <iostream>
#include <stdio.h>

Scan::Scan()
{
    std::cout << "Constructor for Scan Called" << std::endl;
}

Scan::~Scan()
{
    std::cout << "Destructor for Scan Called" << std::endl;
}

void Scan::TestFunction()
{
    std::cout << "Scan Test Function" << std::endl;
}

void Scan::VulnFunction()
{
    std::string myInput;
    std::cin >> myInput;
    //Convert string to const char pointer
    const char * c = myInput.c_str();
    char burgerBuffer[100]; 
    strncpy(burgerBuffer, c, 100); 
    printf(burgerBuffer); 
}
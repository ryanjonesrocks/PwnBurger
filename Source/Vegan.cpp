#include "Vegan.h"
#include <iostream>
#include <string>
#include <stdlib.h> 
#include <stdio.h>
#include <unistd.h>

Vegan::Vegan()
{
    std::cout << "Constructor for Vegan Called" << std::endl;
}

Vegan::~Vegan()
{
    std::cout << "Destructor for Vegan Called" << std::endl;
}

void Vegan::TestFunction()
{
    std::cout << "Vegan Test Function" << std::endl;
}


void Vegan::VulnFunction()
{
   int* pvalue  = NULL; // Pointer initialized with null
   int* pvalue2  = NULL; // Pointer initialized with null
   pvalue  = new int;   // Request memory for the variable
   pvalue2 = pvalue;
   *pvalue = 42;     // Store value at allocated address
   std::cout << "Value of pvalue : " << *pvalue << std::endl;
   std::cout << "Address of pvalue : " << &pvalue << std::endl;
   std::cout << "Value of pvalue2 : " << *pvalue2 << std::endl;
   std::cout << "Address of pvalue2 : " << &pvalue2 << std::endl;
   delete pvalue;         // free up the memory.
   //pvalue2 is a dangling pointer because it points to a deleted location in memory
   std::cout << "Freeing Pointer Value: " << *pvalue << std::endl;
   std::cout << "Value of pvalue : " << *pvalue << std::endl;
   std::cout << "Address of pvalue : " << &pvalue << std::endl;
   std::cout << "Value of pvalue2 : " << *pvalue2 << std::endl;
   std::cout << "Address of pvalue2 : " << &pvalue2 << std::endl;
}
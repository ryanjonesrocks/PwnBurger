#include "Stack.h"
#include <iostream>
#include <stdio.h>

Stack::Stack()
{
    std::cout << "Constructor for Stack Called" << std::endl;
}

Stack::~Stack()
{
    std::cout << "Destructor for Stack Called" << std::endl;
}

void Stack::TestFunction()
{
    std::cout << "Stack Test Function" << std::endl;
}

void Stack::VulnFunction()
{
  char buffer[5];
  std::string myInput;
  std::cin >> myInput;
  //Convert string to const char pointer
  const char * c = myInput.c_str();
  //Vuln Function
  strcpy(buffer, c);
}
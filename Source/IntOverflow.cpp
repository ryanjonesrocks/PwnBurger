#include "IntOverflow.h"
#include "iostream"

IntOverflow::IntOverflow()
{
    std::cout << "Constructor for IntOverflow Called" << std::endl;
}

IntOverflow::~IntOverflow()
{
    std::cout << "Destructor for IntOverflow Called" << std::endl;
}

void IntOverflow::TestFunction()
{
    std::cout << "IntOverflow Test Function" << std::endl;
}

void IntOverflow::VulnFunction()
{

   size_t my_val = 0;
   std::cout << "my_val now has a value of: " << my_val << std::endl;
   std::cout << "since my_val is unsigned subtracting 1: " << my_val << std::endl;
   std::cout << "will result in the value becoming the largest value for size_t: " << my_val << std::endl;
   my_val -= 1;
   std::cout << "the value of my_val is now: " << my_val << std::endl;
}
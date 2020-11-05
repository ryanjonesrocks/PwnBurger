#include <iostream>
#include <array>
#include <string>
#include <list>
#include "Source/Burger.h"
#include "Source/Date.h"
#include "Source/IntOverflow.h"
#include "Source/Scan.h"
#include "Source/Soda.h"  
#include "Source/Shake.h"
#include "Source/Stack.h"
#include "Source/Sushi.h"
#include "Source/Vegan.h"

//Function Definitions
void Print(std::list<std::string> const &list);
void PickItem(std::list<std::string> const &list, int pos);
void OrderFood();

int main(int argc, char const *argv[])
{    
   //Defined Objects
   Burger MyBurger;
   Scan MyScan;
   Soda MySoda;
   Shake MyShake;
   Sushi MySushi;
   Vegan MyVegan;
   Stack MyStack;
   IntOverflow MyIntOverflow;

   int input = 0;
    while(true) {
         std::cout << "=========================" << std::endl;
         std::cout << "Welcome to the Pwn Burger:" << std::endl;
         std::cout << "Here is the menu:" << std::endl;
         // Modifying a String literal
         std::cout << "1. Out of this World Shake" << std::endl;
         // Dereferencing NULL pointers
         std::cout << "2. The Zero Calorie Soda" << std::endl;
         // Dereferencing freed memory
         std::cout << "3. Free the Meat: Vegan Burger" << std::endl;
         // Dereferencing uninitialized pointers
         std::cout << "4. The Uncooked Sushi Special" << std::endl;
         // Incorrect use of the "&" (address of) and "*" (dereferencing) operators
         std::cout << "5. The Five Star Burger" << std::endl;
         // Improper formatting specifiers in printf and scanf statements
         std::cout << "6. The Scan Sandwhich" << std::endl;
         // Stack overflow
         std::cout << "7. The Big Stack" << std::endl;
         // Int Overflow
         std::cout << "8. Mary's Int Overflow" << std::endl;
         std::cout << "9. Quit" << std::endl;
         std::cout << "=========================" << std::endl;
         std::cin >> input;
         switch(input)
         {
            case 1:
               MyShake.VulnFunction();
               break;
            case 2:
               MySoda.VulnFunction();
               break;
            case 3:
               MyVegan.VulnFunction();
               break;
            case 4:
               MySushi.VulnFunction();
               break;
            case 5:
               MyBurger.VulnFunction();
               break;
            case 6:
               MyScan.VulnFunction();
               break;
            case 7:
               MyStack.VulnFunction();
               break;
            case 8:
               MyIntOverflow.VulnFunction();
               break;
            default:
               std::cout << "Invalid Choice " << input << std::endl;
        }
        std::cout << "You entered... " << input << std::endl;
        std::cout << "=========================" << std::endl;
        std::cout << "\n";
        std::cout << "\n";
    }
   return 0;
}








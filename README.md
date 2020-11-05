# Pwn Burger

                                                    |\ /| /|_/|
                                                  |\||-|\||-/|/|
                                                   \\|\|//||///
                                  _..----.._       |\/\||//||||
                                .'     o    '.     |||\\|/\\ ||
                               /   Pwn Burger \    | './\_/.' |
                              |o       o     o|    | .:.  .:. |
                              /'-.._o     __.-'\   | :  ::  : |
                              \      `````     /   | :  ''  : |
                              |``--........--'`|    '.______.'
                               \              /
                                 `'----------'`


A Burger themed repository dedicated towards exploring all the different types of Core Dumps and Segmentation Faults in C/C++. The aim of this repository is to explore writing better C++ code to avoid common mistakes made by lower level programmers. Many of these segmentation faults can be used to exploit vulnerabilities in exisiting Application Software such as Stack Buffer Overflow, Format String Vulnerabilities, Use After Free, and Return Oriented Programming. 

## Table of Contents
🥤Out of this World Shake (Modifying a String literal) <br />
🍹The Zero Calorie Soda (Dereferencing NULL pointers) <br />
🥗 Free the Meat: Vegan Burger (Using Memory after being freed) <br />
🍣 The Uncooked Sushi Special (Writing to Read Only Memory) <br />
🍔 The Five Star Burger (Incorrect use of the "&" (address of) and "*" (dereferencing) operators) <br />
🥪 The Scan Sandwhich (Improper formatting specifiers in printf and scanf statements) <br />
🥓 The Big Stack (Stack Based Buffer overflow) <br />
🍹 Mary's Overflow (Integer Overflow) <br />
<<<<<<< HEAD

## Creds
=======
## Credz
>>>>>>> 614b5c10589ae2abef8f7ded60bc772adec38efa
[Ascii Art](http://www.qqpr.com/ascii-art-food-2.html) <br />
[Geeks For Geeks](https://www.geeksforgeeks.org/) <br />
[Stack Overflow](https://stackoverflow.com/)

## FAQ
1. Why not just use `using namespace std` so you do not have to call `std::` every time
Typically this introduces potential issues as namespace std bring all definitions into current scope. 
If another library has a similar named function like `string` or `cin` then the compiler will
not know which namespace to use.

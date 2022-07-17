#include <iostream>

int main(){
//Compile time error: remove ";" from "endl;"
std::cout << "Hello World!" << std::endl;

//Run time error: divide by 0 gives a "warning" in the console and does not print "value"
int value = 7/0;
std::cout << "value: " << value << std::endl;
return 0;
}
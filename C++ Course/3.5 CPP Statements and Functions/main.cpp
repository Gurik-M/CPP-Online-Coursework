/*
STATEMENTS
 - A statement is a basic unit of computation in C++
 - Every C++ program is a collection of statements which end with a semicolon (;)
 - Statements are exectued in order from top to bottom, unless there is a statement
   causing the program to terminate or run another sequence of statements 

FUNCTIONS
 - A function is defined with certain "parameters" or "inputs"
 - Functions can be defined before the "main" function to be called within the "main" function
 - Functions are re-usable peices of code that group together statements that do what the programmer wants to do 
*/


#include <iostream>

int addNumbers(int first_param, int second_param){

    int result = first_param + second_param;
    return result;

}

int multiplyNumbers(int first_param, int second_param, int third_param){

    int result = first_param*second_param*third_param;
    return result;

}

int main(){

    //Adding numbers without a function
    int first_number = 13; //Statement
    int second_number {7}; //Note that both "=" and "{}" can be used to define variables

    std::cout << "First number: " << first_number << std::endl; 
    std::cout << "Second number: " << second_number << std::endl;

    int sum = first_number + second_number;
    std::cout << "Sum: " << sum << std::endl;

    //Adding numbers with addNumbers function
    sum = addNumbers(25, 7);
    std::cout << "Function sum: " << sum << std::endl;

    //Adding numbers with addNumbers function
    std::cout << "Function sum: " << addNumbers(3, 42) << std::endl; //Note how functions can also be called in the "cout" statement 

    //Using multiply function
    std::cout << "Product is: " << multiplyNumbers(2, 3, 4) << std::endl; 
    return 0;
    
}
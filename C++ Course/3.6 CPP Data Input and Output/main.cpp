#include <iostream>
#include <string>

int main(){
    int age;
    std::string full_name;

    // reading full name data with a space
    std::cout << "Please type in  your full name and age on seperate lines" << std::endl;

    std::getline(std::cin, full_name);
    std::cin >> age;
    
    std::cout << "Hello " << full_name << "! You are " << age << " years old." << std::endl;

    return 0;
}

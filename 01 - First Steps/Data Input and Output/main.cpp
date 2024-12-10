#include <iostream>
#include <string>
#include <limits>

int main(){
    // data out
    std::cout << "Hello C++ 20" << std::endl;

    int age {21};
    std::cout << "Age: " << age << std::endl;

    std::cerr << "Error Message: Something Went Wrong" << std::endl;
    std::clog << "Log Message: Program ran succesfully" << std::endl;

    // data in
    int age1 {};
    std::string name;

    
    std::cout << "Please type your name and age: " << std::endl;

    // std::cin >> name;
    // std::cin >> age;

    std::cin >> name >> age;

    std::cout << "Hello " << name << " you are " << age << " years old!" << std::endl;
    

    // Clear the input buffer before getline!
    // std::cin.ignore("count", "delimiter")
    
    std::cin.ignore(); // IMPORTANT: without this, std::getline will consume a '\n' 
    //charected in the input buffer and you wont be able to type your age in the full name section
    
    // this version clears the entire input buffer
    // std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    // Full name
    std::string fullname;
    int age2;

    std::cout << "Please type in your full name and age: " << std::endl;
    std::getline(std::cin, fullname);
    std::cin >> age2;

    std::cout << "Hello " << fullname << " you are " 
    << age2 << " years old!" << std::endl;


    return 0;
}

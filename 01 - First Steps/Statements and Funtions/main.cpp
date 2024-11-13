#include <iostream>

// add funtion declaration
int addTwoNumbers(int first_num, int second_num);
int mulTwoNumbers(int first_num, int second_num);


int main(){
    
    int first_number {13}; // Statement
    int second_number {7};

    std::cout << "First number: " << first_number << std::endl;
    std::cout << "Second number: " << second_number << std::endl;

    int sum = first_number + second_number;
    std::cout << "Sum: " << sum << std::endl;

    sum = addTwoNumbers(25, 7);
    std::cout << "Sum: " << sum << std::endl;

    sum = addTwoNumbers(24, 21);
    std::cout << "Sum: " << sum << std::endl;
    std::cout << "Add Numbers: " << addTwoNumbers(12, 42) << std::endl;

    int product = mulTwoNumbers(12, 5);
    std::cout << "Product: " << product << std::endl;

    return 0;
}

// funtion definition
int addTwoNumbers(int first_num, int second_num) {
    int result = first_num + second_num;
    return result;
}

// funtion definition
int mulTwoNumbers(int first_num, int second_num) {
    int result = first_num * second_num;
    return result;
}
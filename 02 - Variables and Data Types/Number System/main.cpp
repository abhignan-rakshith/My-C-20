#include <iostream>

int main(){

    int number1 = 15; // Decimal
    int number2 = 017; // Octal
    int number3 = 0X0F; // Hexa
    int number4 = 0b00001111; // Binary

    std::cout << "number 1: " << number1 << std::endl;
    std::cout << "number 2: " << number2 << std::endl;
    std::cout << "number 3: " << number3 << std::endl;
    std::cout << "number 4: " << number4 << std::endl;

    return 0;
}

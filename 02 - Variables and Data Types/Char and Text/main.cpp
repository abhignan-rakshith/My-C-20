#include <iostream>

int main()
{

    char character1{'a'};
    char character2{'r'};
    char character3{'r'};
    char character4{'o'};
    char character5{'w'};

    std::cout << character1 << std::endl;
    std::cout << character2 << std::endl;
    std::cout << character3 << std::endl;
    std::cout << character4 << std::endl;
    std::cout << character5 << std::endl;

    std::cout << std::endl; // 0 - 255 (1 byte)

    char value = 94;                                                  // ^
    char value1 = 95;                                                 // ASCII character code for '_'
    std::cout << "value : " << value << value1 << value << std::endl; // ^_^
    std::cout << "value(int) : " << static_cast<int>(value) << static_cast<int>(value1) << static_cast<int>(value) << std::endl;

    return 0;
}

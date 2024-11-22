#include <iostream>

int main()
{

    // Overflow

    unsigned char data{250};

    ++data;
    std::cout << "data : " << static_cast<int>(data) << std::endl; // 251

    ++data;
    std::cout << "data : " << static_cast<int>(data) << std::endl; // 252

    ++data;
    std::cout << "data : " << static_cast<int>(data) << std::endl; // 253

    ++data;
    std::cout << "data : " << static_cast<int>(data) << std::endl; // 254

    ++data;
    std::cout << "data : " << std::hex << static_cast<int>(data) << std::endl; // 255

    ++data;                                                        // Overflow
    std::cout << "data : " << static_cast<int>(data) << std::endl; // 256

    std::cout << std::dec;

    data = 1;

    --data;
    std::cout << "data : " << static_cast<int>(data) << std::endl; // 0

    --data;
    std::cout << "data : " << static_cast<int>(data) << std::endl; // Underflow 255!

    return 0;
}
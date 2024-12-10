#include <iostream>
#include <bitset>

// Shift left - Multiply by 2^n
// Shift right - Divide by 2^n

int main()
{

    unsigned short int value{0xff0u};

    std::cout << "Size of short int " << sizeof(short int) << std::endl; //  16 bits

    std::cout << "value : " << std::bitset<16>(value)
              << ", dec : " << value << std::endl;

    // Shift left by one bit
    value = static_cast<unsigned short int>(value << 1); // explicitly casting int to a unsigned short int!
    std::cout << "value : " << std::bitset<16>(value)
              << ", dec : " << value << std::endl;

    // Shift left by one bit
    value = static_cast<unsigned short int>(value << 1);
    std::cout << "value : " << std::bitset<16>(value)
              << ", dec : " << value << std::endl;

    // Shift left by one bit
    value = static_cast<unsigned short int>(value << 1);
    std::cout << "value : " << std::bitset<16>(value)
              << ", dec : " << value << std::endl;

    // Shift left by one bit
    value = static_cast<unsigned short int>(value << 1);
    std::cout << "value : " << std::bitset<16>(value)
              << ", dec : " << value << std::endl;

    // Shift left by one bit
    value = static_cast<unsigned short int>(value << 1); // data loss
    std::cout << "value : " << std::bitset<16>(value)
              << ", dec : " << value << std::endl;

    // Shift right by one bit
    value = static_cast<unsigned short int>(value >> 1); // data loss
    std::cout << "value : " << std::bitset<16>(value)
              << ", dec : " << value << std::endl;

    // Shift by multiple bits in one go
    // Shift right by four bits
    value = static_cast<unsigned short int>(value >> 4);
    std::cout << "value : " << std::bitset<16>(value)
              << ", dec : " << value << std::endl;

    value = static_cast<unsigned short int>(value >> 1);
    std::cout << "value : " << std::bitset<16>(value)
              << ", dec : " << value << std::endl;

    return 0;
}
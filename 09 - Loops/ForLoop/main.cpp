#include <iostream>

int main(){

    // size_t is an unsigned integer type that is used to represent the sizes of things.
    for(size_t i{}; i < 10; ++i){
        std::cout << "I love C++" << std::endl;
    }

    size_t j{};
    for (; j < 3; j++)
    {
        std::cout << "GG" << std::endl;
        std::cout << "J : " << j << std::endl;
    }

    std::cout << "j: " << j++ << std::endl;

    return 0;
}

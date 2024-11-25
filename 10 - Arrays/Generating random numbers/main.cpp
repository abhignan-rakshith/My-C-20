#include <iostream>

// Generating random numbers in C++
// seed

int main()
{
    std::srand(time(0)); // changing the seed with time

    // int random_number = std::rand();
    // std::cout << "Random number: " << random_number << std::endl;

    // random_number = std::rand();
    // std::cout << "Random number: " << random_number << std::endl;

    // std::cout << "RAND_MAX: " << RAND_MAX << std::endl; //32767

    // // range [0 - 12]
    // int random_number = std::rand() % 13; // 0 - 12
    // std::cout << "Random number: " << random_number << std::endl;

    // for (size_t i = 0; i < 10; i++)
    // {
    //     random_number = std::rand() % 13; // 0 - 12
    //     std::cout << "Random number: " << random_number << std::endl;
    // }

    // range [1 - 15]
    int random_number;
    random_number = (std::rand() % 15) + 1; // 1 - 13
    std::cout << "Random number: " << random_number << std::endl;

    for (size_t i = 0; i < 10; i++)
    {
        random_number = (std::rand() % 15) + 1; // 1 - 13
        std::cout << "Random number: " << random_number << std::endl;
    }

    return 0;
}

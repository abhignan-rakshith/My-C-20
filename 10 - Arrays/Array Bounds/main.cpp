#include <iostream>

int main()
{

    int numbers[]{1, 2, 3, 4, 5};

    // Reading beyond the array size
    std::cout << "numbers[12] : " << numbers[12] << std::endl;

    // Writing beyond the array size
    numbers[1234] = 100;
    std::cout << "numbers[12] : " << numbers[12] << std::endl; // CRASH

    std::cout << "Program ended successfully!" << std::endl;

    return 0;
}

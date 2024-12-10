#include <iostream>

int main()
{

    const int age{34};
    const float height{1.34f};

    // age = 14; // Can't Modify

    int years{3 * age};

    std::cout << "age : " << age << std::endl;
    std::cout << "years : " << years << std::endl;

    return 0;
}

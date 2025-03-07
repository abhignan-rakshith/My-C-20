#include <iostream>

int main()
{

    bool red_light{true};
    bool green_light{false};

    if (red_light == true)
    {
        std::cout << "Stop" << std::endl;
    }
    else
    {
        std::cout << "Go through!" << std::endl;
    }

    if (green_light)
    {
        std::cout << "The light is green!" << std::endl;
    }
    else
    {
        std::cout << "NOT GREEN" << std::endl;
    }

    std::cout << "sizeof(bool): " << sizeof(bool) << std::endl;

    std::cout << std::endl;
    std::cout << "red light: " << red_light << std::endl;
    std::cout << "green light: " << green_light << std::endl;

    std::cout << std::endl;
    std::cout << std::boolalpha;
    std::cout << "red light: " << red_light << std::endl;
    std::cout << "green light: " << green_light << std::endl;

    return 0;
}

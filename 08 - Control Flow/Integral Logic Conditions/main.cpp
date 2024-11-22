#include <iostream>

int main()
{

    int item_count{-3};

    bool has_items{static_cast<bool>(item_count)};
    std::cout << std::boolalpha;

    // Anything other than 0 is considered true/1 in c++
    if (has_items)
    {
        std::cout << "We have " << has_items << " in the bag. " << item_count << " to be exact" << std::endl;
    }
    else
    {
        std::cout << "We have " << has_items << " in the bag." << std::endl;
    }

    return 0;
}

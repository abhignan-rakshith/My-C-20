#include <iostream>

// Size of the array at run time: std::size() c++17
// Before c++17, use sizeof(array)/sizeof(array[0])
// Now its best to use a range based for loop

int main()
{
    int scores[]{100, -95, 89, 68, -1, 99, -100, 85, 91, 90,
                 -77, 88, 100, -95, 89, 68, -1, 99, -100, 85, 91, 90, -77, 88};

    std::cout << "The size of the array is: " << sizeof(scores) << " bytes." << std::endl;

    // int count = sizeof(scores) / sizeof(scores[0]);
    for (size_t i{0}; i < std::size(scores); ++i)
    {
        if (scores[i] <= -1)
        {
            continue;
        }
        std::cout << scores[i] << std::endl;
    }

    return 0;
}

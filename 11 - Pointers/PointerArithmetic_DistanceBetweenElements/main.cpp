#include <iostream>

int main()
{

    int scores[10]{11, 12, 0, 14, 15, -1, 17, 18, 1, 20};

    // Array index notation
    //     int * pointer1 {&scores[0]};
    //     int * pointer2 {&scores[8]};

    // Pointer arithmetic notation
    
    int *pointer1{scores + 0};
    int *pointer2{scores + 7};

    std::cout << "pointer2 - pointer1 : " << pointer2 - pointer1 << std::endl; // 8
    std::cout << "pointer1 - pointer2 : " << pointer1 - pointer2 << std::endl; // -8

    // type to store the difference between two pointers
    std::ptrdiff_t pos_diff = pointer2 - pointer1;
    std::ptrdiff_t neg_diff = pointer1 - pointer2;
    std::cout << "pointer2 - pointer1 : " << pos_diff << std::endl;                  // 8
    std::cout << "pointer1 - pointer2 : " << neg_diff << std::endl;                  // -8
    std::cout << "sizeof(std::ptrdiff_t) : " << sizeof(std::ptrdiff_t) << std::endl; // 8 bytes
    

    /*
    int *min_addr = scores; // contains the address of the first element of the array

    for (size_t i{1}; i < std::size(scores); ++i)
    {
        if (*(scores + i) < *min_addr)
        {
            min_addr = scores + i;
        }
    }

    std::cout << "The smallest element in the array with address: " << min_addr << " is -> "<< *min_addr << std::endl;
    */

    return 0;
}
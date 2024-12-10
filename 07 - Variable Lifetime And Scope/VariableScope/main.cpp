#include <iostream>

/**
 * There are 3 storage durations/types:
 * local (block, automatic)
 * static
 * dynamic
 */

int global_var1{23}; // global variable

void some_function()
{
    int local_var{10};
    static int oranges = 223;
    std::cout << "Inside function global_var : " << global_var1 << std::endl;
    std::cout << "Inside functoin local_var : " << local_var << std::endl;
}

void some_other_function()
{
    // local_var = 5;
}

int main()
{
    std::cout << "Inside main function global_var : " << global_var1 << std::endl;
    
    // STRANGE: Nested Scope
    {
        int orange = 12;
        static int mango = 22;
    }

    // std::cout << "Orange: " <<  oranges << std::endl;

    return 0;
}
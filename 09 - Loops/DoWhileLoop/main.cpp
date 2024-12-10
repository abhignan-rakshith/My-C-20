#include <iostream>
#include "main.h"

int main()
{
    const int COUNT{12};
    size_t i{0}; // Iterator declaration

    do_func_by_value(i, COUNT);
    std::cout << "After do_func_by_value, i = " << i << std::endl;

    do_func_by_reference(i, COUNT);
    std::cout << "After do_func_by_reference, i = " << i << std::endl;

    return 0;
}

void do_func_by_value(size_t i, const int COUNT)
{
    do
    {
        std::cout << i << " : I love C++" << std::endl;
        ++i; // Incrementation
    } while (i < COUNT);
}

void do_func_by_reference(size_t &i, const int COUNT)
{
    do
    {
        std::cout << i << " : I love C++" << std::endl;
        ++i; // Incrementation
    } while (i < COUNT);
}
#include <iostream>

// Pointers occupy 8 bytes on a 64-bit system and 4 bytes on a 32-bit system

int main()
{

    int *p_number{};      // can store the address of an integer // initialized to nullptr implicitly
    double *p_fraction{}; // can store the address of a double

    // Explicitly setting the pointer to nullptr
    int *p_nullptr{nullptr};
    double *p_nullptr2{nullptr};

    // All poniters have the same size as they store memory addresses
    std::cout << "sizeof(int) : " << sizeof(int) << std::endl;       // 4
    std::cout << "sizeof(double) : " << sizeof(double) << std::endl; // 8
    std::cout << "sizeof(double*) : " << sizeof(double *) << std::endl;
    std::cout << "sizeof(int*) : " << sizeof(int *) << std::endl;
    std::cout << "sizeof(p_number1) : " << sizeof(p_nullptr) << std::endl;
    std::cout << "sizeof(p_fractional_number1) : " << sizeof(p_nullptr2) << std::endl;

    int *p_number2{nullptr};
    int *p_number3{nullptr};
    int *p_number4{nullptr};

    int *p_number5{}, other_int_var{};
    int *p_number6{}, other_int_var6{}; // Confusing as you wonder if other_int_var6
                                        // is also a pointer to int. It is not
                                        // The structure is exactly the same for the
                                        // previous statement

    std::cout << "sizeof(p_number5) : " << sizeof(p_number5) << std::endl;
    std::cout << "sizeof(other_int_var) : " << sizeof(other_int_var) << std::endl;
    std::cout << "sizeof(p_number6) : " << sizeof(p_number6) << std::endl;
    std::cout << "sizeof(other_int_var6) : " << sizeof(other_int_var6) << std::endl;

    // It is better to separate these declarations on different lines though
    int *p_number7{};
    int other_int_var7{}; // No room for confusion this time

    // Initializing pointers and assigning them data
    int int_var{43};
    int *p_int{&int_var}; // The address of operator (&);

    std::cout << "Int var : " << int_var << std::endl;
    std::cout << "p_int (Address in memory)  : " << p_int << std::endl;

    // You can also change the address stored in a pointer any time
    int int_var1{65};
    p_int = &int_var1; // Assign a different address to the pointer
    std::cout << "p_int (with different address)  : " << p_int << std::endl;

    // Dereferencing a pointer :
    int *p_int2{nullptr};
    int int_data{56};
    p_int2 = &int_data;

    std::cout << "p_int2 (address)  : " << p_int2 << std::endl;
    std::cout << "value : " << *p_int2 << std::endl; // Dereferencing a pointer

    return 0;
}

#include <iostream>

int main()
{

    char *p_char_var{nullptr};
    char char_var{'A'};

    p_char_var = &char_var;
    std::cout << "The value of p_char_var is: " << *p_char_var << std::endl;

    char char_var1{'B'};
    p_char_var = &char_var1;
    std::cout << "The value of p_char_var is: " << *p_char_var << std::endl;

    // Pointers to char are special in that they can be used to point to strings.
    const char *p_message{"Hello, Char Pointers!"};

    std::cout << "The value of p_message is: " << p_message << std::endl; // Compiler will interpret this as a string.
    std::cout << "The value of p_message is: " << *p_message << std::endl; // Compiler will interpret this as a char.

    // Note: If you want to edit the string, use char array instead of const char pointer.
    char message[]{"Hello, Char Arrays!"};
    std::cout << "The value of message is: " << message << std::endl;
    message[0] = 'T';
    std::cout << "The value of message is: " << message << std::endl;
    return 0;
}

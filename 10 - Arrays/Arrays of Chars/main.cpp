#include <iostream>

// You can directly print a char array into the console without a loop!
// A null terminated char array is called a C string in C++
// The null terminator is '\0' and is automatically added to the end of the string
// But make sure to include the null terminator in the size of the array
// The null terminator is not counted in the size of the array during automatic initialization
// Literal strings are automatically null terminated, eg. "Hello" is actually "Hello\0"

int main()
{
    // Declare array (not null terminated)
    char message[5] = {'H', 'e', 'l', 'l', 'o'};

    // // Print through range based for loop
    // for (char c : message)
    // {
    //     std::cout << c;
    // }
    // std::cout << std::endl;

    // // Change char at index 1
    // message[1] = 'a';

    // for (char c : message)
    // {
    //     std::cout << c;
    // }
    // std::cout << std::endl;

    std::cout << message << std::endl; // will print "Hello" + garbage values

    std::cout << std::endl;

    // C strings
    char message1[]{'H', 'e', 'l', 'l', 'o', '\0'}; // null terminated
    std::cout << message1 << std::endl;             // will print "Hello"
    std::cout << sizeof(message1) << std::endl;     // will print 6

    char message2[6]{'H', 'e', 'l', 'l', 'o'};  // null terminated
    std::cout << message1 << std::endl;         // will print "Hello"
    std::cout << sizeof(message2) << std::endl; // will print 6

    char message3[]{'H', 'e', 'l', 'l', 'o'};   // not a C string
    std::cout << message3 << std::endl;         // will print "Hello" + garbage values
    std::cout << sizeof(message3) << std::endl; // will print 5

    std::cout << std::endl;

    // Literal strings
    char message4[]{"Hello World, How are you doing?"}; // null terminated
    std::cout << message4 << std::endl;
    std::cout << sizeof(message4) << std::endl;

    // Cant print number arrays directly, because if you try to print a number array directly, it will print the address of the first element
    std::cout << std::endl;
    int numbers[]{1, 2, 3, 4, 5};
    std::cout << numbers << std::endl; // will print the address of the first element

    return 0;
}

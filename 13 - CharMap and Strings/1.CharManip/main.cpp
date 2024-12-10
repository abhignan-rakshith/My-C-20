#include <iostream>
#include <cctype>

// Character manipulation (null terminated byte strings)
// using the cctype library
// isalnum() : checks if a character is alphanumeric
// isalpha() : checks if a character is alphabetic
// isblank() : checks if a character is a blank character
// islower() : checks if a character is lowercase
// isupper() : checks if a character is uppercase
// isdigit() : checks if a character is a digit
// tolower() : converts a character to lowercase
// toupper() : converts a character to uppercase

int main()
{

    /*
    std::cout << std::endl;
    std::cout << "std::isalnum : " << std::endl;

    std::cout << "C is alphanumeric : " << std::isalnum('C') << std::endl;
    std::cout << "6 is alphanumeric : " << std::isalnum('6') << std::endl;

    // Can use this as a test condition
    char input_char{'*'};
    if (std::isalnum(input_char))
    {
        std::cout << input_char << " is alhpanumeric." << std::endl;
    }
    else
    {
        std::cout << input_char << " is not alphanumeric." << std::endl;
    }
    */

    /*
    std::cout << std::endl;
    std::cout << "std::isalpha : " << std::endl;
    std::cout << "C is alphabetic : " << std::isalpha('e') << std::endl; // 1
    std::cout << "^ is alphabetic : " << std::isalpha('^') << std::endl; // 0
    std::cout << "7 is alphabetic : " << std::isalpha('7') << std::endl; // 0

    if (std::isalpha('e'))
    {
        std::cout << 'e' << " is alphabetic" << std::endl;
    }
    else
    {
        std::cout << 'e' << " is NOT alphabetic" << std::endl;
    }
    */

    /*
    std::cout << std::endl;
    std::cout << "std::isblank : "<<std::endl;
    char message[] {"Hello there. How are you doing? The sun is shining. "};
    std::cout << "message : " << message << std::endl;

    //Find and print blank index
    size_t blank_count{};
    for (size_t i{0} ; i < std::size(message); ++i){
        //std::cout << "Value : " << message[i] << std::endl;
        if(std::isblank(message[i])){
            std::cout << "Found a blank character at index : [" << i << "]" << std::endl;
            ++blank_count;
        }
    }
    std::cout << "In total we found " << blank_count << " blank characters."<< std::endl;
    */

    std::cout << "std::islower and std::isupper : " << std::endl;

    std::cout << std::endl;
    char thought[]{"The C++ Programming Language is one of the most used on the Planet"};
    size_t lowercase_count{};
    size_t upppercase_count{};

    // Print original string for ease of comparison on the terminal
    std::cout << "Original string  : " << thought << std::endl;

    for (auto character : thought)
    {
        if (std::islower(character))
        {
            std::cout << " " << character;
            ++lowercase_count;
        }
        if (std::isupper(character))
        {
            ++upppercase_count;
        }
    }
    std::cout << std::endl;
    std::cout << "Found " << lowercase_count << " lowercase characters and "
              << upppercase_count << " uppercase characters." << std::endl;

    return 0;
}

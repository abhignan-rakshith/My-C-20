#include <iostream>
#include <cstring>

// C string manipulation functions
// https://en.cppreference.com/w/cpp/header/cstring
// std::strlen() - Returns the length of the given byte string. (null-character is not counted)
// std::strcmp() - Compares two null-terminated byte strings lexicographically.
// std::strncmp() - Compares at most count characters of two byte strings.
// std::strchr() - Finds the first occurrence of the character ch in the byte string.
// std::strrchr() - Finds the last occurrence of the character ch in the byte string. (useful for getting file name from a path)

int main()
{

    const char message1[]{"The sky is blue."};
    const char *message2{"The sky is blue."};

    std::cout << "message1: " << message1 << std::endl;
    std::cout << "strlen(message1): " << std::strlen(message1) << std::endl;
    std::cout << "sizeof(message1): " << sizeof(message1) << std::endl; // 17 bytes

    std::cout << "message2: " << message2 << std::endl;
    std::cout << "strlen(message2): " << std::strlen(message2) << std::endl;
    std::cout << "sizeof(message2): " << sizeof(message2) << std::endl; // 8 bytes

    /*
    std::cout << std::endl;

    std::cout << "std::strcmp : " << std::endl;
    const char *string_data1{"Alabama"};
    const char *string_data2{"Blabama"};

    char string_data3[]{"Alabama"};
    char string_data4[]{"Blabama"};

    // Print out the comparison
    std::cout << "std::strcmp (" << string_data1 << "," << string_data2 << ") : "
              << std::strcmp(string_data1, string_data2) << std::endl;

    string_data1 = "Alabama";
    string_data2 = "Alabamb";

    // string_data3 = "Alabama";
    // string_data4 = "Alabamb";

    // Print out the comparison
    std::cout << "std::strcmp (" << string_data1 << "," << string_data2 << ") : "
              << std::strcmp(string_data1, string_data2) << std::endl;

    string_data1 = "Alacama";
    string_data2 = "Alabama";

    // Print out the comparison
    std::cout << "std::strcmp (" << string_data1 << "," << string_data2 << ") : "
              << std::strcmp(string_data1, string_data2) << std::endl;

    string_data1 = "India";
    string_data2 = "France";

    // Print out the comparison
    std::cout << "std::strcmp (" << string_data1 << "," << string_data2 << ") : "
              << std::strcmp(string_data1, string_data2) << std::endl;

    string_data1 = "Sugoi";
    string_data2 = "Sugoi";



    std::cout << std::endl;
    // Print out the comparison
    std::cout << "std::strcmp (" << string_data1 << "," << string_data2 << ") : "
              << std::strcmp(string_data1, string_data2) << std::endl;
    */

    /*
    // Print out the comparison
    const char *string_data1{"Alabama"};
    const char *string_data2{"Blabama"};
    size_t n{3};
    std::cout << std::endl;
    std::cout << "std::strncmp : " << std::endl;
    std::cout << "std::strncmp (" << string_data1 << "," << string_data2 << "," << n << ") : "
              << std::strncmp(string_data1, string_data2, n) << std::endl;

    string_data1 = "aaaia";
    string_data2 = "aaance";

    std::cout << "std::strncmp (" << string_data1 << "," << string_data2 << "," << n << ") : "
              << std::strncmp(string_data1, string_data2, n) << std::endl;

    n = 5;

    std::cout << "std::strncmp (" << string_data1 << "," << string_data2 << "," << n << ") : "
              << std::strncmp(string_data1, string_data2, n) << std::endl;

    string_data1 = "aaaoa";
    string_data2 = "aaance";

    std::cout << "std::strncmp (" << string_data1 << "," << string_data2 << "," << n << ") : "
              << std::strncmp(string_data1, string_data2, n) << std::endl;
    */

    std::cout << std::endl;

    /*
    std::cout << "std::strchr : " << std::endl;
    // doc : https://en.cppreference.com/w/cpp/string/byte/strchr

    // we use std::strchr to find all the characters one by one.

    const char *const str{"Try not. Do, or do not. There is no try."};
    char target = 'o';
    const char *result = str;
    size_t iterations{};

    // Loop to find all occurrences of 'target' in 'str' and print their positions
    while ((result = std::strchr(result, target)) != nullptr) // pointer is stored in result when found
    {
        std::cout << "Found '" << target
                  << "' starting at '" << result << "'\n";

        ++result; // Increment result to move past the current occurrence and avoid an infinite loop
        ++iterations;
    }
    std::cout << "iterations : " << iterations << std::endl;
    */

    /*
    std::cout << std::endl;
    std::cout << "std::strchr : " << std::endl;
    // doc : https://en.cppreference.com/w/cpp/string/byte/strchr

    // we use std::strchr to find all the characters one by one.

    const char *str{"Try not. Do, or do not. There is no try."};
    char target = 'T';
    const char *result = str;
    size_t iterations{};

    // Loop to find all occurrences of 'target' in 'str' and print their positions
    while ((result = std::strchr(str, target)) != nullptr) // pointer is stored in result when found
    {
        std::cout << "Found '" << target
                  << "' starting at '" << result << "'\n";

        ++str; // Increment result to move past the current occurrence and avoid an infinite loop
        ++iterations;
    }
    std::cout << "iterations : " << iterations << std::endl;
    */

    // Find last occurence
    // CODE STOLEN FROM THE DOCS :
    std::cout << std::endl;
    std::cout << "std::strrchr : " << std::endl;
    // doc : https://en.cppreference.com/w/cpp/string/byte/strrchr

    char input[] = "/home/user/hello.cpp";
    char *output = std::strrchr(input, '/');
    if (output)
    {
        ++output;
        std::cout << output << std::endl;
    }

    return 0;
}

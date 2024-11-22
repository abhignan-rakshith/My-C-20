#include <iostream>

// AND - its better to keep the operands that are more likely to be false at the beginning
// OR - its better to keep the operands that are more likely to be true at the beginning

bool car()
{
    std::cout << "Has Car" << std::endl;
    return true;
}

bool house()
{
    std::cout << "Has House" << std::endl;
    return false;
}

bool job()
{
    std::cout << "Has Job" << std::endl;
    return true;
}

bool spouse()
{
    std::cout << "Has Spouse" << std::endl;
    return true;
}

int main()
{

    /*bool a{true};
    bool b{false};
    bool c{true};
    bool d{false};

    bool p{false};
    bool q{false};
    bool r{false};
    bool m{true};

    // AND : If one of the operand is 0, the result is 0
    std::cout << std::endl;
    std::cout << "AND short circuit" << std::endl;
    bool result = a && b && c && d;
    std::cout << "Result: " << std::boolalpha << result << std::endl;

    // OR : If one of the operand is 1, the result is 1
    std::cout << std::endl;
    std::cout << "OR short circuit" << std::endl;
    result = p || q || r || m;
    std::cout << "Result: " << std::boolalpha << result << std::endl;

    std::cout << std::endl;
    std::cout << "END OF SHORT CIRCUIT" << std::endl;*/

    // The only condition for them to be happy is to have a car, house, job and spouse
    // So if any of the condition is false, they are sad
    // Note that the compiler will not evaluate the rest of the conditions if one of them is false
    if (car() && house() && job() && spouse())
    {
        std::cout << "I am happy" << std::endl;
    }
    else
    {
        std::cout << "I am sad" << std::endl;
    }

    return 0;
}

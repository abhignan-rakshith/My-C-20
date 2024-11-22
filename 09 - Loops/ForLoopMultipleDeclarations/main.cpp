#include <iostream>

int main(){
    
    for (size_t i{}, x{20}, y{5}; i < 4; ++i, x += 5, y -= 2)
    {
        std::cout << "x: " << x << " y: " << y << std::endl;
    }
    
    return 0;
}

#include <iostream>

int main() {
    constexpr double gravity{ 9.8 };
    int what{ 36 };
    std::cout << gravity << '\n';
    
    int poopy = (what > 37) ? 1 : 2;
    std::cout << poopy << '\n';
    return 0;
}

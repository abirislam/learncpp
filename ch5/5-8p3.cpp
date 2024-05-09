#include <iostream>

// we can use consteval function to force constexpr function to evaluate at compile time even when the return value is being used where a constant expression is not required

consteval auto compileTime(auto value) {
    return value;
}

constexpr int greater(int x, int y) {
    return (x > y ? x : y);
}

int main() {
    // this may or may not execute at compile time
    std::cout << greater(5, 6) << '\n';
    // this will definitely execute at compile time
    std::cout << compileTime(greater(5, 6)) << '\n';

    // we can still call the constexpr function at runtime if we'd like
    int x { 5 };
    std::cout << greater(5, 6) << '\n';

    return 0;
}

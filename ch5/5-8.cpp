#include <iostream>

// constexpr function
// a function that is eligible to be evaluated at compile-time
constexpr int greater(int x, int y) {
    return (x > y ? x : y);
}

int main() {
    // this is always evaluated at compile-time
    // a constexpr expression must be evaluated at compile time if the return value is used where a constant expression is required
    // thus, greater() must be evaluated at compile time
    constexpr int g { greater(5, 6) };
    std::cout << g << " is greater!\n";
    
    // this is eligible to be evaluated at either compile-time or runtime
    // the return value is not being used in a context that requires a constant expr
    std::cout << greater(5, 6) << " is greater! ";

    // this is likely evaluated at runtime
    // argument is not being called with constant expressions
    int x{ 5 };
    std::cout << greater(x, 6) << " is greater!\n";
    
    // always evaluated at runtime
    // x is a runtime variable here
    std::cin >> x;
    std::cout << greater(x, 6) << " is greater!\n";
    return 0;
}

#include <iostream>

int main() {
    // for the remainder operator (aka modulo operator)
    // the sign of the quotient will always take after the sign of the first number
    int x{};
    int y{};
    std::cout << "Please enter 2 integers separated by a space:\t";
    std::cin >> x;
    std::cin >> y;
    std::cout << x << " % " << y << " is " << x % y << '\n';
    return 0;
}

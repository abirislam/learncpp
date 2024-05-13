#include <iostream>

constexpr bool isEven(int value) {
    return (value % 2) == 0;
}

int main() {
    std::cout << "enter an integer:\t";
    int x{};
    std::cin >> x;
    if (isEven(x))
        std::cout << x << " is even.\n";
    else
        std::cout << x << " is odd.\n";
    return 0;
}

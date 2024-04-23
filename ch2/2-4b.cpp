#include <iostream>

int doubleNumber(int num) {
    return num * 2;
}

int main() {
    std::cout << "Enter a number: ";
    int x{};
    std::cin >> x;
    std::cout << "Your number doubled is: " << doubleNumber(x) << '\n';
    return 0;
}

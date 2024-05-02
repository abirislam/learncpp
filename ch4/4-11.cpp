#include <iostream>

int main() {
    std::cout << "Please enter a keyboard character\t";
    char a{};
    std::cin >> a;
    std::cout << "You have typed: " << a << '\n';
    return 0;
}

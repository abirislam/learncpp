#include <iostream>

int main() {
    std::cout << "Please enter a single character:\t";
    char c{};
    std::cin >> c;
    int asciiC{ c };
    std::cout << "You entered '" << c << " which has ASCII value " <<asciiC << ".\n";
    return 0;
}

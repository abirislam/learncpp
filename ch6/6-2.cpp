#include <iostream>

int main() {
    std::cout << "This should print 2\n";
    std::cout << 5/2 << '\n';
    std::cout << "This should print 2.5\n";
    std::cout << static_cast<double>(5) / 2 << '\n';
    return 0;
}

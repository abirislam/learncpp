#include <iostream>

int convertToAscii(char in);

int main() {
    std::cout << "Enter a single character:\t";
    char input{};
    std::cin >> input;
    std::cout << "You entered '" << input << "' which has ASCII code  " << convertToAscii(input) << '\n';
    return 0;
}

int convertToAscii(char in) {
    return static_cast<int>(in);
}

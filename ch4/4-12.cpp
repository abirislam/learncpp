#include <iostream>

int convertToAscii(char in);

int main() {
    std::cout << "Enter a single character:\t";
    char input{};
    std::cin >> input;
    std::cout << "You entered '" << input << "' which has ASCII code  " << convertToAscii(input) << '\n';
    return 0;
}

// use static_cast<type> to change the type of a variable to a diff type explicitly
int convertToAscii(char in) {
    return static_cast<int>(in);
}

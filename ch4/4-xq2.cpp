#include <iostream>

double userInputDouble();
char symbolInput();
double symbolCalculation(double input1, double input2, char symbol);

int main() {
    double a { userInputDouble() };
    double b { userInputDouble() };
    char c{ symbolInput() };
    
    std::cout << a << ' ' << c << ' ' << b << " is " << symbolCalculation(a, b, c) << '\n';
    return 0;
}

double userInputDouble() {
    std::cout << "Please enter a floating point number:\t";
    double f;
    std::cin >> f;
    return f;
}
char symbolInput() {
    std::cout << "Enter +, -, *, or /:\t";
    char input{};
    std::cin >> input;
    return input;
}

double symbolCalculation(double input1, double input2, char symbol) {
    if (symbol == '+')
        return input1 + input2;
    else if (symbol == '-')
        return input1 - input2;
    else if (symbol == '*')
        return input1 * input2;
    else 
        return input1 / input2;
}

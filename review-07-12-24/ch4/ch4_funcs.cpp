#include <iostream>
#include "ch4_funcs.h"

double takeInput() {
    std::cout << "Pick a number:\t";
    double input{};
    std::cin >> input;

    return input;
}

char detOperation() {
    std::cout << "Choose an operation from +, -, *, and /: \t";
    char operand{};
    std::cin >> operand;

    return operand;
}

void doMaths(double a, double b, char c) {
    std::cout << "Your answer is: ";

    if (c == '+') {
        std::cout << a + b;
    }
    else if (c == '-') {
        std::cout << a - b;
    }
    else if (c == '*') {
        std::cout << a * b;
    }
    else {
        if (b != 0) {
            std::cout << a / b;
        } 
        else {
            std::cout << "\nDivide by 0 error.";
        }
    }

    std::cout << '\n';
}

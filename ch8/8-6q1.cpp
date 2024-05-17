#include <iostream>

constexpr int calculate(int a, int b, char c)
{
    switch (c)
    {
    case '+':
        return a + b;
    case '-':
        return a - b;
    case '*':
        return a * b;
    case '/':
        return a / b;
    case '%':
        return a % b;
    default:
        std::cout << "Invalid operator, terminating.";
        exit(-1);
    }
}

int main()
{
    // hello world
    std::cout << calculate(1, 2, '+') << '\n';
    std::cout << calculate(2, 2, '-') << '\n';
    std::cout << calculate(1, 2, '*') << '\n';
    std::cout << calculate(2, 2, '/') << '\n';
    std::cout << calculate(1, 2, '%') << '\n';
    return 0;
}

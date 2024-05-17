#include <iostream>

int main()
{
retryInput:
    std::cout << "Enter an integer 1-10:\t";
    int input{};
    std::cin >> input;

    if (input > 10 || input < 1)
    {
        std::cout << "Invalid input, try again\n";
        goto retryInput;
    }

    std::cout << "You entered: " << input << '\n';
    return 0;
}

#include <iostream>

int sumTo(int value);

int main()
{
    int input{};
    std::cout << "Enter a number to sum to: ";
    std::cin >> input;
    std::cout << "Your sum is: " << sumTo(input) << '\n';
    return 0;
}

int sumTo(int value)
{
    int sum{ 0 };
    for (int i{ 1 }; i <= value; ++i)
    {
        sum += i;
    }

    return sum;
}


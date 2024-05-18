#include <iostream>

void fizzbuzz(int value)
{
    for (int i{ 1 }; i <= value; ++i)
    {
        if ((i % 3 == 0) && (i % 5 == 0))
            std::cout << "fizzbuzz\n";
        else if (i % 3 == 0)
            std::cout << "fizz\n";
        else if (i % 5 == 0)
            std::cout << "buzz\n";
        else
            std::cout << i << '\n';
    }
}

int main()
{
    std::cout << "Enter a number to count up to: ";
    int x{};
    std::cin >> x;
    fizzbuzz(x);

    return 0;
}

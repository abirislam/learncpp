#include <iostream>

int checkBit(int input, int power)
{
    if (input > power)
    {
        std::cout << "1";
        return input - power;
    }

    std::cout << "0";
    return input;
}

int main()
{
    std::cout << "Enter an integer 0 - 255:\t";
    int x{};
    std::cin >> x;

    x = checkBit(x, 128);
    x = checkBit(x, 64);
    x = checkBit(x, 32);
    x = checkBit(x, 16);
    x = checkBit(x, 8);
    x = checkBit(x, 4);
    x = checkBit(x, 2);
    x = checkBit(x, 1);

    std::cout << '\n';
    return 0;
}

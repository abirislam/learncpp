#include <iostream>

void printDigitName(int x)
{
    switch (x)
    {
    // case statements must end with either return (exits the function)
    // or break (exit the switch case and continue execution
    case 1:
        std::cout << "One\n";
        return;
    case 2:
        std::cout << "Two\n";
        return;
    case 3:
        std::cout << "Three\n";
        return;
    default:
        std::cout << "Unknown\n";
        break;
    }

    std::cout << "We used the break here!\n";
}

int main()
{
    printDigitName(17);
    printDigitName(2);

    return 0;
}

#include <iostream>

int main()
{
    for (int i{ 1 }; i <= 30; ++i)
    {
        // print all numbers 1 - 30 except those divisible by 4
        if ( i % 4 == 0 )
            continue;
        
        std::cout << i << '\n';
    }

    while (true)
    {
        std::cout << "Please select an option\n";
        std::cout << "1) +500 gold\n";
        std::cout << "2) +1000 exp\n";
        std::cout << "3) +3 random loot boxes\n";
        std::cout << "4) blade of the unholy\n";

        int option{};
        std::cin >> option;
        if (option > 0 && option < 5)
        {
            std::cout << "You have chosen option " << option << ".\n";
            break;
        }
        else
        {
            std::cout << "Invalid option choice.\n";
        }

    }

    return 0;
}

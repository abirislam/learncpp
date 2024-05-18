#include <iostream>

int main()
{
    int letter{};
    letter = static_cast<int>('a');

    while (letter <= static_cast<int>('z'))
    {
        std::cout << "Letter " << static_cast<char>(letter) << " has ASCII code " << letter << '\n';
        ++letter;
    }

    return 0;
}

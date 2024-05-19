#include "Random.h"
#include <iostream>


bool playAgain()
{
    char c{};
    while ((c != 'y') && (c!= 'n'))
    {
        std::cout << "Would you like to play again? (y/n)\t";
        std::cin >> c;
    }

    return c == 'y';
}

void game()
{
    int target{ Random::get(1, 100) };
    int guess{};
    int guessNum{ 1 };

    while ((guess != target) && (guessNum <= 7))
    {
        std::cout << "Guess #" << guessNum << ": ";
        std::cin >> guess;
        if (guess > target)
        {
            std::cout << "Your guess is too high.\n";
        }
        if (guess < target)
        {
            std::cout << "Your guess is too low.\n";
        }

        ++guessNum;
    }

    if (guess == target)
    {
        std::cout << "Correct! You win!\n";
    }

    else
    {
        std::cout << "Sorry, you lose. The correct number was " << target << ".\n";
    }

    if (playAgain())
    {
        game();
    }
}

int main() 
{
    std::cout << "Let's play a game. I'm thinking of a number between 1 and 100.\n";
    std::cout << "You have 7 tries to guess what the number is.\n";

    game();

    return 0;
}

#include <iostream>

bool isVowel(char c)
{
    switch (c) 
    {
    // we can stack labels that have the same return
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
        return true;
    default:
        return false;
    }
}

int main()
{
    if (isVowel('b')) 
        std::cout << "yo was good\n";
    if (isVowel('O'))
        std::cout << "NSEEESEFESFSEF\n";
    return 0;
}



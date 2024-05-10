#include <iostream>
#include <string>

int main() {
    std::string bob {};
    std::cout << "What is your name?\t";
    std::cin >> bob;

    std::cout << "Your name is:\t" << bob << '\n';

    std::string joseph { "joseph" };
    std::cout << joseph << " is stinky!\n";

    std::string myID { "234234" };
    std::cout << "Your ID # is: " << myID << '\n';

    joseph = "samuel";
    std::cout << "joseph is now actually " << joseph << '\n';

    // if you ask the user to enter a sentence, cin will break on whitespace so it wont work as intended
    // to combat this, we use std::getline()
    // std::getline() requires 2 arguments: std::cin and then your string variable
    
    std::cout << "Enter your full name:\t";
    std::string fullName{};

    // std::ws is an input manipulator that tells std::cin to ignore any leading whitespace before extraction
    std::getline(std::cin >> std::ws, fullName);

    std::cout << "Enter your favorite color: ";
    std::string color{};
    std::getline(std::cin >> std::ws, color);
    std::cout << "Your full name is " << fullName << " and your favorite color is " << color << '\n';
    std::cout << "Your full name has " << fullName.length() << " characters.\n";
    return 0;
}

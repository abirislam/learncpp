#include <iostream>
#include <string>
#include <string_view>

std::string getName(int personNum) {
    std::cout << "Enter the name of person #" << personNum << ":\t";
    std::string name{};
    std::getline(std::cin >> std::ws, name);
    return name;
}

int getAge(std::string_view personName) {
    std::cout << "Enter the age of " << personName << ":\t";
    int age {};
    std::cin >> age;
    return age;
}

int main () {
    const std::string name1{ getName(1) };
    const std::string name2{ getName(2) };
    const int age1 { getAge(name1) };
    const int age2 { getAge(name2) };

    if (age1 > age2)
        std::cout << name1 << " (age " << age1 << ") is older than " << name2 << "(age " << age2 << ")\n";
    else
        std::cout << name2 << " (age " << age2 << ") is older than " << name1 << "(age " << age1 << ")\n";
    return 0;
}

#include <iostream>
#include <string>

int main() {
    std::cout << "Please enter your full name:\t";
    std::string name{};
    std::getline(std::cin >> std::ws, name);
    std::cout << "Enter your age:\t";
    int age{};
    std::cin >> age;
    // for the next line we can do name.length() but because it is of type unsigned integer, we would have to convert it to a signed integer (integers are signed by default)
    // static_cast<int>(name.length()) will give us the signed integer value of length of name
    std::cout << "Your age + length of name is: " << std::ssize(name) + age << '\n';
    return 0;
}

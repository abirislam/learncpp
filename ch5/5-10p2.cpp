#include <iostream>
#include <string>
#include <string_view>

int main() {
    std::string name { "Alex" };
    std::string_view sv { name }; //sv is now viewing name
    std::cout << sv << '\n'; // prints Alex

    sv = "John"; //sv is now viewing John, does not change name
    std::cout << sv << '\n'; // prints John

    std::cout << name << '\n'; // prints alex
    
    // in contrast
    std::string name2 { "Bob" };
    std::string copy { name2 };
    std::cout << copy << '\n';

    copy = "David";
    std::cout << copy << '\n'; // prints david

    std::cout << name2 << '\n'; // also prints bob
    return 0;
}

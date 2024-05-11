#include <iostream>
#include <string_view>

int main() {
    // substring manipulation
    std::string_view str { "Chocolate" };
    std::cout << str << '\n';

    str.remove_prefix(1);
    std::cout << str << '\n';

    str.remove_suffix(4);
    std::cout << str << '\n';

    str = "Chocolate";
    std::cout << str << '\n';
    
    return 0;
}


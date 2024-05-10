#include <iostream>
#include <string>
#include <string_view>

int main() {
    // this gives us access to the s suffix
    using namespace std::string_literals;
    // this gives us access to the sv suffix
    using namespace std::string_view_literals;

    // no suffix C-style string literal
    std::cout << "foo\n";
    // s suffix is a std::string literal
    std::cout << "goo\n"s;
    // sv suffix is a std::string_view literal
    std::cout << "moo\n"sv;

    // unlike std::string, std::string_view has full support for constexpr
    constexpr std::string_view s{ "Hello world!" };
    // s will be replaced with hello world at compile time
    std::cout << s << '\n';
    return 0;
}

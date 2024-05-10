#include <iostream>
#include <string>
#include <string_view> 

void printSV(std::string_view str) {
    std::cout << str << '\n';
}

int main() {
    std::string_view s{ "Hello, world!" };
    printSV(s);

    return 0;
}

// using string_view is better than using string
// if we had used string, it would first copy the value hello, world! into string s
// then it would copy s into the function parameter str
// thus it had to copy twice just to print one statement, which is needlessly expensive
// if we use string_view, it provides read-only access to an existing string - without copying the value

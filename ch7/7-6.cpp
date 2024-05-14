#include <iostream>

// this is bad, global scope variable with external linkage
int g_x{};

// this is a global scope variable with internal linkage (only usable in this file)
static int g_y{};

// constant variables have internal linkage by default
const int g_a{ 6 };
constexpr int g_b{ 7 };

// functions by default have external linkage but we can set it to internal linkage by using static
static int subtract(int x, int y) {
    return x - y;
}

// overall use unnamed namespaces to get internal linkage instead


// non const global variables have external linkage by default so adding extern keyword is redundant
int g_c{};

// constant global variables can be made external using extern
extern const int g_d{ 5 };
extern constexpr int g_e{ 10 };

// to actually use an external global variable in another file, we have to make a forward declaration in each file that we use it in
// variables dont need an initialization value when forward declared
// suppose this lives in another file where we use the ones defined above in this file
extern int g_c{};
extern const int g_d{};
extern constexpr int g_e{};


// WARNING: when using an uninitialized non-const global variable, do not use extern keyword as a) it has external linkage by default, and b)
// the compiler will think its a forward declaration


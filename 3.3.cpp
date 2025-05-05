// 3.3.cpp
// Lambda Functions

#include <iostream>


int main() {
    auto print = [](const char *str) {
        std::cout << str << "\n";
    };
    print("Hello, World!");
    return 0;
}
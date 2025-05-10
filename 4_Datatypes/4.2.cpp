// 4.2.cpp
// Static Typing

#include <iostream>

int main() {

    int num = 65;
    std::cout << "num: " << num << "\n";
    double pi = 3.14159;
    std::cout << "pi: " << pi << "\n";
    char c = 'c';
    std::cout << "c: " << c << "\n";

    c = num;
    num = pi;

    std::cout << "num: " << num << "\n";
    std::cout << "pi: " << pi << "\n";
    std::cout << "c: " << c << "\n";
    return 0;
}
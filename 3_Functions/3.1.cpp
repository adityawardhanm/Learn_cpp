// 3.1.cpp
// Functions and function prototypes

#include <iostream>

int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b);

int main () {
    int p;
    std::cout << "Enter first numbers:" << "\n";
    std::cin >> p;
    int q;
    std::cout << "Enter second numbers:" << "\n";
    std::cin >> q;
    int sum = add(p,q);
    int sub = subtract(p,q);
    std::cout << "The sum is: " << sum << "\n";
    std::cout << "The difference is: " << sub << "\n";
    return 0;
}

int subtract(int a, int b) {
    return a - b;
}
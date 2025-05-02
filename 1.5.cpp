// 1.5.cpp
// Logical Operations

#include <iostream>

int main() {
    int a, b;
    std::cout << "Enter value of a: ";
    std::cin >> a;
    std::cout << "Enter value of b: ";
    std::cin >> b;  
    std::cout << "Logical AND: " << (a && b) << "\n";
    std::cout << "Logical OR: " << (a || b) << "\n";
    std::cout << "Logical NOT: " << !a << "\n";
    return 0;
}
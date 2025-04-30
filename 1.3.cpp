// 1.3.cpp
// Arithmetic Operations
#include <iostream>

int main() {
    int a, b;
    std::cout << "Enter value of a: ";
    std::cin >> a;
    std::cout << "Enter value of b: ";
    std::cin >> b;  
    std::cout << "Addition: " << a + b << "\n";
    std::cout << "Subtraction: " << a - b << "\n";
    std::cout << "Multiplication: " << a * b << "\n";
    std::cout << "Division: " << a / b << "\n";
    std::cout << "Modulus: " << a % b << "\n";
    std::cout << "Increment: " << ++a << "\n";
    std::cout << "Decrement: " << --b << "\n";
    return 0;
}
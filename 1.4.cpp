// 1.4.cpp
// Binary/Bitwise Operations
#include <iostream>

int main() {
    int a, b;
    std::cout << "Enter value of a (0/1): ";
    std::cin >> a;
    std::cout << "Enter value of b (0/1): ";
    std::cin >> b;  
    std::cout << "Binary AND: " << (a & b) << "\n";
    std::cout << "Binary OR: " << (a | b) << "\n";
    std::cout << "Binary XOR: " << (a ^ b) << "\n";
    std::cout << "Binary NOT: " << (~a) << "\n";
    std::cout << "Left Shift: " << (a << 2) << "\n";
    std::cout << "Right Shift: " << (a >> 2) << "\n";       
    return 0;
}
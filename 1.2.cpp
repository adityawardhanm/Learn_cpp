// 1.2.cpp
// input <-> output
#include <iostream>

int main() {
    int a = 1;
    int b;
    std::cout << "Enter a number: "; 
    std::cin >> b ;
    std::cout << "You entered: " << b << "\n" << "The sum is: " << a + b << std::endl; 
    return 0;
}
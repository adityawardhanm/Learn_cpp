// 6.2.cpp
// Data Segments
#include <iostream>

int main() {
    // Static variable
    static int staticVar = 10;

    // Global variable
    int globalVar = 20;

    // Local variable
    int localVar = 30;

    std::cout << "Static Variable: " << staticVar << std::endl;
    std::cout << "Global Variable: " << globalVar << std::endl;
    std::cout << "Local Variable: " << localVar << std::endl;

    return 0;
}
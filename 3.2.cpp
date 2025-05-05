// 3.2.cpp
// Operator Overloading

#include <iostream>

int main() {
    int a;
    std::cout << "Enter a number: " << "\n";
    std::cin >> a;
    int b;
    std::cout << "Enter another number: " << "\n";
    std::cin >> b;

    int sum = a + b;
    int diff = a - b;
    int prod = a * b;
    int quot = a / b;
    int mod = a % b;

    bool isEqual = (a == b);
    bool isNotEqual = (a != b);
    bool isLess = (a < b);
    bool isGreater = (a > b);
    bool isLessOrEqual = (a <= b);
    bool isGreaterOrEqual = (a >= b);

    bool isAnd = (true && false);
    bool isOr = (true || false);
    bool isNot = !true;
    bool isXor = (true ^ false);


    a += 1;
    a -= 1;
    a *= 1;
    a /= 1;
    a %= 1;    

    
    std::cout << "Sum: " << sum << "\n";
    std::cout << "Difference: " << diff << "\n";
    std::cout << "Product: " << prod << "\n";
    std::cout << "Quotient: " << quot << "\n";
    std::cout << "Modulus: " << mod << "\n";
    std::cout << "Is Equal: " << isEqual << "\n";
    std::cout << "Is Not Equal: " << isNotEqual << "\n";
    std::cout << "Is Less: " << isLess << "\n";
    std::cout << "Is Greater: " << isGreater << "\n";
    std::cout << "Is Less or Equal: " << isLessOrEqual << "\n";
    std::cout << "Is Greater or Equal: " << isGreaterOrEqual << "\n";
    std::cout << "Is And: " << isAnd << "\n";
    std::cout << "Is Or: " << isOr << "\n";
    std::cout << "Is Not: " << isNot << "\n";
    std::cout << "Is Xor: " << isXor << "\n";
    

    return 0;

}
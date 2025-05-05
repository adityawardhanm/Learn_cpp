// 4.3.cpp
// Dynamic Typing

#include <iostream>

int main() {

    int x = 42;
    float y = 3.14f;
    std::string z = "Hello, World!";

    void* void_ptr;

    void_ptr = &x;
    std::cout << "Value of x: " << *(static_cast<int*>(void_ptr)) << "\n";
    void_ptr = &y;
    std::cout << "Value of y: " << *(static_cast<float*>(void_ptr)) << "\n";
    void_ptr = &z;
    std::cout << "Value of z: " << *(static_cast<std::string*>(void_ptr)) << "\n";
    
}
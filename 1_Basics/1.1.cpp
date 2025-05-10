//  1.1.cpp
//  Hello World and endline characters 

#include <iostream>
 
int main() {
    std::cout << "Hello World" << std::endl; // for proper flushing and immediate output 
    std::cout << "Hello World2" << "\n"; // for faster output, but not always flushed immediately
    return 0;
}
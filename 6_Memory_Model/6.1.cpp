// 6.1.cpp
// Stack and Heap Memory
#include <iostream>

int main() {
    using namespace std;
    // Stack memory allocation
    int x = 10; 

    // Heap memory allocation
    int *y = new int; 
    *y = x;

    cout << "Stack variable: " << x << "\n";
    cout << "Heap variable: " << *y << "\n";

    delete y;

    return 0;
    // THe key difference between stack and heap memory is that 
    // stack memory is automatically managed by the compiler, 
    // while heap memory must be manually managed by the programmer. 
    // Stack memory is typically faster to allocate and deallocate, but has a limited size, 
    // while heap memory can be larger but is slower to access.

}
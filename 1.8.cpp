// 1.8.cpp
// looping using for and while

#include <iostream>

int main() {
    // for loop
    for (int i = 0 ; i < 10 ; i++) {
        std::cout << i << "\n";   
    };
    // while loop
    int j = 0;
    while (j < 10) {
        std::cout << j << "\n";
        j++;
    }
    // do while loop
    int k = 0;
    do {
        std::cout << k << "\n";
        k++;
    } while (k < 10);
    return 0;
}
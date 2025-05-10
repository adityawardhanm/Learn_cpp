// 2.2.cpp
// switch statement
#include <iostream>

int main() {
    int i = 0;
    switch (i) {
        case 0:
            i++;
            break;
        case 1:
            i++;
            break;
        default:
            i++;
            break;
    }
    std::cout << i << std::endl;
    return 0;
}
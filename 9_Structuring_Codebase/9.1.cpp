// 9.1.cpp
// Forward Declaration 
#include <iostream>

int add(int a, int b);

int main() {
    using namespace std;
    int x = 5;
    int y = 10;
    cout << "sum:" <<add(x,y) << "\n";
    return 0;
}

int add(int a, int b) {return a+b;}
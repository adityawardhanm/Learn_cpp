// 8.1.cpp
// raw pointer
#include <iostream>

int main() {
    using namespace std;

    int* ptr = new int;
    *ptr = 50;

    cout << "Value: " << *ptr << endl;
    cout << "Address: " << ptr << endl;
    
    delete ptr;
    ptr = nullptr;

    return 0;
}

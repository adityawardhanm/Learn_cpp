// 8.5.cpp
// new and delete operators and memory leakage
#include <iostream>

int main() {
    using namespace std;

    // Proper memory management
    int* ptr = new int(10);
    int* arr = new int[5];

    arr[0]=1; arr[1]=2; arr[2]=3; arr[3]=4; arr[4]=5;

    cout << "Value: " << *ptr << endl;
    cout << "Array: ";
    for (int i = 0; i < 5; ++i) {
        cout << arr[i] << " ";
    }

    delete ptr;
    delete[] arr;


    // Memory leakage
    // int* leak = new int(20);
    // Forgetting to delete the pointer
}
// 5.1.cpp
// Pointers

#include <iostream>

int add(int a, int b) {
    return a + b;
}

int main(){
    using namespace std;

    // Normal Pointers
    int num = 10;
    int *ptr = &num;

    // Function Pointers
    int (*funcPtr)(int, int) = add;
    int result = funcPtr(5, 10);
    cout << "Result of function pointer: " << result << endl;

}

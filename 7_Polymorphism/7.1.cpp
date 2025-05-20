// 7.1.cpp
// Static Polymorphism
# include <iostream>
using namespace std; 

// Function Overloading
int add(int a, int b) {
    return a + b;
}
double add(double a, double b) {
    return a + b;
}

// Templates

template <typename T>
void print(const T& value){
    cout << value << endl;
}

int main() {
    print(add(5, 10));
    print(add(5.5, 10.5));
    return 0;
}
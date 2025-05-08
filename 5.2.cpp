// 5.2.cpp
// References
# include <iostream>

int add(int &a, int &b) {
    return a + b;
}
 
int main() { 
    using namespace std; 

    int var = 20;
    int &ref = var;

    cout << ref;

    ref = 30;
    cout << var;

    // Function Parameter References
    int x = 5;
    int y = 10;

    int result = add(x, y);
    cout << "Result of function parameter references: " << result << endl;
}
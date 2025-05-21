// 10.2.cpp
// Encapsulation
#include <iostream>
using namespace std;

class Base {
private:
    int x = 0;

public:
    int get_default() { return x;}

    void set_default(int value) {
        if (value >= 0) {
            x = value;
        } else {
            cout << "Invalid value. Must be non-negative." << endl;
        }
    }
};

int main() {
    Base b;
    cout << "Default value: " << b.get_default() << endl;

    b.set_default(10);
    cout << "Updated value: " << b.get_default() << endl;

    b.set_default(-5);

    return 0;
}
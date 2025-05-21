// 10.1.cpp
// Classes
#include <iostream>
using namespace std;

class Base {
public:
    void show() { cout << "Shape drawn \n"; }
};

int main() {

    Base b;
    b.show();
    return 0;
}
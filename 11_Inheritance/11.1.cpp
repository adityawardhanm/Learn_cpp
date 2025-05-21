// 11.1.cpp
// Single Inheritance
#include <iostream>
using namespace std;

class Base {
public:
    virtual void show() { cout << "Shape drawn \n"; }
};

class Derived : public Base {
public:
    void show() override { cout << "Circle drawn \n"; }
};
int main() {
    Base b;
    b.show(); 

    Derived d;
    d.show();

    Base *ptr = new Derived();
    ptr->show(); 

    delete ptr;
    return 0;
}    
// 7.2.cpp
// Dynamic Polymorphism
#include <iostream>
using namespace std;
class Base {
public:
    virtual void show() { cout << "Shape drawn \n";}
};

class Circle : public Base {
public:
    void show() override { cout << "Circle drawn \n";}
};

int main() {
    Base *b = new Circle();
    b->show();
    delete b;
    return 0;
}
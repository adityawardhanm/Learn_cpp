// main.cpp
#include <iostream>

class MyClass {
    public:
        void greet() {
            std::cout << "Hello, World!" << std::endl;
    }
};

int main() {
    MyClass obj;
    obj.greet();
    return 0;
}
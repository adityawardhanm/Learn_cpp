// 4.1.cpp
// datatypes
#include <iostream>

int main() {
    int a = 5;
    std::cout << a << "\n";
    float b = 3.14f;
    std::cout << b << "\n";
    double c = 2.718281828459;
    std::cout << c << "\n";
    char d = 'A';
    std::cout << d << "\n";
    bool e = true;
    std::cout << e << "\n";
    std::string f = "Hello, World!";
    std::cout << f << "\n";
    int numb[3] = {1, 2, 3};
    for (int i = 0; i < 3; i++) {
        std::cout << numb[i] << "\n";
    }

    std::cout << "\n";
    // pointers are like a sticky note which tells you where the variable is in memory.

    int num = 42;
    int* ptr = &num;
    std::cout << "Address of num: " << &num << "\n";
    std::cout << "Value of ptr: " << ptr << "\n";
    std::cout << "Value pointed to by ptr: " << *ptr << "\n";

    std::cout << "\n";
    // references are like having a nickname for a variable.

    int num1 = 42;
    std::cout << "Address of num1: " << &num1 << "\n";
    std::cout << "Value of num1: " << num1 << "\n";
    int& num2 = num1;
    std::cout << "Address of num2: " << &num2 << "\n";
    std::cout << "Value of num2: " << num2 << "\n";
    std::cout << "\n";

    // struct: think of it as a box full of legos. It always has public access and each member has its own space

    struct point {
        int x;
        int y;
    };

    point p1 = {1, 2};

    std::cout << "p1.y: " << p1.y << "\n";
    std::cout << "p2.x: " << p1.y << "\n";

    std::cout << "\n";
    // class: think of it as a secure locker. it has private access and each member has its own space

    class User {
        public:
            int id;
            std::string name;
            int age;
            void print() {
                std::cout << "ID: " << id << "\n";
                std::cout << "Name: " << name << "\n";
                std::cout << "Age: " << age << "\n";
            };
    };
    User user1;
    user1.id = 1;
    user1.name = "John Doe";
    user1.age = 30;
    user1.print();

    std::cout << "\n";
    // union: think of it as one chair, three names - only one can sit. it has public access and all members share the same space.

    union Data {
        int intValue;
        float floatValue;
        char charValue;
    };
    Data value;
    value.intValue = 42;
    std::cout << "intValue: " << value.intValue << "\n";
}
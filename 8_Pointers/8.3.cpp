// 8.3.cpp
// shared pointer
#include <iostream>
#include <memory>

int main(){
    using namespace std;

    shared_ptr<int> a = make_shared<int>(5);
    shared_ptr<int> b = a; // Copying the pointer, both a and b point to the same memory

    cout << "a: " << *a << endl;
    cout << "b: " << *b << endl;
    cout << "b use count: " << b.use_count() << endl;

    a.reset();\
    cout << "a is now empty\n";
    cout << "b: " << *b << endl;
    cout << "b use count: " << b.use_count() << endl;

    return 0;
}
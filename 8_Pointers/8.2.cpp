// 8.2.cpp
// weak pointer
#include <iostream>
#include <memory>

int main(){
    using namespace std;

    shared_ptr<int> strong = make_shared<int>(5);
    weak_ptr<int> weak = strong;

    cout << "strong use count: " << strong.use_count() << endl;

    if (auto locked = weak.lock()) {
        cout << "weak pointer is valid, value: " << *locked << endl;
    } else {
        cout << "weak pointer is expired" << endl;
    }

    strong.reset();

    if (auto locked = weak.lock()) {
        cout << "weak pointer is valid, value: " << *locked << endl;
    } else {
        cout << "weak pointer is expired" << endl;
    }
}
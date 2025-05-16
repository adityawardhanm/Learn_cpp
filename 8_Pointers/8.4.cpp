// 8.4.cpp
// unique pointer
#include <iostream>
#include <memory>

int main(){
    using namespace std;
    unique_ptr<int> a = make_unique<int>(10);

    cout << "a: " << *a << endl;

    // unique_ptr<int> b = a; Can't copy this pointer, only transfer ownership
    unique_ptr<int> b = move(a);

    if (!a) cout << "a is now empty\n";
    cout << "b: " << *b << endl;

    return 0;
}
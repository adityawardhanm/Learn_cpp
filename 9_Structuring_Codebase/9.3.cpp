// 9.3.cpp
// Scope

// Scope is a region or a block of code where a variable is visible and accessible. 

#include <iostream>
using namespace std;

// Local Scope
void localscope() {
    int localvar = 10;
    cout << "Local variable: " << localvar << endl;
}

// Global Scope
int globalvar = 20;

// Namespace Scope
namespace namesp {
    int namespacevar = 30;   
}

//  Class Scope
class MyClass {
    private:
        int classvar = 40;            // full access, hidden outside
    protected:
        void setClassvar(int v) { classvar = v; }  // limited write for derived classes
    public:
        int getClassvar() const { return classvar; }  // read-only access for all
};

// Enum Scope
enum Color { RED, GREEN, BLUE }; 

// Parameter Scope
int param(int x) {
    int y = x + 10;
    if (x == 30) {
        y += x;
    }
    return y;
}

int main(){
    localscope(); // 10
    cout << "Global variable: " << globalvar << endl; // 20
    cout << "Namespace variable: " << namesp::namespacevar << endl; // 30
    MyClass obj;
    cout << "Class variable: " << obj.getClassvar() << endl; // 40
    cout << "Enum RED: " << RED << endl; // 0
    int x = namesp::namespacevar; // 30

    int y = param(globalvar);
    cout << "Parameter variable: " << y << endl;

    y = param(x);
    cout << "Parameter variable: " << y << endl;
}

// 10.3.cpp
// Structures
#include <iostream>
using namespace std;

struct Employee {
    int id;
    string name;
    double salary;

    void display() {
        cout << "ID: " << id << ", Name: " << name << ", Salary: " << salary << endl;
    }
};

int main() {
    Employee e1;
    e1.id = 101;
    e1.name = "John Doe";
    e1.salary = 50000.0;
    e1.display();
}
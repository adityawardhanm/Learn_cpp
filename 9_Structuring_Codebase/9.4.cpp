// 9.4.cpp
// Namespaces
# include <iostream>

using namespace std;

namespace animals {
    string dog1 = "Fluffy";
    string dog2 = "Tommy";

    namespace rabid {
        string dog1 = "Rex";
        string dog2 = "Fido";
    }
}

namespace bird {
    string bird1 = "Tweety";
    string bird2 = "Polly";
}

int main() {
    cout << "Dog 1: " << animals::dog1 << endl;
    cout << "Dog 2: " << animals::dog2 << endl; 
    cout << "Rabid Dog 1: " << animals::rabid::dog1 << endl; 
    cout << "Rabid Dog 2: " << animals::rabid::dog2 << endl; 
    using namespace bird;
    cout << "Bird 1: " << bird1 << endl;
    cout << "Bird 2: " << bird2 << endl;
    return 0;
}
#include <iostream>
using namespace std;

class MyClass {
public:
    // Constructor
    MyClass() {
        cout << "Constructor called" << endl;
    }

    // Destructor
    ~MyClass() {
        cout << "Destructor called" << endl;
    }
};

int main() {
    cout << "Creating object..." << endl;
    MyClass obj; // Creating an object of MyClass
    
    cout << "Object in scope..." << endl;
    // Object is in scope here
    
    cout << "Exiting scope..." << endl;
    // Object goes out of scope here and the destructor is called automatically
    
    return 0;
}

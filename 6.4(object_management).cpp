#include <iostream>
using namespace std;

// Base class with virtual destructor
class Base {
public:
    Base() {
        cout << "Base constructor called." << endl;
    }

    // Virtual destructor to ensure proper cleanup in derived class
    virtual ~Base() {
        cout << "Base destructor called." << endl;
    }
};

// Derived class with dynamic resource allocation
class Derived : public Base {
private:
    int* data;
public:
    Derived() {
        data = new int[100];  // Simulate dynamic allocation
        cout << "Derived constructor called. Resource allocated." << endl;
    }

    ~Derived() {
        delete[] data;  // Free the resource
        cout << "Derived destructor called. Resource deallocated." << endl;
    }
};

int main() {
    Base* obj = new Derived();  // Base pointer to derived object

    delete obj;  // Proper cleanup due to virtual destructor
    cout<<"24CE140";
    return 0;
}

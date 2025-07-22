#include<iostream>
using namespace std;

class Parent {
public:
    virtual void print(int x = 10) {
        cout << "Parent: " << x << "\n";
    }
};

class Child : public Parent {
public:
    void print(int x = 20) override {
        cout << "Child: " << x << "\n";
    }
};

int main() {
    Parent *p = new Child();
    p->print();  

}

// OUTPUT: Chile: 10


// Which print() function to call --->	Runtime (virtual) and actual object type
// Which default value to use (x=10 or x=20) --->	Compile time and static type


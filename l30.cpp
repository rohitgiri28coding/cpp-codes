#include<iostream>
using namespace std;

class Base{
    public:
        Base(){
            cout << "Parent class constructor is called\n";
        }
        ~Base(){
            cout << "Parent class destructor is called\n";
        }
};

class Derived: Base{
    public:
        Derived(){
           cout << "Child class constructor is called\n";
        }
        ~Derived(){
            cout << "Child class destructor is called\n";
        }
};

int main(){
    Derived d;
}
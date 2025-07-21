#include<iostream>
using namespace std;

class Base{
    public:
       
        void exampleFunc (){
            printf("\nParent class exampleFunc function\n\n");
        }
};

class Derived: public Base{
    public:
        
        void exampleFunc(){
            printf("\nChild class exampleFunc function\n\n");
        }
};

int main(){
    Derived d;
    d.exampleFunc();    // Child class exampleFunc function

    Base b;
    b.exampleFunc();    //Parent class exampleFunc function

    Base* b1 = new Derived();
    b1->exampleFunc();   //Parent class exampleFunc function
    //Parent class exampleFunc waas called because the virtual keyword was missing while defining he function in the base class.

}
// Implement a class Box with length, breadth, height.
// Add a copy constructor that copies dimensions.
// Add a method volume().

#include<iostream>
using namespace std;

class Box{
    public: 
        double length;
        double breadth;
        double height;

        Box(){
            cout << "Default constructor called" << endl;
            length = 0.0;
            breadth = 0.0;
            height = 0.0;
        }
        Box(double length, double breadth, double height){
            cout << "Parameterized constructor called" << endl;
            this->length = length;
            this->breadth = breadth;
            this->height = height;
        }
        Box(Box &b){
            cout << "Copy constructor called." << endl;
            this->length = b.length;
            this->breadth = b.breadth;
            this->height = b.height;
        }

        double volume(){
            return length*breadth*height;
        }
        void showVolume(){
            cout << "Volume = " << volume() << endl;
        }
};

int main(){
    Box b1, b2(10.0,20,30), b3(b2);
    b1.showVolume();
    b2.showVolume();
    b3.showVolume();
    return 0;
}
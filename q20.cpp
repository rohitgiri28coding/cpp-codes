// Create a base class Shape with a virtual function area()
// Create two derived classes:
// Circle with radius
// Rectangle with length and breadth

#include<iostream>
using namespace std;

class Shape{            // abstract class as it contains a pure virtual function

    public:
        virtual double area() = 0;     // pure virtual function
};

class Circle: public Shape{

    public: 
        double radius;

        Circle(){
            cout << "Default Circle Constructor called" << endl;
            radius=0.0;
        }
        Circle(double radius){
            this -> radius = radius;
        }
        double area() override{
            return 3.14159265 * radius * radius;
        }
};



class Rectangle: public Shape{
    public:
        double length, breadth;

        Rectangle(){
            cout << "Default Rectangle Constructor called" << endl;
            length =0.0;
            breadth=0.0;
        }
        Rectangle(double length, double breadth){
            this -> length = length;
            this -> breadth = breadth;
        }
        double area() override{
            return length * breadth;
        }
};

int main(){
    Shape *sobj1 = new Circle(), *sobj2 = new Circle(7);

    Shape *sobj3 = new Rectangle(), *sobj4 = new Rectangle(10, 4);

    cout << "Area of default circle: " << sobj1 -> area() << endl;
    cout << "Area of circle(7): " << sobj2 -> area() << endl;
    cout << "Area of default rectangle: " << sobj3 -> area() << endl;
    cout << "Area of Rectangle(10, 4): " << sobj4 -> area() << endl;

    return 0;
}
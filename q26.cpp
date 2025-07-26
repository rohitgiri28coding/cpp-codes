// Write a class Rectangle with:
// length and width as private data members.
// Constructor to initialize them.
// Functions: area() and perimeter().

#include<iostream>
using namespace std;

class Rectangle{
    private: 
        double length;
        double breadth;

    public: 
        Rectangle(){
            cout << "Default constructor called." << endl;
            length = 0;
            breadth = 0;
        }
        Rectangle(double length, double breadth): length(length), breadth(breadth) {}

        double area(){
            return length*breadth;
        }
        double perimeter(){
            return 2*(length+breadth);
        }

        void showAreaAndPerimeter(){
            cout << "Area: " << area() << endl;
            cout << "Perimeter: " << perimeter() << endl;
        }
};

int main(){

    Rectangle r, r1(10.2, 20);

    r1.showAreaAndPerimeter();

    return 0;
}
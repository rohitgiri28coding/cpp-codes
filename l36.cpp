#include<iostream>
using namespace std;

class Shape{
    public:
        int length;
        int breadth;

        virtual void draw() = 0;

        virtual double area() = 0;

        virtual double perimeter() = 0;
        virtual ~Shape() {}  // Virtual destructor
};

class Rectangle: public Shape{
    public:
        Rectangle(double l, double b){
            length = l;
            breadth = b;
        }
        void draw() override{
            cout << "Drawing Rectangle\n";
        }
        double area() override{
            return length*breadth;
        }
        double perimeter() override{
            return 2*(length+breadth);
        }
};

class Square: public Rectangle{
    public:
        Square(double a): Rectangle(a,a){}
            
        void draw() override{
            cout << "Drawing Square\n";
        }
};

int main(){
    Shape* s1 = new Rectangle(10,20);
    Shape* s2 = new Square(16);

    s1->draw();               // Output: Drawing Rectangle
    cout << "\nArea: " << s1->area();
    cout << "\nPerimeter: " << s1->perimeter() << "\n\n";

    s2->draw();               // Output: Drawing Square
    cout << "\nArea: " << s2->area();
    cout << "\nPerimeter: " << s2->perimeter() << "\n";

    delete s1;
    delete s2; 

    return 0;
}
// Class with default and parameterized constructor
// Create a class Student with:
// Data members: name, rollNo, marks.
// One default constructor and one parameterized constructor.
// A function displayDetails() to print student info.

#include<iostream>
using namespace std;

class Student{
    public:
        string name;
        int rollNo;
        float marks;

        Student(): name("Anonymous student"), rollNo(0), marks(0.0){
            cout << "Default constructor" << endl;
        }
        Student(string name, int rollNo, float marks): name(name), rollNo(rollNo), marks(marks) {
            cout << "Parameterized constructor" << endl;
        }
        Student (const Student &s) : name(s.name), rollNo(s.rollNo), marks(s.marks) {}

        void displayDetails(){
            cout << "Name: " << name << endl;
            cout << "Roll No:" << rollNo << endl;
            cout << "Marks: " << marks << endl;
        }

};
int main(){

    Student s1, s2("Rohit", 19, 100.0), s3(s2);

    s1.displayDetails();
    s2.displayDetails();
    s3.displayDetails();

    return 0;

}
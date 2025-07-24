// Use a friend function to access and compare private marks of two Student objects.

#include<iostream>
using namespace std;

class Student{
    private: // redundant(default private)
        string name; 
        int roll;
        double marks;

    public:
        Student(){
            cout << "Default Student constructor" << endl;
            name = "Anonymous student";
            roll = 0;
            marks = 0.0;
        }

        Student(string name, int roll, double marks){
            this -> name = name;
            this -> roll = roll;
            this -> marks = marks;
        }

        void display(){
            cout << "Name: " << name << endl;
            cout << "Roll: " << roll << endl;
            cout << "Marks: " << marks << endl;
        }

        friend void compareMarks(Student s, Student s1);
};

void compareMarks(Student s, Student s1){
    if (s.marks > s1.marks){
        cout << s.name << " got more marks than " << s1.name;
    }else if (s.marks < s1.marks){
        cout << s1.name << " got more marks than " << s.name;
    }else{
        cout << "Both got equal marks.";
    }
}

int main(){

    Student s1("Rohit" , 19, 100.0), s2("Rohan", 21, 54.54);
    compareMarks(s1, s2);
    return 0;
}
// Create a class Student with:
// name, rollNo, and marks (private)
// a constructor and a display() method
// Create a derived class GraduateStudent with:
// thesisTitle as an additional field
// override the display() method to include thesis title

#include<iostream>
using namespace std;

class Student 
{
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
        virtual void display(){
            cout << "Name: " << name << endl;
            cout << "Roll: " << roll << endl;
            cout << "Marks: " << marks << endl;
        }
    protected:
        void setStudentName(string name){
            this -> name = name;
        }
        void setStudentRoll(int roll){
            this -> roll = roll;
        }
        void setStudentMarks(double marks){
            this -> marks = marks;
        }
        string getStudentName(){
            return name;
        }
        int getStudentRoll(){
            return roll;
        }
        double getStudentMarks(){
            return marks;
        }
};

class GraduateStudent: public Student{

    string thesisTitle;

    public:

        GraduateStudent(){
            cout << "Default Graduate Student constructor" << endl;
            setStudentName("Anonymous Graduate Student");
            thesisTitle = "NAN";
        }
        GraduateStudent(string name, int roll, double marks, string thesisTitle){
            setStudentName(name);
            setStudentMarks(marks);
            setStudentRoll(roll);
            this -> thesisTitle = thesisTitle;
        }
        void display() override{
            Student::display();
            cout << "Thesis Title: " << thesisTitle << endl;

        }
};

int main(){
    Student s, s1("Rohit", 19, 100.0), s2(s1);
    cout << "Initialized by default (non - parameterized) constructor." << endl;
    s.display();
    cout << "Initialized by parameterized constructor." << endl;
    s1.display();
    cout << "Initialized by copy constructor." << endl;
    s2.display();

    Student *sobj = new GraduateStudent();
    sobj->display();

    return 0;
}
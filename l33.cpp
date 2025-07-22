#include<iostream>
using namespace std;

struct Student
{
    string name;
    string dept;
    int roll;
    int age;

    void talk(){
        cout << "Student named " << name <<" will be talking now.\n";
    }
}s1;

union Teacher
{
    
    int roll;
    int age;

    void talk(){
        cout << "Teacher with roll " << roll <<" will be talking now.\n";
    }
};

int main(){
    Student s2;

    s2.age = 10;
    s2.name ="Rohan";
    s2.dept="BCA";
    s2.roll=12;


    cout << s2.age << endl;
    cout << s2.name << endl;
    cout << s2.dept << endl;
    cout << s2.roll << endl;
    cout << s1.name << endl;

    Teacher t1;

    t1.roll =56;
    t1.age = 44;   // overwrites roll's memory

    cout << t1.roll << endl;
    
}
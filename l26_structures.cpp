#include<iostream>

struct students
{
    int roll;
    std::string name;
}s1, s2;

void printStudent(students s);

int main(){
    s1.name = "rohit";
    s1.roll =19;
    s2.name="ROhan";
    s2.roll =20;

    printStudent(s1);  // struct passed to a function is pass by value if we want to pass by reference add & sign

}

void printStudent(students s){
    std::cout << s.name << '\n';
    std::cout << s.roll << '\n';
}
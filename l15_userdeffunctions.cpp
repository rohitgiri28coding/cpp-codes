#include<iostream>
using std::string;

void greet(string name){
    std::cout << "Good Morning " << name;
}

int main(){
    // user defined functions are same as that of functions in C

    greet("Rohit");

    return 0;

}
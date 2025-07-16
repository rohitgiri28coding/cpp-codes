#include<iostream>

int x = 20;

int main(){
    int x = 10;
    std::cout << x << '\n';
    std::cout << ::x << '\n'; //Scope resolution operator

    return 0;
}
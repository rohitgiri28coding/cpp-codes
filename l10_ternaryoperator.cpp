#include<iostream>
using std::cout;

int main(){

    int grade = 84;

    grade >=33 ? cout << "You passed!" : cout << "You Failed!";

    bool hungry = true;

    cout << (hungry ? "\nYou are hungry." : "\nYou are full.");

    return 0;
}
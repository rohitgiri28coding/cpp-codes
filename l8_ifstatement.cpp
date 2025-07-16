#include<iostream>

int main(){
    using std::cout;
    using std::cin;

    int age;

    cout << "Enter your age: ";
    cin >> age;

    if (age >= 18){
        cout << "You are an adult";
    }else if (age >= 13)
    {
        cout << "You are a teen";
    }else if (age < 0)
    {
        cout << "You have not been born yet!";
    }
    
    else{
        cout << "You are a child";
    }
    return 0;
}
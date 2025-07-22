// reversing a number

#include<iostream>
using namespace std;

int reverseNumber(int num);

int main(){

    int num;

    cout << "*****Number Reverser*******\n";

    cout << "Enter a number: ";
    cin >> num;

    if(num<0){
        cout << "Taking absolute value of number.\n";
        num *= (-1);
    }
    cout << "Reversed number = " << reverseNumber(num);
    return 0;
}

int reverseNumber(int num){
    int rev=0;
    while(num!=0){
        rev = rev*10 + (num%10);
        num /= 10;
    }
    return rev;
}

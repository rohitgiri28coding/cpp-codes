// Sum of Digits

#include<iostream>
using namespace std;


void sumOfDigits(int num, int *sum);

int main(){
    int num, sum=0;

    cout << "*****SUM OF DIGITS*******\n";

    cout << "Enter a number: ";
    cin >> num;
    sumOfDigits(num, &sum);

    cout << "Sum of digits = " << sum;
    
}

void sumOfDigits(int num, int *sum){
    if(num<0){
        num *= (-1);
    }
    while (num!=0)
    {
        *sum += (num%10);
        num /= 10;
    }

    
}

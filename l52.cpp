// Binary to decimal conversion

#include<iostream>
#include<cmath>
using namespace std;

int main(){
    long binaryNum;
    cout << "Enter a binary number: ";
    cin >> binaryNum;
    

    int temp = binaryNum;
    int decimalNum = 0;

    for (int i = 0; temp != 0; i++)
    {
        decimalNum += ((temp%10)*(pow(2, i)));
        temp /= 10;
    }

    cout << "Decimal number = " << decimalNum << endl; 
    
    return 0;
}

// Decimal to binary number

#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;
    

    int temp = n;
    long binaryNum = 0;

   for (int i = 0; temp>0; i++)
    {
        binaryNum += ((temp % 2)*(pow(10, i)));
        temp /= 2;
    }
    
    cout << binaryNum << endl;

}
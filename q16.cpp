// Swap two numbers using pointers.

#include<iostream>
using namespace std;

void swapNumbers(int *ptr1, int *ptr2);

int main(){
    int num1, num2;
    cout << "Enter a number: ";
    cin >> num1;
    cout << "Enter a number: ";
    cin >> num2;

    cout << "Before swapping: " << num1<< ", " << num2 << endl;

    swapNumbers(&num1, &num2);

    cout << "After swapping: " << num1 << ", " << num2;

    return 0;
}

void swapNumbers(int *ptr1, int *ptr2)
{
    int temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}
// Sum of Even and Odd Elements in Array

#include<iostream>
using namespace std;

void sumEvenOdd(int arr[], int size);

int main(){
    int n;
    
    while (1)
    {
        cout << "Enter size of array: ";
        cin >> n;

        if (n > 0) break;

        cout << "Try entering a natural number." << endl;
    }

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cout << "Enter element #" << (i+1) << ": ";
        cin >> arr[i];
    }

    sumEvenOdd(arr, n);

    return 0;
}

void sumEvenOdd(int arr[], int size){
    int oddSum=0, evenSum=0;
    for (int i = 0; i < size; i++)
    {
        if(arr[i]%2==0){
            evenSum+=arr[i];
        }else{
            oddSum+=arr[i];
        }
    }
    cout << "Sum of even numbers = " << evenSum << endl;
    cout << "Sum of odd numbers = " << oddSum << endl;

}
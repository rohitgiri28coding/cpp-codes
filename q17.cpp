// Find the sum of elements in an array using pointer arithmetic.

#include<iostream>
using namespace std;

int sumArray(int *ptr, int size);

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

    cout << sumArray(arr, n);
    return 0;
}

int sumArray(int *ptr, int size){
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum+=*(ptr+i);
    }
    return sum;
}

// Find Max and Min in an Array

#include<iostream>
using namespace std;

int maxElement(int arr[], int size);
int minElement(int arr[], int size);


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

    cout << "Maximum element = " << maxElement(arr, n) << endl;
    cout << "Minimum element = " << minElement(arr, n);

    return 0;
}

int maxElement(int arr[], int size){
    int max = arr[0];
    for (int i = 1; i < size; i++)
    {
        if (max<arr[i]){
            max = arr[i];
        }
    }
    return max;
}

int minElement(int arr[], int size){
    int min = arr[0];
    for (int i = 1; i < size; i++)
    {
        if (min>arr[i]){
            min = arr[i];
        }
    }
    return min;
}

// Input an array and a target value; output index if found, else -1.

#include<iostream>
using namespace std;

void linearSearch(int arr[], int size, int targetValue){
    for (int i = 0; i < size; i++)
    {
        if(arr[i] == targetValue){
            cout << "Element FOUND!" << endl;
            cout << "Index: " << i;
            return;
        }
    }
    cout << "Element Not Found!" << endl;
    cout << "Index: -1";
}

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
    int targetValue;

    cout << "Enter the value you want to search: ";
    cin >> targetValue;

    linearSearch(arr, n, targetValue);

    return 0;
}
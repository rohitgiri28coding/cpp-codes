// Sort an array using bubble sort.

#include<iostream>
using namespace std;

void bubbleSort(int arr[], int size);
    
void showArray(int arr[], int size);

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
    bubbleSort(arr, n);
    showArray(arr, n);
    return 0;
}

void bubbleSort(int arr[], int size){
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size-1; j++)
        {
            if(arr[j]>(arr[j+1])){
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void showArray(int arr[], int size){
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    
}
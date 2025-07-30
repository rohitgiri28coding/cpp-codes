// waf to print intersection of 2 arrays

#include<iostream>
using namespace std;

void printIntersection(int arr1[], int arr2[], int size1, int size2);

void printOnce(int arr[], int size);


int main(){
    int arr[] = {1,2,3,4,5,6,5, 7,8}, arr3[] = {1,2,3,4,5,5,6,44,55,66};
    int size1 = sizeof(arr)/sizeof(int), size2 = sizeof(arr3)/sizeof(int);

    printIntersection(arr, arr3, size1, size2);

    return 0;
}

void printIntersection(int arr1[], int arr2[], int size1, int size2){
    if(size1>size2){
        int arr[size2], k = 0;
        for (int i = 0; i < size1; i++)
        {
            for(int j = 0; j< size2; j++){
                if(arr1[i] == arr2[j]){
                    arr[k] = arr1[i];
                    k++;
                    break;
                }
            }
        }
        printOnce(arr, k);
        
    }else{
        int arr[size1], k = 0;
        for (int i = 0; i < size2; i++)
        {
            for(int j = 0; j< size1; j++){
                if(arr2[i] == arr1[j]){
                    arr[k] = arr2[i];
                    k++;
                    break;
                }
            }
        }
        printOnce(arr, k);
        
    }

}

void printOnce(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = i+1; j < size; j++)
        {
            if(arr[i] == arr[j]){
                for(int k = j;k<size-1; k++){
                    arr[k] = arr[k+1];
                }
                size--;
            }
        }
        cout << arr[i] << " ";
    }
    
}

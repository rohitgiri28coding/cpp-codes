// waf to print all the unique value in an array

#include<iostream>
using namespace std;

void printUnique(int arr[], int size);

int main(){

    int arr[] = {1,2,33,3,4,4,5,5};

    int temp[8];

    copy(arr, arr + 8, temp);

    printUnique(temp, 8);

    return 0;

}

void printUnique(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        int flag = 0;
        for (int j = i+1; j < size; j++)
        {
            if(arr[i] == arr[j]){
                flag++;
                for(int k = j;k<size-1; k++){
                    arr[k] = arr[k+1];
                }
                size--;
            }
        }
        if(flag == 0){
            cout << arr[i] << " ";
        }
    }
    
}
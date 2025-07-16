#include<iostream>

void printArray(int arr1[]);

int main(){

    // Arrays are same as C;
    // one thing extra is foreach loop comes into play in c++
    // Also we can simply pass an array to a function like we do in java


    int arr[] = {1,23,4,234,54};

    for(int i = 0; i<(sizeof(arr)/sizeof(arr[0]));i++){
        std::cout << arr[i] << '\n';
    }

    for (int x: arr)
    {
        std::cout << x <<'\n';
    }

    printArray(arr);
    return 0;
}

void printArray(int arr1[]){


    // cannot use foreach loop
    // for (int x: arr1)
    // {
    //     std::cout << x <<'\n';
    // }

    for(int i = 0; i<(sizeof(arr1)/sizeof(arr1[0]));i++){
        std::cout << arr1[i] << '\n';
    }

}
#include<iostream>


int main(){

    const int SIZE = 99;

    std::string arr[SIZE];   // uninitialized string array contains "" but primitive data types take garbage valye like in c

    fill(arr, (arr + SIZE/3), "pizza");
    fill((arr+SIZE/3), (arr+SIZE/3*2), "chilka");
    fill((arr+SIZE/3*2), (arr+SIZE), "kheer");
    for(int i = 0; i<(sizeof(arr)/sizeof(arr[0]));i++){
        std::cout << arr[i] << '\n';
    }

    return 0;
}

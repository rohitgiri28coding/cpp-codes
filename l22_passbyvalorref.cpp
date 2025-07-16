#include<iostream>

void swap(int &x, int &y){
    int temp = x;
    x = y;
    y = temp;
}

int main(){

    int x =10, y = 20;


    std::cout << "Before Swap: " << x << " & " << y << '\n';


    swap(x, y);

    std::cout << "After Swap: " << x << " & " << y << '\n';

    return 0;
}

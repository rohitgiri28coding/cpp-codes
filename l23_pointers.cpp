#include<iostream>


int main(){

    int x =10;

    int *px=nullptr;

    px = &x;

    if(px == nullptr){
        std::cout << "Address was not assigned." << '\n';
        return 1;
    }

    std::cout << *px << '\n';
    std::cout << px << '\n';

    return 0;
}

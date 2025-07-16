#include<iostream>

double area(double l, double b){
    return l * b;
}

int main(){
    
    double l, b;

    std::cout << "Enter length: ";
    std::cin >> l;

    std::cout << "Enter breadth: ";
    std::cin >> b;

    std::cout << "Area: " << area(l, b);
    return 0;
}
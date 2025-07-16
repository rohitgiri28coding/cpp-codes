#include<iostream>
#include<cmath>

int main(){
    double p, b, h;
    std::cout << "Enter side (perpendicular): ";
    std::cin >> p;

    std::cout << "Enter side (base): ";
    std::cin >> b;

    h = sqrt((pow(p, 2)+pow(b, 2)));

    std::cout << "Hypotenuse = " << h;

    return 0;
}
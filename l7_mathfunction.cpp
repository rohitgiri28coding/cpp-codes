#include<iostream>
#include<cmath>

int main(){
    double x = 3, y =8;
    double z;

    // z = std::max(x, y);
    // z = std::min(x,y);
    // z = pow(2, 4);
    // z = sqrt(9);
    // z = abs(-3);
    // z = round(x/y);
    // z = ceil(x/y);
    z = floor(x/y);

    std::cout << z;

    return 0;
}
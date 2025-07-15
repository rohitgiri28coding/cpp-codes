#include<iostream>

int main(){
    int x = 10;
    double y = 20.2;

    const int PI = 3.14;

    long n = 33;
    float s = 30.4;
    char ch = 'a';
    bool m = -6;

    std::cout << x << " is an integer variable." << '\n';
    std::cout << n << " is a long variable." << '\n';
    std::cout << s << " is a float variable." << '\n';
    std::cout << y << " is a double variable." << '\n';
    std::cout << ch << " is a character variable." << '\n';
    std::cout << m << " is a boolean variable." << '\n';  // o/p: 1 --> true 0 --> false

    return 0;
}
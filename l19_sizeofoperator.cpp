#include<iostream>

int main(){

    std::cout << sizeof(std::string) << " bytes." << '\n';   //Size of string is 24 or 32 bytes

    std::cout << sizeof(int) << " bytes." << '\n';  // 4
    std::cout << sizeof(float) << " bytes." << '\n'; // 4
    std::cout << sizeof(long) << " bytes." << '\n';  // 8
    std::cout << sizeof(double) << " bytes." << '\n'; // 8
    std::cout << sizeof(char) << " bytes." << '\n'; // 1
    std::cout << sizeof(bool) << " bytes." << '\n'; // 1
    return 0;
}
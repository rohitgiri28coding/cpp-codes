// cin >> (extraction operator)
// cout << (insertion operator)

#include<iostream>

int main(){

    std::string name;

    std::cout << "What's your name? ";
    std::cin >> name;

    std::cout << "Hello, " << name << ", how are you doing\n";

    std::string fullName;
    std::cout << "What's your full name? ";
    std::getline(std::cin >> std::ws, fullName);

    std::cout << "Hello, " << fullName;

    return 0;
}
#include<iostream>

int main(){
    std::string s;

    std::cout << "Enter your full name: ";
    std::getline(std::cin, s);

    int len = s.length();

    std::cout << "Length: " << len;

    std::cout << "\nIs Empty: " << s.empty();

    s.append("gmail.com");

    std::cout << "\nNew appended String: " << s;

    std::cout << "\nCharacter at 0th index: " << s.at(0);

    s.insert(len, "@");

    std::cout << "\nNew String with @ inserted after name: " << s;

    std::cout << '\n' << s.find('@');

    s.erase(len, len+5);

    std::cout << "\nNew erased String: " << s;

    s.clear();

    return 0;
}
// typedef = reserved keyword used to create an additional name (alias) for another data type.
// new identifier for existing type.
// helps with readability and reduces types.
// Replaced with 'using' keyword

#include<iostream>
#include<vector>

typedef std::vector<std::pair<std::string, int>> pairlist_t;
typedef std::string str;

using String = std::string;

int main(){

    str s;
    pairlist_t pl;

    String s1 = "Rohit";
    
    std::cout << s1;

    return 0;
}

// Namespaces provide a way to organize code and prevent naming conflicts.
// Namespaces can contain functions, along with other elements like classes and variables.

#include<iostream>

namespace first {
    int x = 1;
}
namespace second {
    int x = 2;
}
int main(){
    
    // using namespace std;
    // or
    // using std::cout;
    // using std::string;
    // it is more safe than above.

    int x = 10;
    std::cout << x << '\n';
    std::cout << first::x << '\n';
    std::cout << second::x << '\n';
    return 0;
}
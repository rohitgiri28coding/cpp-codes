#include <iostream>
using namespace std;
struct demo
{
    int var;
};

int main()
{
    demo str;
    demo *ptr;
    str.var = 100;
    ptr = &str;
    cout<<ptr-> var;
    return 0;
}

// OUTPUT: 100
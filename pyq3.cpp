// 2023 q26

#include <iostream>
using namespace std;
template <class C1, class C2>
bool is_equal (C1 var1, C2 var2)
{
    return (var1 == var2);
}
int main ()
{
    if (is_equal(10,10.0))
    cout<< "Equal";
    else
    cout<< "Not equal";
    return 0;
}

// OUTPUT: 
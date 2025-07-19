// 2023 q29

#include <iostream>
using namespace std;
int main ()
{
    int c1 = 10;
    int c2 = 20;
    {
        int c1;
        c1 = 50;
        c2 = 50;
        cout<< "c1= " << c1 << ", c2= "<< c2;
    }

    cout<< "; c1= " << c1 << ", c2= "<< c2;

    return 0;
}

// OUTPUT: c1= 50, c2= 50; c1= 10, c2= 50 
// 2023 q30

#include <iostream>
using namespace std;

class Demo {
    public:
    static int count;
    Demo () { 
        count++; 
    }
};

int Demo::count = 0;

int main ()
{
    Demo var1;
    Demo var2[5];
    cout << var1.count;
    return 0;
}

// OUTPUT: 
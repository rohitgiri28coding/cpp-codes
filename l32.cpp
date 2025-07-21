#include<iostream>
using namespace std;

class A{
    public:
        A(){
            cout << "constructor\n";
        }
        ~A(){
            cout << "destructor\n";
        }
};

int main(){
    if (true){
        static A obj;
    }
    cout << "End of main\n";
    return 0;
}
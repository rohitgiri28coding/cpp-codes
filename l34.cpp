#include<iostream>
using namespace std;

class Box{
    int length;
    public:
        Box(int l = 0) : length(l){}

        Box operator+(const Box &b){
            return Box(length + b.length);
        }
         void showLength() {
            cout << "Length: " << length << endl;
        }
};


int main(){
    Box b1(10), b2(20);
    Box b3 = b1+b2;
    b3.showLength(); 
}
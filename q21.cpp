// Create a class Complex to store real and imaginary parts.
// Overload:
// + to add two complex numbers
// << and >> for stream insertion/extraction

#include<iostream>
using namespace std;

class Complex{

    public: 
        int real;
        int imag;

        Complex(){
            cout << "Default Constructor called" << endl;
            real = 0;
            imag = 0;
        }

        Complex(int real, int imag){
            this -> real = real;
            this -> imag = imag;
        }

        void showComplexNumber(){
            cout << real << " + ";
            if(imag == 1) 
                cout << "i" << endl;
            else
                cout << imag << "i" << endl;
        }

        Complex operator+(Complex c){
            c.real += real;
            c.imag += imag;
            return c;
        }

        bool isPurelyImaginary(){
            if (real == 0) return true;
            return false;
        }
        bool isPurelyReal(){
            if (imag == 0) return true;
            return false;
        }
};

int main(){

    Complex c, c1(10, 3), c2(10, 1);

    c.showComplexNumber();
    c1.showComplexNumber();
    c2.showComplexNumber();

    c1 = c1+c2;
    c1.showComplexNumber();

    if (c1.isPurelyReal()){
        cout << "Imaginary part is zero, hence purely real number." << endl;
    }else if (c1.isPurelyImaginary()){
        cout << "Real part is zero, hence purely imaginary number." << endl;
    }else{
        cout << "It is a complex number." << endl;
    }
    

    return 0;
}
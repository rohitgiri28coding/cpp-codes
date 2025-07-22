// Prime number

#include<iostream>
using namespace std;

int checkPrime(int num){
    if(num<2){
        return -1;
    }
    for (int i = 2; i < num; i++)
    {
        if(num%i==0){
            return 0;
        }
    }
    return 1;
    

}

int main(){

    int num, sum=0;

    cout << "*****Prime Number Checker*******\n";

    while(1){

        cout << "Enter a number: ";
        cin >> num;

        if(num>=0) break;

        cout << "Try entering a natural number (>2)\n";
    }

    int res = checkPrime(num);

    if(res==(-1)){
        cout << "0 & 1 are neither prime nor composite numbers.";
    }else if(res){
        cout << num << " is a prime number.";
    }else{
        cout << num << " is a composite number.";
    }
    return 0;

}
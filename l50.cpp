// calculate ncr binomial coefficient of n and r

#include<iostream>
using namespace std;

long factorial(int num);
long long calculateBinomialCoefficient(int n, int r);

int main(){
    int n, r;
    while (1)
    {
        cout << "Enter n: ";
        cin >> n;

        if (n >= 0) break;
        cout << "Try entering a whole number." << endl;
        
    }
    while (1)
    {
        cout << "Enter r: ";
        cin >> r;

        if (r <= n) break;
        cout << "Try entering a number less than or equal to " << n << endl;   
    }

    cout << n << "C" << r << " = " << calculateBinomialCoefficient(n, r) << endl;
    
    return 0;
}


long factorial(int num){
    if(num < 2 ) return 1;
    return num* factorial(num-1);
}

long long calculateBinomialCoefficient(int n, int r){
    long long result = 1;
    if(r>(n-r)){
        r = n-r;
    }
    for (int i = 0; i < r; i++)
    {
        result *= (n-i);
        result /= (i+1);
    }

    return result;
}

// Fibonacci Sequence (Iterative + Recursive)

#include<iostream>
using namespace std;

void fibonacciSeries(int n);

void _fibonacciSeries(int n);


int main(){
    int n;
    cout << "*****Fibonnaci Series*******\n";

    while (1)
    {
        cout << "Enter end limit(1-): ";
        cin >> n;

        if(n>0) break;

        cout << "Try entering a natural number.\n";

    }
    
    fibonacciSeries(n);
    cout << endl;
    _fibonacciSeries(n);
    
    return 0;
}

void fibonacciSeries(int n){
    int first=0, second =1, temp;
    for (int i = 0; i < n; i++)
    {
        cout << first << " ";
        temp = second;
        second = first+second;
        first = temp;
    }
    
}

void _fibonacciSeries(int n){
    if(n==0) return;
    static int first = 0, second = 1;
    cout << first << " ";
    int temp = second;
    second = first+second;
    first = temp;

    _fibonacciSeries(n-1);
}


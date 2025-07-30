// Pattern 11: Butterfly pattern


/*

*      *
**    **
***  ***
********
***  ***
**    **
*      *

*/


#include<iostream>
using namespace std;


int main(){
    int n = 4;
    for(int i = 0; i<n; i++){
        for (int j = 0; j<=i;j++){
            cout << "*";
        }
        for(int k = i+1;k<n;k++){
            cout << " ";
        }
        for(int l = i+1; l<n; l++){
            cout << " ";
        }
        for (int m = 0; m <=i; m++)
        {
            cout << "*";
        }
        cout << endl;
        
    }

    for (int i = n-1; i > 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            cout << "*";
        }
        for(int k = i; k < n; k++){
            cout << " ";
        }
        for(int l = i; l<n; l++){
            cout << " ";
        }
        for(int m = 0; m < i; m++){
            cout << "*";
        }
        cout << endl;
        
    }
    
    return 0;
}
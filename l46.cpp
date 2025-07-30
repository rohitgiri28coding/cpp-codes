// Pattern 8

/*
   1
  212
 32123
4321234

*/

#include<iostream>
using namespace std;

int main(){
    int n = 4;
    for(int i = 1; i <=n; i++){
        for (int k = 0; k < (n-i); k++)
        {
            cout << " ";
        }
        for (int j = i; j > 0; j--)
        {
            cout << j;
        }
        for(int l = 1, temp=2; l < i; l++, temp++){
            cout << temp;
        }
        cout << endl;
        
        
    }
    return 0;

}
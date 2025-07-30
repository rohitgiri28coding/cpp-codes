// Pattern 9

/*
   1
  121
 12321
1234321
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
        for (int j = 1; j <=i; j++)
        {
            cout << j;
        }
        for(int l = i-1; l > 0; l--){
            cout << l;
        }
        cout << endl;
        
        
    }
    return 0;

}
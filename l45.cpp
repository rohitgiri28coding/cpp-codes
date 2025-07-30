// Pattern 7 

#include<iostream>
using namespace std;

int main(){
    int n = 4;
    char ch = 'A';
    for (int i = 1; i<=n;i++, ch++){
        for(int k = 1; k<i; k++){
            cout << " ";
        }
        for (int j = 0; j<=n-i;j++){
            cout << ch;
        }
        cout << endl;
    }
    return 0;

}
// Pattern 6: Inverted triangle pattern

#include<iostream>
using namespace std;

int main(){
    int n = 4;
    for (int i = 1; i<=n;i++){
        for(int k = 1; k<i; k++){
            cout << " ";
        }
        for (int j = 0; j<=n-i;j++){
            cout << i;
        }
        cout << endl;
    }
    return 0;

}
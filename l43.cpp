// Pattern 6: Floyd triangle pattern

#include<iostream>
using namespace std;

int main(){
    int n = 4;
    for (int i = 1, temp = 1; i<=n;i++){
        for (int j = 1; j<=i;j++, temp++){
            cout << temp << " ";
        }
        cout << endl;
    }
    return 0;

}
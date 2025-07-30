// Pattern 3


#include<iostream>
using namespace std;

int main(){
    
    for (int i = 0, num =1; i< 3;i++){
        for (int j = 1; j<4;j++, num++){
            cout << num;
        }
        cout << endl;
    }

    return 0;
}
#include<iostream>

int main(){
    for(int i = 0; i < 5; i++){
        for (int j = 0; j < i+1; j++)
        {
            std::cout << j << '\n';
        }
    }
    return 0;
}
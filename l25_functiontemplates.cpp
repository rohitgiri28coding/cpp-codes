#include<iostream>

template <typename T, typename U>

auto max(T x, U y){
    return (x>y) ? x : y;
}

int main(){

    std::cout << max(14,2.43) << '\n';
    std::cout << max(1,2) << '\n';
    std::cout << max(14.33,32.43) << '\n';

    return 0;

}
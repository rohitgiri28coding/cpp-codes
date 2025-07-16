/*
    type conversion - Same as c
        are of two kinds implicit and explicit type casting

*/

#include<iostream>

int main(){

    double x = (int) 10.34;

    std::cout << x << '\n';


    int marks = 8;
    int total = 10;

    std::cout << (marks/(double)total)*100;

    return 0;

}
#include<iostream>


int main(){
    int *ptr, size;

    std::cout << "Enter number of grades: ";
    std::cin >> size;

    ptr = new int[size];

    for(int i = 0; i<size; i++){
        std::cout << "Enter value for grade #" << i+1 << ": ";
        std::cin >> ptr[i];
    }

    for(int i = 0; i<size; i++){
        std::cout << ptr[i] << '\n';
    }

    // we should delete after assigning memory with new to avoid memory leaks
    // for normal data use delete and for array use delete[]

    delete[] ptr;
    return 0;
}

// Check if a String is a Palindrome
// Reverse a string without using strrev().

#include<iostream>
using namespace std;

int palindromeChecker(string str);

int main(){
    cout << "*****Palindrome*******" << endl;

    string str;
    while (1)
    {
        cout << "Enter a string: ";
        cin >> str;
        
        if (!str.empty()) break;
    }

    if(palindromeChecker(str)){
        cout << "Palindrome." ;
    }else{
        cout << "Not a Palindrome.";
    }
    
    return 0;
}

int palindromeChecker(string str){
    int size = str.length();
    string rev= str;

    for (int i = 0, j = size-1; i < size; i++, j--)
    {
        rev[i] = str[j];   
    }

    if(str == rev) return 1;

    return 0;   
}


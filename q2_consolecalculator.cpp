#include<iostream>
using std::cout;
using std::cin;

int main(){
    char op;
    cout << "Enter either(+, -, *, /): ";
    cin >> op;
    
    double num1, num2, res;
    cout << "Enter number: ";
    cin >> num1;
    cout << "Enter number: ";
    cin >> num2;

    switch(op){
        case '+':
            res = num1 + num2;
            break;
        case '-':
            res = num1 - num2;
            break;
        case '*':
            res = num1 * num2;
            break;
        case '/':
            if(num2 == 0){
                cout << "Divison by zero is not valid.";
                return 1;
            }
            res = num1 / num2;
            break;
        default:
            cout << "Not a valid choice.";
            return 0;
    }

    cout << "Result: " << res;
    return 0;
}
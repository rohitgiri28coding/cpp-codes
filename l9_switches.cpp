#include<iostream>
using std::cout;
using std::cin;

int main(){
    int n;
    cout << "Enter number(1-7): ";
    cin >> n;
    
    switch (n)
    {
    case 1:
        cout << "Monday";
        break;
    case 2:
        cout << "Tueday";
        break;
    case 3:
        cout << "Wednesday";
        break;
    case 4:
        cout << "Thursday";
        break;
    case 5:
        cout << "Friday";
        break;
    case 6:
        cout << "Saturday";
        break;
    case 7:
        cout << "Sunday";
        break;
    
    default:
        cout << "Not a valid date";
        break;
    }
    return 0;
}
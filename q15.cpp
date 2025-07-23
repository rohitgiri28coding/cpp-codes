// Count vowels and consonants in a string.

#include<iostream>
#include <string>
#include <cctype>

using namespace std;

string toLowercase(string str);

void vowelAndConsonantCount(string str);

int main(){
    cout << "*****Vowels and Consonants Count*******" << endl;

    string str;
    while (1)
    {
        cout << "Enter a string: ";
        getline(cin, str);
        if (!str.empty()) break;
    }
    vowelAndConsonantCount(str);
    return 0;

}

void vowelAndConsonantCount(string str){
    int size = str.length();

    str = toLowercase(str);

    int freq[26] = {0};
    int vowelCount = 0, consonantCount = 0;

    for (char ch : str) {
        if (isalpha(ch)){
            freq[(int(ch)%97)]++;
        }
    }
        



    for (int i = 0; i < 26; i++)
    {
        if(freq[i] > 0){
            if(i == 0 || i == 4 || i == 8|| i == 14 || i == 20){ 
                vowelCount+=freq[i];
            }else {
                consonantCount+=freq[i];
            }
        }
    }

    cout << "Vowel Count: " << vowelCount << endl;
    cout << "Consonant Count: " << consonantCount << endl;

    
}

string toLowercase(string str) {
    for (char &ch : str) {
        ch = tolower(ch);
    }
    return str;
}
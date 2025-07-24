// Create a class Author and a class Book that contains an Author object.

#include<iostream>
using namespace std;

class Author{
    public: 
        string name;
        string email;
        string gender;

        Author(){
            cout << "Default Constructor called.";
            name = "Anonymous author";
            email = "anonymous@fakemail.com";
            gender = "NAN";
        }
        Author(string name, string email, string gender){
            this -> name = name;
            this -> email = email;
            this -> gender = gender;
        }
};

class Book{

    public:
        string authorName;
        string authorEmail;
        string authorGender;
        string title;
        double price;

        Book(){
            cout << "Default Constructor called.";
            authorName = "Anonymous author";
            authorEmail = "anonymous@fakemail.com";
            authorGender = "NAN";
            title = "Anonymous book";
            price = 0.0;
        }
        Book(Author a, string title, double price){
            authorName = a.name;
            authorEmail = a.email;
            authorGender = a.gender;
            this -> title = title;
            this -> price = price;
        }

        void showBookDetails(){
            cout << "Book name: " << title << endl;
            cout << "Just for Rs " << price << endl;
            cout << "Author Name: " << authorName << endl;
            cout << "Author Email: " << authorEmail << endl;
            cout << "Author Gender: " << authorGender << endl;
        }


};

int main(){
    Author a("Shikha Giri", "shikhagiri@email.com", "Female");
    Book b (a, "Kahawat", 1000000.0);
    b.showBookDetails();
    return 0;
}
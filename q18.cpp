// Create a class Book with title, author, and price. Use a constructor and display details.
// Add a method applyDiscount(double percent) to Book.
// Use a class with private data members and public setters/getters.
// Constructor overloading with default and parameterized constructors.
// Count number of objects created using a static variable.

#include<iostream>
using namespace std;

class Book
{
    double profitMargin = 20.0;

    public:
        static int count;
        string title;
        string author;
        double price;

        Book(){
            cout << "Default constructor called";
            title = "NO BOOK AVAIABLE";
            author = "NAN";
            price = 0.0;
            count++;
        }

        Book(string title, string author, double price){
            this->author = author;
            this->price = price;
            this->title = title;
            count++;
        }

        void showDetails(){
            cout << title << " by " << author << " for just Rs " << price << endl;
        }
        void showProfitMargin(){
            cout << profitMargin << endl;
        }
        void setProfitMargin(double newMargin){
            if (newMargin < 5){
                cout << "TOO LOW! \nMargin not updated!" << endl;
            }else{
                profitMargin=newMargin;
                cout << "Margin updated successfully!" << endl;
            }
        }
        void applyDiscount(double percent){
            double amount = ((100-percent)/100) *  price;
            cout << "Amount to be paid = " << amount << endl;
        }
          static int getBookCount() {
            return count;
        }

};

int Book::count = 0;


int main(){
    Book b("Simon Report", "Simon", 12.43);

    b.showDetails();
    b.applyDiscount(20);
    b.showProfitMargin();
    b.setProfitMargin(2);
    b.showProfitMargin();
    b.setProfitMargin(23);
    b.showProfitMargin();

    cout << b.getBookCount();
    return 0;
}

// Create a class Car that has an object of Engine as a member.
// Engine has attributes: horsepower and fuelType.
// Car has attributes: brand, price.

#include<iostream>
using namespace std;

class Engine{
    public:
        int horsepower;
        string fuelType;

        Engine(){
            cout << "Default constructor called." << endl;
            horsepower = 0;
            fuelType = "Nan";
        }
        Engine(int horsepower, string fuelType){
            this->horsepower =horsepower;
            this->fuelType = fuelType;
        }
};

class Car{
    public:
        string brand;
        double price;
        Engine e;

        Car(){
            cout << "Default constructor called." << endl;
            brand= "Nan";
            price=0;
        }
        Car(const Engine &eng, string brand, double price): e(eng), brand(brand), price(price) {}

        void showCarDetails(){
            cout << "Car Band: " << brand << endl;
            cout << "Car Price: " << price << endl;
            cout << "Horsepower: " << e.horsepower << endl;
            cout << "Fueltype: " << e.fuelType << endl;

        }

};

int main(){

    Engine e(756, "Petrol");
    Car c(e, "Volvo", 100000);
    c.showCarDetails();
    return 0;

}
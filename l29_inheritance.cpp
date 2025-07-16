#include<iostream>

class Animal{
   
    public:
        int age;
        
    void talk(){
        std::cout << "\nAnimal talking.";
    }
    void eat(){
        std::cout << "\nAnimal eating.";
    }
};

class Dog: public Animal{
    public:

    void eat(){
        std::cout << "\nDog eating.";

    }
};

int main(){
    Dog d1;

    d1.age =12;
    d1.eat();
    d1.talk();


   
    return 0;
}

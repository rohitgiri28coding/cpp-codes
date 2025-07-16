#include<iostream>

class Animal{
    public:
        int age;
        std::string name;
        std::string breed;
    Animal(){
        std::cout << "Default constructor called.";
    }   
    Animal(int age, std::string name, std::string breed){
        this->age = age;
        this->breed = breed;
        this->name = name;
    } 
    void talk(){
        std::cout << "\nAnimal talking.";
    }
    void eat(){
        std::cout << "\nAnimal eating.";
    }
};

int main(){
    Animal a1;
    Animal a2(12, "Pirranah", "Fish");
    a1.talk();
    a2.eat();
    a1.age = 20;

    return 0;
}

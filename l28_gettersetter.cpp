#include<iostream>

class Animal{
    private: 
        std::string sex;

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

    std::string getSex(){
        return sex;
    }
    void setSex(std::string sex){
        this->sex = sex;
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
    a1.setSex("M");
    std::cout << '\n' << a1.getSex();
    return 0;
}

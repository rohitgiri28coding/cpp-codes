#include<iostream>

void bakePizza();
void bakePizza(int quantity);

int main(){
    bakePizza();
    bakePizza(4);
    return 0;
}

void bakePizza(){
    std::cout << "Baking pizzas";
}

void bakePizza(int quantity){
    std::cout << "\nBaking " << quantity << " pizzas";
}
#include<iostream>

class Distance{

    int meters;

    public:
        Distance(){
            meters=0;
        }
        void showDistance(){
            std::cout << meters << "\n";
        }
    friend void updateDistance(Distance &d);
};

void updateDistance(Distance &d){
    d.meters = d.meters+5;
}

int main(){

    Distance d;
    d.showDistance();
    updateDistance(d);
    d.showDistance();
}
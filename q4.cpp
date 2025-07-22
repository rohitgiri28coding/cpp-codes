// Factorial (using recursion & pointer)

#include<iostream>

long factorial(int num){
    if(num<2) return 1;
    return num*factorial(num-1);
}

void _factorial(int num, long *fact){

    for (int i=num; i>1; i--){
        *fact *= i;
    }
    
}

int main(){
    int num;

    printf("******Factorial*******\n");
    while(1){
        printf("Enter a number: ");
        scanf("%d", &num);
        if(num>=0) break;
        printf("Factorials are only define for whole numbers.\n");
    }

    printf("%d! = %ld", num, factorial(num));

    long fact = 1;

    _factorial(num, &fact);

    printf("%d! = %ld", num, fact);

    

}
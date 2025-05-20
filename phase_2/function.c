#include <stdio.h>

void greed(){
    printf("Hello my dear user\n");
}

int add(){
    int a = 23 , b=56;
    return a+b;
}

int mult(int a , int b){
    return a*b;
}

//recursive function
int factorial(int num){
    if(num==0) return 1;
    return num*factorial(num-1);
}

int main(){
    // call a function
    greed();
    int result_add = add();
    printf("%d\n",result_add);

    int result_mult = mult(23,12);
    printf("%d\n",result_mult);

    int result_fac = factorial(5);
    printf("%d\n",result_fac);

    return 0;
}
#include <stdio.h>
int main(){
    // positive , negative and zero
    float num = 23;
    if(num>0){
        printf("number is positive %f\n",num);
    } else if(num<0){
        printf("number is Negative %f\n",num);
        
    } else {
        printf("number is Zero %f\n",num);

    }

    //first 10 number using for loop
    for(int i=1; i<=10; i++){
        printf("%d\n",i);
    }

    //factorial using while;
    int number = 5;
    int it=1;
    int fac = 1;
    while (it<=number)
    {
        fac *= it;
        it++;
    }
    printf("%d\n", fac);
    

    return 0;
}
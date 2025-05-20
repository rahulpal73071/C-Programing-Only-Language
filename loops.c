#include <stdio.h>
int main(){
    //loops iterate the values till the condition is true
    // 1 to 10 number using for loop
    int i;
    for(i=1; i<=10; ++i){
        printf("%d\n" , i);
    }
    printf("%d\n" , i);

    //1 to 5 number using while loop

    int j = 1;
    while (j<=5)        
    {
        printf("%d\n" , j);
        j++;
    }

    // do-while loop same as while but if condition false at starting then at least 1 time run
    int p = 1;
    do
    {
        printf("%d\n",p);
        p++;
    } while (p<=5);
    

    


    return 0;
}
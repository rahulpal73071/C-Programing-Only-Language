#include <stdio.h>
int main(){
    //taking output using printf()
    printf("this is output\n");
    int age = 18;
    printf("Age: %d\n", age);

    // also we can take input and store it in a variable and display it 
    // using scanf
    int a;
    scanf("%d", &a);
    printf("you choose %d\n" , a);
    // ⚠ Always use & with variable name to give the memory address.

    char name[5];
    scanf("%s", name); // no need to use &
    printf("%s\n" , name);

    //for output we use printf and for input we use scanf
    // in both cases we use same identifiers
    // %d int , %f float , %lf double , %c char , %s string

    return 0;
}
#include <stdio.h>
int main(){
    //if
    int age = 20;
    if(age>=18){
        printf("You are an adult\n");
    }
    //if-else
    if(age>=18){
        printf("You can drive the car with license\n");
    } else {
        printf("you are a minor and not able to drive a car\n");
    }

    int num = 333;
    if(num %2 == 0){
        printf("Your number is even\n");
    } else {
        printf("Your number is odd\n");
    }

    // if-else-if ladder
    int marks = 78;
    if(marks>=90){
        printf("you got A grade\n");
    } else if(marks>=80){
        printf("you got B grade\n");
        
    
    } else if(marks>=70){
        printf("you got C grade\n");
        
    
    } else if(marks>=60){
        printf("you got D grade\n");
        
    } else {
        printf("You got F or lower grade\n");
    }

    // switch Statement

    int number = 3;
    switch (number)
    {
    case 1:
        printf("Monday");
        break;
    case 2:
        printf("Tuesday");
        break;
    case 3:
        printf("Wednesday");
        break;
    default:
        printf("Invalid");
        
    }
    return 0;
}
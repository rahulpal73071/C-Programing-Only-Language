#include <stdio.h>
int main(){
    // arithmatic (+,-,* ,/ , %)
    int a = 23;
    int c= 2323;
    float b = 23.34;
    float sum = a+b;  // it uses implicit type conversion to convert a in float
    float sub = b-a;
    float mult = a*b;
    float div = b/a;
    float rem = c%a;  //both should be same type of data
    printf("%f %f %f %f %f\n",sum,sub,mult , div , rem);

    //Assignment Operators (= , += ,-= , *= , /=, %=)
    int age = 23;
    printf("%d\n",age);
    age += 2;
    printf("%d\n",age);

    //Relational Operators (== , != , <=, >= , < , >)
    int max = 24;
    int min = 2;
    

    //logical (&& , || , !)


    // Explicit Conversion (Type Casting)

    float f = (float)5/2;
    printf("%f\n" , f);

    int r = 10, p = 3;
    printf("%d", r % p); // Output: 1

    

    return 0;
}
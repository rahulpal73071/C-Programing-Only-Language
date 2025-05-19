#include <stdio.h>
int main(){
    int a= 10;
    int b = 30;
    int c = 2343;
    printf("data :  %d %d %d\n",a,b,c);

    float f = 34343.3434;
    float g = 34.34;
    printf("float data %f %f\n",f , g);

    double d = 34344.343434;
    printf("Double and float %lf %f\n" , d , f);

    char ch = 'C';
    printf("int float char %d %f %c\n",a,f,ch);

    // we can also use modifier for specification 
    // short , long , signed , unsigned
    short int i = 34;
    printf("%d\n" , i);

    // Constants
    #define PI 3.14         // Preprocessor constant
    const int MAX = 100;    // Constant variable
    printf("%f %d\n" , PI , MAX);

    // for string 
    char name[] = "Rahul pal";
    printf("%s\n", name);

    return 0;

}
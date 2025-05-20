#include <stdio.h>
void increment(int *p){
    (*p)++;
}

void print(int *arr , int size){
    for(int i=0; i<size; i++){
        printf("%d\n" , *(arr+i));
    }
}

int main(){
    // A pointer stores the memory address of another variable.
    // it is represented by *
    // & stores the address of the variable
    int a = 10;
    int *ptr = &a;
    printf("%d\n" , ptr);   // return the address of a
    printf("%d\n" , *ptr);  // return the value of a

    //pointer of an array
    int arr[] = {10 , 20 , 30 , 40 , 50};
    int *ptr1 = arr;
    printf("%d\n" , *(ptr1+1));

    // pointer to pointer
    int b = 23;
    int *p1 = &b;  //p1 store the address of b
    int **p2 = &p1;  // p2 store the address of p1
    printf("%d\n" , **p2);

    //passing pointer to a function
    int i = 5;
    increment(&i);
    printf("%d\n", i);

    //array as function argument
    int arr1[3] = {4,3,5};
    print(arr1,3); 

    // string and pointers
    char ch[] = "Hello";
    char *pr = ch;
    printf("%c\n" , *(pr+1));

    //void pointer can store address of any type variable
    void *vp;
    int num = 23;
    vp = &num;
    printf("%d\n" , *(int *)vp);  //can give dtype at time of calling
    int *p;
    printf("%lu", sizeof(p));  // 4 or 8


    

    return 0;
}
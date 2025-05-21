#include <stdio.h>
struct Student{
    char name[50];
    int id;
    float marks;
};


int main(){
    // A structure is a user-defined data type that groups different data types.
    struct Student s1 = {"Rahul pal" , 352 , 7.1};
    printf("Name: %s\n",s1.name);
    printf("ID: %d\n",s1.id);
    printf("marks: %f\n",s1.marks);
    

    // nested struct
    struct Date
    {
        int year , month , day;
    };
    struct Employee
    {
        char name[50];
        int age;
        struct Date joindate;
    };

    struct Employee e1 = {"Rahul pal", 20 , {2025 , 4 , 1}};
    printf("name: %s\n", e1.name);
    printf("joindate: %d\n", e1.joindate.day);

    // typedef with struct  == simplify
    typedef struct Teacher{
        char name[50];
        int age;
    }Teacher;

    Teacher t1 = {"Ramesh" , 43};
    printf("%s\n",t1.name);    
    
    // typedef struct Person {
    //     char name[50];
    //     int age;
    // } Person;

    // Person p1;

    

    
    
    
    
    return 0;
}
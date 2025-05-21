#include <stdio.h>
int main(){
    //writing in a file 
    FILE *fp = fopen("data.txt" , "w");
    fprintf(fp , "Hello file ");
    fclose(fp);
    FILE *fp1 = fopen("data.txt" , "w");
    fprintf(fp1 , "My name is rahul pal and i gonna write some text in this file");
    fclose(fp1); // it will replace upper one

    //reading file
    FILE *fp2 = fopen("data.txt" , "r");
    char ch;
    while (ch = fgetc(fp2)!= EOF)
    {
        putchar(ch);
    }
    printf("%c\n" , ch);
    fclose(fp2);
    

    return 0;
}
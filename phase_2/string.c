#include <stdio.h>
int main(){
    // string is nothing but array of charecter end with  \0
    char arr[6] = {'R' , 'a' , 'h' , 'u' , 'l', '\0'};
    for(int i=0; i<6; i++){
        printf("%c \n" , arr[i]);
    }

    // upper one also can written
    char str[] = "Rahul";
    printf("%s\n" , str);

    //taking input
    char name[9];
    scanf("%s" ,name );  // reads till first space
    fgets(name , sizeof(name) , stdin); // reads full name
    printf("%c\n" , name[3]);
    puts(name);

    // some methods 
    // strlen() == length of a string
    // strcpy(dest, src)	    Copy string	strcpy(a, b);
    // strncpy(dest, src, n)	Copy first n chars	strncpy(a, b, 5);
    // strcat(dest, src)	    Concatenate	strcat(a, b);
    // strncat(dest, src, n)	Concatenate n chars	strncat(a, b, 3);
    // strcmp(a, b)	        Compare (case-sensitive)	if (strcmp(a, b) == 0)
    // strncmp(a, b, n)	    Compare first n chars	
    // strchr(str, ch)	        Find first occurrence of char	strchr(str, 'l');
    // strstr(haystack, needle)	Find substring	strstr(str, "ell");

    return 0;

}
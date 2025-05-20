#include <stdio.h>
#include <stdlib.h>
int main(){
    //malloc
    int *ptr;
    ptr = (int *)malloc(5 * sizeof(int));  // for 5 integer memory allocated
    ptr = (int *)calloc(5,sizeof(int));   //all values initialize to 0
    ptr = realloc(ptr , 10*sizeof(int));  //expand memory
    // free(ptr);  //free all the space
    ptr[3] = 23;
    printf("%d\n" , *(ptr+3));
    free(ptr);  //free all the space

    //DMA with Array
    int n , *arr;
    printf("Enter the size :");
    scanf("%d",&n);

    arr = (int *)malloc(n * sizeof(int));
    if(arr == NULL){
        printf("Memory allocation failed\n");
    }

    for (int i=0; i<n; i++){
        scanf("%d" , &arr[i]);
    }

    printf("Array : [");
    for(int i=0; i<n; i++){
        printf(" %d ,",arr[i]);
    }
    printf("]");
    free(arr);  // deallocate 

    return 0;
}
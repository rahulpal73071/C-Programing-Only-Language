#include <stdio.h>

// searching in array 
int search(int arr[] , int n , int key){
    for(int i=0; i<n; i++){
        if(arr[i]==key) return i;
    }
    return -1;
}

// sorting == bubblesort
void bubbleSort(int arr[] , int n){
    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-1-i; j++){
            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j]= arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main(){
    //An array is a collection of elements of the same data type, stored in contiguous memory.
    int arr[3] = {1,2,3};
    // call
    printf("%d\n", arr[1]);
    // array indexing start from 0;
    // there is no method to find length
    int length = sizeof(arr)/sizeof(arr[0]);
    printf("%d %d\n" , length , search(arr , 3 , 2));

    // loop
    for(int i=0; i<3; i++){
        printf("%d\n" , arr[i]);
    }

    float arr1[4];
    // arr1 = {2.2,4.3,5.3,5.2};  wrong
    arr1[0] = 2.3;
    arr1[1] = 5.34;
    arr1[2] = 34.34;
    arr1[3] = 21.32;


    char arr2[] = {'A' , 'B' , 'C' , 'D'}; // size automatic become 4

    //in c there are 1D , 2D , more than 2D array 
    // 1D  == list   , 2D == Matrix , 3D == Space , 4D == Space time

    int arrp[] = {2,12,34,12,46311,212,23,45};
    int len = sizeof(arrp)/sizeof(arrp[0]);
    bubbleSort(arrp , len);
    for (int i=0; i<len; i++){
        printf("%d\n" , arrp[i]);
    }

}
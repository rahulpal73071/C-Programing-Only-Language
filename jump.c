#include <stdio.h>
int main(){
    // break statement  === stops the loop or switch

    for(int i=1; i<=10; i++){
        if(i==5) break;
        printf("%d\n",i);  /// 1,2,3,4
    }

    // continue statement  === jump at once 

    for (int i=1; i<=10; i++){
        if(i==5) continue;
        printf("%d\n",i);         /// 1,2,3,4,6,7,8,9,10
    }

    //goto  === Jumps to a label (use rarely).
    goto end;
    printf("Sayad nahi print hoga");
    end:
    printf("Program end");

    return 0;
}
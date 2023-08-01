#include <stdio.h>

// 0 stands for false
// anything except 0 is true. -5 is true, 10012 is true, even 'b' is true

int main(){

    if (2 % 5 + 3){
        printf("This works 1 \n"); // 2 % 5 gives 2 as numerator is smaller 2 + 3 give 5. Now 5 is a integer. So it is considered as true.
    }

    if (10 - 10){
        printf("This doesnt work 2 \n"); // 0 is considered false.
    }

    if (10 - 11){
        printf("This works 3 \n"); 
    }

    if ('m'){
        printf("This works 4 \n");
    }

    return 0;
}
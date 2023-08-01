#include<stdio.h>

// Array is used to store many variables at the same time

int main(){
    int a[4]={1,2,3,4};         // 4 variable array is created. It has four variables with indexes 0,1,2,3(index are like serial number)

    printf("%d\n",a[0]);
    printf("%d\n",a[1]);        // Array stores variables from 0 to n-1. We say that it has indexes 0,1,2...n-1
    printf("%d\n",a[2]);
    printf("%d\n",a[3]);

    a[2]=0;                     // We can change the value of individual variable in array like this
    printf("%d\n\n",a[2]);

    int b[2];                   // We can also declare the values first and put hte values later
    b[0] = 1; 
    b[1] =8;
    printf("%d\n",b[0]);
    printf("%d\n\n",b[1]); 

    int ch[3] = {'a','#','B'};  // We can also make char arrays and float arrays 
    printf("%c\n",ch[0]);
    printf("%c\n",ch[1]);        
    printf("%c\n\n",ch[2]);

    return 0;
}
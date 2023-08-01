#include<stdio.h> 

int main(){
    int a =1;
    printf("%d %d %d",a,++a,a++);      // Compiler goes from right to left in the printf function
    // First it sees a++
    // So it prints 1 in the third %d and increases the value of a to 2
    // ++a will first increase a to 3 and then print it in the second %d
    // a will print 3
    return 0;
}
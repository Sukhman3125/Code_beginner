#include<stdio.h>

// This is known as typecasting

int main(){

    int x = 65;                      // 65 is ascii value of A
    char ch1 = (char) x;             // now ch is a character converted by x which is an int type
    printf("%c\n",ch1);                // prints A

    char ch2 = 'A';                  // A has ascii value of 65      
    int y = (int) ch2;               
    printf("%d\n",y);                  // prints 65
    return 0;  
}
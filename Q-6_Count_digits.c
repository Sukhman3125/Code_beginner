#include<stdio.h>

int main(){

    printf("Enter a number: ");
    int n,count=0;
    scanf("%d",&n);
    // We took the number from user

    do{       
        n /= 10;                        // Divide n by 10 each time it encounters loops. for example if user enters 1651, then 1651/10 is 165.1 which becomes 165 due to int. This way, we remove a digit off the n each time we enter the loop
        count++;                        // It counts the digits removed
    }while(n!=0);                       // When all digits are removed, it stops

    printf("%d",count);                 // Now we print the number of digits removed which is same as total number of digits
  
    // We can also use for loop or while loop for this

    return 0;
}
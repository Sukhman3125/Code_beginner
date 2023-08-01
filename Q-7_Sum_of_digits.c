#include<stdio.h>

int main(){
    
    printf("Enter a number: ");
    int n;
    scanf("%d",&n);
    // We took the number from user

    int sum=0;
    // sum = sum + last digit
    // sum = sum + 2nd last digit
    // so on...

    do{
        sum = sum + n%10;               // n%10 gives the last digit. For example 14646 % 10 gives 6
        n /= 10;                        // Removes the last digits off the number
    }while(n != 0);                     // This way, one by one , we use last digit, remove it, use the new last digit, remove it... until all digits are used in sum.

    // We can also use for loop or while loop for this

    printf("The sum of its digits is %d",sum);

    return 0;
}
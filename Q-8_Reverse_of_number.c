#include<stdio.h>

int main(){
    
    printf("Enter a number: ");
    int n;
    scanf("%d",&n);
    // We took the number from user

    int reversed_number = 0;
    int last_digit;

    while(n != 0){
        last_digit = n%10;                                       
        reversed_number = reversed_number*10 + last_digit ;         // We add last digit of the number to 0. for ex number is 123, we add 3 to 0 which is 3
        n /= 10;                                                    // We remove the last digit, the number becomes 12
                                                                    // We run the loop again with the new last digit is 2 we add it to 3*10 which is 32 and so on...
    }

    printf("%d",reversed_number);

    return 0;
}
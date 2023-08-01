#include<stdio.h>

// Armstrong number is a number whose digits raised to power the number of digits and added returns the same number
// For example 1^3 +5^3 + 3^3 = 153
// For example 1^4 + 6^4 + 3^4 + 4^4 = 1634 

int main(){
    
    printf("Enter a number: ");
    int n;
    scanf("%d",&n);
    //We got the input

    int orignal_number = n;               
    int sum_of_powered_digits=0;

    int count=0;
    do{       
        n /= 10;
        count++;                        
    }while(n!=0);         // To count the digits

    // printf("%d",count);

    n=orignal_number;     // To recover n which got changed due to counting digits
    int last_digit;
    int powered_last_digit;

    while(n!=0){
        last_digit=n%10;                      // To use the last digit

        powered_last_digit=1;
        for(int i=1; i<=count ; i++){                     // To raise the last digit to the power of number of digits
            powered_last_digit *= last_digit;             // Dont ever use the pow func again it is so bad :(
        }

        sum_of_powered_digits = sum_of_powered_digits +  powered_last_digit ;      // To produce the sum of powered digits

        n = n/10;                                                                  // Remove the last digit off the number and proceed the loop with that again
    }

    if(sum_of_powered_digits==orignal_number){
        printf("%d is armstrong number",orignal_number);
    }
    else{
        printf("%d is not armstrong number",orignal_number);
    }
    return 0;
}
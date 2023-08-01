#include <stdio.h>

int main()
{

    printf("***This program will tell you all armstrong numbers in given range n1 to n2***\n");
    printf("Enter n1: ");
    int n1;
    scanf("%d", &n1);
    printf("Enter n2: ");
    int n2;
    scanf("%d", &n2);

    if (n2 >= n1 && n1 >= 0 && n2 >= 0){     // To prevent error, we want only valid values of n1 and n2      

        for (int n = n1; n <= n2; n++){              // n takes the value of every number in the range and rest of cod is similar to last ques

            int orignal_number = n;
            int sum_of_powered_digits = 0;

            int count = 0;
            do{
                n /= 10;
                count++;
            } while (n != 0); // To count the digits

            // printf("%d",count);

            n = orignal_number; // To recover n which got changed due to counting digits
            int last_digit;
            int powered_last_digit;

            while (n != 0){
                last_digit = n % 10; // To use the last digit

                powered_last_digit = 1;
                for (int i = 1; i <= count; i++){     // To raise the last digit to the power of number of digits
                    powered_last_digit *= last_digit; // Dont ever use the pow func again it is so bad :(
                }

                sum_of_powered_digits = sum_of_powered_digits + powered_last_digit; // To produce the sum of powered digits

                n = n / 10; // Remove the last digit off the number and proceed the loop with that again
            }

            if (sum_of_powered_digits == orignal_number){
                printf("%d ", orignal_number);
            }

            n=orignal_number;       // To return the iterator to the value it had when the loop started

        }
    }
    else{
        printf("ERROR: Enter a valid range of whole numbers\n");
    }

    return 0;
}
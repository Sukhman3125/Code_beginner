#include <stdio.h>

int main(){

    printf("***This program will tell you all prime numbers in given range n1 to n2***\n");
    printf("Enter n1: ");
    int n1;
    scanf("%d", &n1);
    printf("Enter n2: ");
    int n2;
    scanf("%d", &n2);

    if (n2 >= n1 && n1 > 0 && n2 > 0){     // To prevent error, we want only valid values of n1 and n2
        
        for( int n=n1 ; n<=n2 ; n++ ){     // To check prime for every number from n1 to n2

            if(n==1){                      // Dont run this loop for 1
                continue;
            }

            int prime_yes = 1;             // Every time the loop starts we assume the number is prime

            for(int i=2 ; i<=n-1 ; i++){    
                if( n%i == 0){
                    prime_yes=0;           // As soon as any number lying from 2 to n-1 divided it completely, we make this number not prime and break this inner loop
                    break;
                }
            }

            if(prime_yes==1){             // If the number goes through the last loop without being divided by any of the numbers from 2 to n-1, this condition runs
                printf("%d ",n);           
            }
                                          // Now we ren the same for next n 
        }

    }
    else{
        printf("ERROR: Enter a valid range of natural numbers\n");
    }
    return 0;
}
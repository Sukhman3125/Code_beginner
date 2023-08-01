#include<stdio.h>

int prime_or_not(int n){
    int prime = 1; // prime = 1 then prime. If 0 then not prime
    if( n==1 ){         // 1 is not prime
            prime = 0;
        }
    else{
        for(int i=2; i<=n-1; i++){
            if( n%i == 0 ){
                prime = 0;
                break;
            }
        }
    }
    return prime;           // So when it is prime it is gonna return 1 which means true. When it is not prime it is gonna return 0 which is false(boolean used)
}

void prime_factors(int n){
    for(int i=1; i<=n; i++){
        if( n%i == 0){            
            if( prime_or_not(i) ){      // In addition to last question, it all checks if prime_or_not returns true on every factor.
                printf("%d\n",i);
            }
        }
    }
}

int main(){
    printf("Enter the number you want to check if prime or not: ");
    int n;
    scanf("%d",&n);
    prime_factors(n);
    return 0;
}
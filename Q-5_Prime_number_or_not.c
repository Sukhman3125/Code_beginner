#include<stdio.h> 

int main(){
    int n,prime=0;
    printf("Enter the number to check if it is prime or not: ");
    scanf("%d",&n);
    for(int i=2;i<=n-1;i++){                
        if(n%i==0){
            prime=1;
            break;
        }
    }
    if(n==1){
        printf("1 is neither prime nor composite");
    }
    else if(n<=0){
        printf("Please enter a natural number");
    }
    else{
        if(prime==0){
        printf("The number %d is prime",n);
        }
        else{
        printf("The number is %d composite",n);
        }
    }
    
    return 0;
}
#include<stdio.h>

int main(){

    printf("Enter a number: ");
    int n;
    scanf("%d",&n);

    for( int i=1 ; i<=n ; i++ ){
        int factorial=1;

        for( int j=1 ; j<=i ; j++){
            factorial *= j;
        }
        
        printf("Factorial of %d is : %d\n",i,factorial);
    }

    return 0;
}
#include<stdio.h> 
// 0 1 1 2 3 5 8 13 21 34
// Each term is the sum of the two terms before it

// We will use recursion

int fibonacci(int n){
    if( n==1 ){
        return 0;
    }
    else if( n==2 ){
        return 1;
    }
    else{
        return fibonacci(n-1) + fibonacci(n-2);
    }
}
int main(){
    printf("Enter a number: ");
    int n;
    scanf("%d",&n);
    printf("The %dth fibonacci number is %d",n,fibonacci(n));
    return 0;
}
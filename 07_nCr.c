#include<stdio.h>

int factorial(int a){
    int answer=1;
    for(int i=1; i<=a; i++){
        answer *= i;              // A simple function to calculate factorial
    }
    return answer;
}

int nCr(int n, int r){
    // nCr is n!/((r!) * (n-r)!)
    int answer = factorial(n)/( factorial(r) * factorial(n-r));   // We used factorial function to make nCr function
    return answer;
}

int main(){
    printf("Enter n: ");
    int n;
    scanf("%d",&n);
    printf("Enter r: ");
    int r;
    scanf("%d",&r);

    printf("%dC%d is %d",n,r,nCr(n,r));
    return 0;
}

// Note: This program wont be able to take values such as 20 as n or r as they are too big for int to store
// For ex 20c19 is 20 which is small but 20 factorial is large so it will cause error
// So we can use long data type for that
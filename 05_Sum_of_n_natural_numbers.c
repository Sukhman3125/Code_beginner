#include<stdio.h> 

int sum(int n){
    if(n==1){
        return 1;
    }
    else{
        return n + sum(n-1);
    }
}

int main(){
    printf("Enter n: ");
    int n;
    scanf("%d",&n);
    printf("Sum of %d natural numbers is %d",n,sum(n));
    return 0;
}
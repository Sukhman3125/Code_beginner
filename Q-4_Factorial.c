#include<stdio.h> 

int main(){
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    int factorial=1;
    for(int i=1;i<=n;i++){
        factorial *= i;
    }
    printf("%d factorial is %d",n,factorial);
    return 0;
}
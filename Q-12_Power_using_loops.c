#include<stdio.h>

int main(){
    printf("Enter the first number: ");
    int a;
    scanf("%d",&a);
    printf("Enter the second number: ");
    int b;
    scanf("%d",&b);

    // a raised to power b is a*a*a*a*a.. b times

    int answer=1;

    for(int i=1; i<=b ; i++){
        answer= answer * a;
    }

    printf("%d^%d equals: %d",a,b,answer);

    return 0;
}
#include<stdio.h>

int main(){
    int a;
    printf("Enter a: ");
    scanf("%d",&a);
    int b;
    printf("Enter b: ");
    scanf("%d",&b);


                   // let the initial value of a is A and b is B
    a=a+b;         // here a has taken value A+B
    b=a-b;         // here a was a+b so a-b means (A+B)-B which is A. So b took the value of A
    a=a-b;         // here a was A+B and b was A. So A-B means (A+B)-A which is B. So a took the value of B

    printf("a is %d\nb is %d",a,b);
    return 0;
}
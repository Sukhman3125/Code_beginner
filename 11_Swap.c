#include<stdio.h>

int main(){
    int a;
    printf("Enter a: ");
    scanf("%d",&a);
    int b;
    printf("Enter b: ");
    scanf("%d",&b);
    
    //We want to swap their values

    // a=b;
    // b=a;
    // printf("a is %d\n",a);
    // printf("b is %d\n",b);
    // obviously that wont work because when we say a=b; a's orignal value is lost

    // So we follow this
    int temp;
    temp=a;                               // This variable will help us store the initial value of a even after a takes the value of b
    a=b;
    b=temp;                               // The orignal value of a stored in this temp is given to b
    printf("a is %d\nb is %d",a,b);
    return 0;
}
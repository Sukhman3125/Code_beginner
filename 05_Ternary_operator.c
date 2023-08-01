#include<stdio.h> 
//syntax: condition? code if true : code if false
//only for one liner use
int main(){
    float a;
    printf("Enter a\n");
    scanf("%f",&a);
    a>2? printf("a is greater than 2") : printf("a is not greater than 2");
    return 0;
}
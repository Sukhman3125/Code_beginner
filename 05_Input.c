#include<stdio.h>
int main(){
    float a,b;
    printf("Enter the value of a \n");
    scanf("%f",&a); //With this, an input will be demanded from user which will store in a
    printf("Enter the value of b \n");
    scanf("%f",&b);
    printf("The sum of a and b is %f \n", a+b); //This will print the value of a+b according to a and b given by user
    return 0;
}
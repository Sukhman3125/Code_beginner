#include<stdio.h> 

int main(){
    float Celcius;
    printf("Enter the temperature in celcius:");
    scanf("%f",&Celcius);
    printf("The temperature in Fahrnheit is %f degrees",(Celcius*9/5)+32);
    return 0;
}
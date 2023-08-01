#include<stdio.h> 

int main(){
    float principal,rate,years;
    printf("Welcome to the program to calculate the simple interest\n");
    printf("Enter the value of principal:");
    scanf("%f",&principal);
    printf("Enter the rate:");
    scanf("%f",&rate);
    printf("Enter the number of years:");
    scanf("%f",&years);
    float simple_interest = (principal*rate*years)/100 ;
    printf("The simple interest for the give data is :%f",simple_interest);
    return 0;
}

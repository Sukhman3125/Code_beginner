#include<stdio.h> 

int main(){
    printf("Which number do you want to check the divisibility with \n");
    int divisor;
    scanf("%d",&divisor);
    printf("Enter the number to check divisibility by %d \n",divisor);
    int number;
    scanf("%d",&number);
    if(number%divisor==0){
        printf("the number %d is divisible by %d",number,divisor);
    }
    else{
        printf("the number %d is not divisible by %d",number,divisor);
    }
    return 0;
}
#include<stdio.h> 

int main(){
    printf("Enter the number to check divisibility by 97 \n");
    int number;
    scanf("%d",&number);
    if(number%97==0){
        printf("the number %d is divisible by 97",number);
    }
    else{
        printf("the number %d is not divisible by 97",number);
    }
    return 0;
}
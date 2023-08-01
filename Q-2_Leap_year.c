#include<stdio.h> 
// definition of leap year. Must be divisible by 4 and not by 100. exception: years divisible by 400 are also leap years.
int main(){
    int year;
    printf("Enter the year:");
    scanf("%d",&year);
    if(year >= 0){
        if((year%4==0 && year%100!=0) || year%400==0 ){
            printf("%d is a leap year",year);
        }
        else{
            printf("%d is not a leap year",year);
        }
    }
    else{
        printf("ERROR: Year cannot be negative");
    }
    return 0;
}
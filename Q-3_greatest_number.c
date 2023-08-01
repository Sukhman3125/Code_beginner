#include<stdio.h> 

int main(){
    float a,b,c,d;
    printf("Enter the first number:");
    scanf("%f",&a);
    printf("Enter the second number:");
    scanf("%f",&b);
    printf("Enter the third number:");
    scanf("%f",&c);
    printf("Enter the forth number:");
    scanf("%f",&d);
    if(a==b || b==c || c==d || a==c || b==d || a==d){
        printf("You cannot enter equal numbers \n");
    }
    else if(a>b && a>c && a>d){
        printf("The first number %f is the greatest",a);
    }
    else if(b>a && b>c && b>d){
        printf("The second number %f is the greatest",b);
    }
    else if(c>a && c>b && c>d){
        printf("The third number %f is the greatest",c);
    }
    else if(d>a && d>c && d>b){
        printf("The forth number %f is the greatest",d);
    }
    return 0;
}
#include<stdio.h>

int add(int a, int b){    // The int at start of function states what type of value a function returns . It can be int, char, float etc. If we dont want to return any value we use void
    return a+b;           // Whenever we call this function as add(), we will also put two values a and b in it and acc to those two values it will return us a+b 
}

int main(){
    int a;
    printf("Enter a: ");
    scanf("%d",&a);
    int b;
    printf("Enter b: ");
    scanf("%d",&b);

    int sum = add(a,b);       // The a,b used in add func and a,b used in main func are different. a,b used in add func above are just parameters while a,b used here are input taken from users

    printf("%d",sum);
    return 0;
}
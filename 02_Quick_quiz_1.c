#include<stdio.h> 

// Write a program to print natural numbers upto n.

int main(){
    int n;
    scanf("%d",&n);
    int i=1;
    do{
        printf("%d \n",i);
        i++;
    }while(i<=n);
    return 0;
}
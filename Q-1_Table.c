#include<stdio.h> 

int main(){
    int n;
    printf("Enter the number you want the table of:");
    scanf("%d",&n);
    int i=1;
    while(i<=10){
        printf("%d \n",n*i);
        i++;
    }
    return 0;
}
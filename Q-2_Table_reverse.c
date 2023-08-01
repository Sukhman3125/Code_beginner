#include<stdio.h> 

int main(){
    int n;
    printf("Enter the number you want the table of:");
    scanf("%d",&n);
    for(int i=10;i;i--){
        printf("%d\n",n*i);
    }
    return 0;
}
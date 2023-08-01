#include<stdio.h>

int main(){
    
    int n;
    printf("Enter the number of lines: ");
    scanf("%d",&n);

    for(int i=1 ; i<=n ; i++){
        char a='A';
        for(int j=1 ; j<=i ; j++){
            if(i%2==0){                           // In even lines aplphabets are printed
                printf("%c ",a);             
            }
            else{
                printf("%d ",j);                  // In odd lines numbers are printed
            }
            a++;
        }
        printf("\n");
    }

    return 0;
}
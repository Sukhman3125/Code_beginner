#include<stdio.h>

int main(){
    
    int n;
    printf("Enter the number of lines: ");
    scanf("%d",&n);

    for(int i=1 ; i<=n ; i++){
        char a='A';
        for(int j=1 ; j<=i ; j++){
            printf("%c ",a);
            a++;
        }
        printf("\n");
    }

    return 0;
}
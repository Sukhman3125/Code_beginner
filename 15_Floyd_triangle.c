#include<stdio.h>

int main(){
    int n;
    printf("Enter the number of lines: ");
    scanf("%d",&n);
    int numbers=1;

    for( int i=1 ; i<=n ; i++){
        for( int j=1 ; j<=i ; j++){
            printf("%d ",numbers);
            numbers++;
        }
        printf("\n");
    } 

    return 0;
}   
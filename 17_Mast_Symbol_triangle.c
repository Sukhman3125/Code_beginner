#include<stdio.h>

int main(){

    int n;
    printf("Enter number of lines: ");
    scanf("%d",&n);

    for(int i = 1 ; i <= n ; i++){
        for(int j = 1 ; j <= n ; j++){
            if( i+j < n+1 ){               // The area on left of secondary diagonal of a matrice is represented by this.
                printf("  ");
            }
            else{
                printf("* ");
            }
        }
        printf("\n");
    }
    return 0;
}
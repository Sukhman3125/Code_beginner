#include<stdio.h>

int main(){

    int side_length;
    printf("Enter side length: ");
    scanf("%d",&side_length);

    for(int i = 1 ; i <= side_length ; i++){


        for(int j = 1 ; j <= side_length ; j++){
            printf("* ");
        }
        
        printf("\n");


    }
    return 0;
}
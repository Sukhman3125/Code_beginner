#include<stdio.h>

int main(){
    
    int length;
    printf("Please enter the length of plus (Only numbers work) : ");
    scanf("%d",&length);
    if(length%2==0){
        printf("ERROR: Length cannot be even\n");
    }
    else{
        for(int i=1;i<=length;i++){
            for(int j=1;j<=length;j++){
                if( i==j || i+j==length + 1 ){         //The condn is such that both diagonals are convered
                    printf("* ");
                }
                else{
                    printf("  ");                                             
                }
            }
            printf("\n");
        }
    }

    return 0;
}
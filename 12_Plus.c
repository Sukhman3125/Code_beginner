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
                if((i == (length+1) / 2 ) || (j == (length+1) / 2 )){         //The condn is such that either row-wise or column-wise, we are in center
                    printf("* ");
                }
                else{
                    printf("  ");                                             // For empty space
                }
            }
            printf("\n");
        }
    }

    return 0;
}
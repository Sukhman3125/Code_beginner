#include<stdio.h>

int main(){

    int n;
    printf("Enter the number of lines: ");
    scanf("%d",&n);

    for(int i=1 ; i<=n ; i++){
        if( i%2==0 ){                        //For even rows we have different conditions
            for(int j=1 ; j<=i ; j++){
                if( j%2 == 0){                      //In even rows, even columns are 1 and odd are 0
                    printf("1 ");
                }
                else {
                    printf("0 ");
                }
            }
        } 
        else{                               //For odd we have different
            for(int j=1 ; j<=i ; j++){
                if( j%2 == 0){                     //In even rows, even columns are 1 and odd are 0
                    printf("0 ");
                }
                else {
                    printf("1 ");
                }
            }
        }
        printf("\n");
    }

    return 0;
}    

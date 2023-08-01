#include<stdio.h>

// 1-2+3-4.. upto n terms

int main(){
    printf("Enter the number of terms: ");
    int n;
    scanf("%d",&n);

    int sum=0;

    for(int i=0 ; i<=n ; i++ ){
        if( i%2==0 ){
            sum -= i;
        }
        else{
            sum += i;
        }
    }

    printf("%d",sum);

    return 0;
}
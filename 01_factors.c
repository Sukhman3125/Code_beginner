#include<stdio.h>

void factors(int n){
    for(int i=1; i<=n; i++){
        if( n%i == 0){
            printf("%d\n",i);
        }
    }
}

int main(){
    printf("Enter the number you want the factors of: ");
    int n;
    scanf("%d",&n);
    factors(n);
    return 0;
}
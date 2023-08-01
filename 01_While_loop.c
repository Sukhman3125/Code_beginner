#include<stdio.h> 

//                sytax:
//                while(condition){
//                   code
//                }

int main(){
    int n;
    scanf("%d",&n);
    int i=1;
    while(i<=n){
        printf("%d \n",i);
        i++;
    }
    return 0;
}
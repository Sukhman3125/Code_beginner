#include<stdio.h>

// 1 1 2 3 5 8 13 21 .... is fibonacci series
// every term is the sum of last two terms 1+1 is 2, 2+1 is 3, 3+2 is five and so on

int main(){
    printf("Enter the number of terms: ");
    int n;
    scanf("%d",&n);

    int term_2nd_last=1,term_last=1,sum = 0;

    for( int i=1; i<=n-2 ; i++ ){
        sum = term_2nd_last+ term_last;                               // first and second terms (1 and 1) are added
        term_2nd_last=term_last;                                     // for progression of terms
        term_last=sum;                                              // Sum becomes the next fibonacci term
    }   

    printf("%d",sum);

    return 0;
}
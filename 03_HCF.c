#include<stdio.h>

int min(int a, int b){
    if(a>b){
        return b;
    }else{
        return a;
    }
}

int hcf(int a, int b){
    int ans;
    for( int i=min(a,b) ; i>=1 ; i-- ){    // Highest number possible for hcf is min of two nuumbers. For example hcf of 15,30 is 15. Min is 1
        if( a%i==0 && b%i==0 ){            // HCF is the highest number possible that divides both numbers
            ans = i;                       // As the loop is going from highest to smallest numbers, the first number that meets the condn is largest such number. So we break it right away.
            break;
        }
    }
    return ans;
}

int main(){
    printf("Enter the first number: ");
    int a;
    scanf("%d",&a);
    printf("Enter the second number: ");
    int b;
    scanf("%d",&b);

    printf("%d",hcf(a,b));

    
    return 0;
}
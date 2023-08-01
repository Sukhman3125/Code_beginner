#include<stdio.h>
 
// Here is an example
//            1
//         1     1
//       1    2    1
//     1   3     3   1
//   1   4    6    4   1                See the pattern upper two digits sum make the lower middle one
// There is one other patter
//              0c0
//          1c0     1c1
//        2c0    2c1    2c2
//    3c0    3c1    3c2    3c3
// 4c0   4c1    4c2    4c3    4c4   
// This is same triangle and there is a nCr pattern

//
int factorial(int a){
    int answer=1;
    for(int i=1; i<=a; i++){
        answer *= i;              
    }
    return answer;
}

int nCr(int n, int r){
    int answer = factorial(n)/( factorial(r) * factorial(n-r));   
    return answer;
}
//nCr calculator function
 
int main(){
    
    int n;
    printf("Enter the number of rows: ");
    scanf("%d",&n);

    for(int i=0; i<=n; i++){
        for(int j=0; j<=i; j++){
            printf("%d ",nCr(i,j));
        }
        printf("\n");
    }

    return 0;
}
//This is basically pascal triangle without spaces
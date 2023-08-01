#include<stdio.h> 

// A function calling itself is called recursion

int factorial(int n){
    if( n==1 || n==0 ){
        return 1;
    }
    else{
        return n * factorial(n-1);
    }
}

int main(){
    printf("%d",factorial(5));
    return 0;
}


// Lets see this code
// factorial(5) is called
// it is not 0 or 1 
// So it will return 5 * factorial(4)
// So factorial(4) is called
// // it is not 0 or 1 
// So it will return 4 * factorial(3)
// So factorial(3) is called
// // it is not 0 or 1 
// So it will return 3 * factorial(2)
// So factorial(2) is called
// it is not 0 or 1 
// So it will return 2 * factorial(1)
// 1 will return 1
// It will go back to return factorial(2) as 2*factorial(1) which is 2
// It will go back to return factorial(3) as 3*factorial(2) which is 6
// It will go back to return factorial(4) as 4*factorial(3) which is 24
// It will go back to return factorial(5) as 5*factorial(4) which is 120


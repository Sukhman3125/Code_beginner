#include<stdio.h>

//
int minimum(int a , int b){
    int min;
    if(a<b){
        min=a;
    }                                      // This is a function which will tell minimum of two numbers
    else{ 
        min=b;
    }
    return min;                            // Use of this function while inputing two values a and b , will return the output as variable min
}
//

int main(){
    int min=minimum(1010,1456);           // We entered two value into minimum function, it will tell us the smallest of them 
    printf("%d",min);                     // Also we can use same name of variables in different functions. They work seprately in both functions
    return 0;
}
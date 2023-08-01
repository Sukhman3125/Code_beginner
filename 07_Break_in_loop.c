#include<stdio.h> 

//break brings you out of a loop no matter the condition for the loop is satisfied or not

int main(){
    for(int i=0;i<1000;i++){
        printf("%d\n",i);
        if(i==5){
            break;
        }
    }
    //The output for the loop will be:
    // 0
    // 1 
    // 2
    // 3
    // 4
    // 5 
    // at 5 the loop breaks
    return 0;
}
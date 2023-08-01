#include<stdio.h> 

//Continue will not excute anything in the loop after it.

int main(){
    for(int i=1;i<=15;i++){
        printf("%d \n",i);
        if(i==7){
            continue;
        }
        printf("Hello \n");
    }
    // When i is 7 the hello printing command is skipped
    return 0;
}
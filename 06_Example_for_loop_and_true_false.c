#include<stdio.h> 

int main(){
    for(int i=5;i;i--){
        printf("%d \n",i);
    }
    
    //Here i starts with 5. Any positive value is true for i, which is the condition is true
    //then it changes to 4 then 3 and so on.
    //When it reaches 0, loop stops as 0 return false.
    
    return 0;
}
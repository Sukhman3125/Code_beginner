#include<stdio.h> 

//                 syntax:
//                 for(initialize;condition;increment or decrement etc.){
//                     code
//                 }

int main(){
    for(int i=1;i<=10;i++){    // can also use something like i=i*10 +2 etc. instead of i++ or i--
        printf("%d\n",i);
    }

    printf("%d",i);           // Is giving error because i was made in for loop and outside it, i is not defined 

    // However if we declare i outside the for loop before the for loop starts, then i will be defined even after loop is finished

    int i;
        for(i=1;i<=10;i++){    
        printf("%d\n",i);
    }

    printf("%d",i);           // Not giving error this time

    return 0;
}
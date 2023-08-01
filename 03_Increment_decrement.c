#include<stdio.h> 

// i++ means i=i+1
// i-- means i=i-1

// += is compund assignment operator: i+= 10 means i=i+10
// -= is compund assignment operator: i-= 10 means i=i-10
// *= is compund assignment operator: i*= 10 means i=i*10
// /= is compund assignment operator: i/= 10 means i=i/10

int main(){
    int i=15;
   
    // printf("%d \n",i++);      //gives 0 as it prints i first and then increases it
    // printf("%d \n",i);        //gives 1 as it was increased to 1 earlier

    // printf("%d \n",++i);      //gives 1 as it increases first and then prints
    // printf("%d \n",i);        //gives 1 as it was increased to 1 earlier 
   
    return 0;
}
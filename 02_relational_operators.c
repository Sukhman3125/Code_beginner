#include<stdio.h> 
// == is used to check equality
// != means not equal to
// > means greater than
// >= means greater than or equal to
// < means  lesser than
// <= means lesser than or equal to
int main(){
    int age;
    printf("Enter your age:");
    scanf("%d",&age);
    if(age>=18){
        printf("You can drive as you are adult");
    }
    if(age<18){
        printf("You cannot drive as you are not an adult");
    }
    return 0;
}
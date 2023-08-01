#include<stdio.h> 

//   syntax:
//   do {
//       code
//   } while(condition);

//   In a do while loop first work is done and then condition is checked. 
//   If condition fulfils it does work again until condition is not satisfied.

//   USE: When you have to do a task at leat one time and then apply condition
//   example: In a game you make it such that play does play for first time and 
//            then you ask them for replay

int main(){
    int i=0;
    do{
        printf("%d \n",i);
        i++;
    }while(i<=10);
    return 0;
}
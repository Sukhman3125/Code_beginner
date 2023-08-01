#include<stdio.h>

//           \n is used to move to the next line in a sentence

int main(){
    int a=3;
    printf("a is %d \n",a); //where ever %d is used the value of int type variable will be printed there
    float b=1.4;
    printf("b is %f \n",b); //where ever %f is used the value of float type variable will be printed there
    char c='!';
    printf("c is %c \n",c); //where ever %c is used the the character will be printed there
    printf("a,b,c respectively are %d %f %c \n",a,b,c); //multiple can be used at same time too
    int x=10,y=20;
    printf("Product of x and y is %d \n", x*y); //mathematical operations can also be used here
    int z= 10+20; //mathematical operations can also be used while defining variables
    int w= z+x+y; //mathematical operations can also be used while defining variables with pre-existing ones
    return 0;
}
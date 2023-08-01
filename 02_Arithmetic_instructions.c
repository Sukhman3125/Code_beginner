#include<stdio.h> 
#include<math.h>
int main(){
    float a=4;
    float b=5;
    printf("The value of a+b is %f \n",a+b);
    printf("The value of a-b is %f \n",a-b);
    printf("The value of a*b is %f \n",a*b);
    printf("The value of a/b is %f \n",a/b);
    // int x=a+b; //This is valid
    // int a+b=x; //This is invalid left side only one variable is allowed
    // (4)(5),4.5 dont mean multiply you have to use 4*5 or (4)*(5)
    // ^ is not the exponent operator its is bitwise xor operator (Will learn later on)
    // to use exponents use #include<math.h> after stdio and then we can use pow(x,y) for x raised to y power
    printf("4^5 is equal to %f \n",pow(4,5));
    return 0;
}
    
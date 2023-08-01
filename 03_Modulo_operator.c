#include<stdio.h> 

int main(){

    printf("The remainder when 10 divided by 3 is %d\n", 10 % 3 ); //The module gives remainder.

    printf("The remainder when -10 divided by 3 is %d\n", -10 % 3 ); //This time output is -1 same sign as numerator

    printf("The remainder when 10 is divided by -3 is %d\n", 10 % -3 ); // - sign on the denominator changes nothing

    printf("The remainder when -10 is divided by -3 is %d\n", -10 % -3 ); // you get the point



    printf("%d\n", 2 % 8 ); // if numerator is smaller than the denominator then answer is simply the numerator            

    return 0;
}
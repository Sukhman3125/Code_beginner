#include<stdio.h>
// Let us understand by trying to make a swap function

void swap(int a, int b){
    int temp;
    temp=a;
    a=b;
    b=a;
    return;
}
int main(){
    int a;
    printf("Enter a: ");
    scanf("%d",&a);
    int b;
    printf("Enter b: ");
    scanf("%d",&b);

    swap(a,b);                            // This doesnt work. This is due to the reason that a,b are pass by values. 
                                          //Values of a,b are taken into the function and are stored into different variables(which in this case are also a,b but they are different). Those variables get swapped. Not this.

    printf("a is %d\nb is %d",a,b);          

    return 0;
}
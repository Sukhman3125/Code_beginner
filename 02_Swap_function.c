#include<stdio.h>
// We will continuing swap function from last cahpter which we couldnt make back then

void swap(int* x, int* y){               // Using int* as we have to store adresses of a and b in x and y
    int temp;
    temp = *x;                           // *x represents value of a. As x has adress of a
    *x = *y;                             // *x which means a has the value of *y now which means b
    *y = temp;                           // *y which means b has the value of temp which had the orignal value of a.                      
    return;
}
int main(){
    int a;
    printf("Enter a: ");
    scanf("%d",&a);
    int b;
    printf("Enter b: ");
    scanf("%d",&b);

    swap(&a,&b);                           /* This will make the pass by variables in the swap func recieve the adress of a and b
                                              instead of value of a and b.*/                       

    printf("a is %d\nb is %d",a,b);          

    return 0;
}
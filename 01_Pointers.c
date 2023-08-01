#include<stdio.h>

// Pointers store the adress of a varible. Adress means the peice of ram on which some varible is stored.
// Everytime a code is run, variable is then allocated an adress
// That is why everytime a code is run, the adress of variable changes
// Adress of each variable is unique

int main(){
    int x=1;
    printf("%d\n",x);           
    printf("%p\n",&x);          // & is used for adress of a variable and %p is used to print adress which have int* data type
    int* pointer = &x;          // This is the way to make a pointer. This pointer is a variable which stores the adress of x
    printf("%p\n",pointer);     // This will print the adress of x
    printf("%p\n",&pointer);    // Pointer also have an adress.
    printf("%d\n",*pointer);    // Using star with a pointer will show the value of variable that it has the adress of
    *pointer = 2;               // We can also change the value of a variable (which in this case is x) using pointers
    printf("%d\n",x);
    return 0;
}
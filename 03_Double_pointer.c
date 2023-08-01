#include<stdio.h>

int main(){
    int variable=10;
    int* pointer= &variable;                          // pointer (int*) can store adress of a int variable
    int** double_pointer = &pointer;                  // double pointer(int**) can store the adress of a pointer 
    int** triple_pointer = &double_pointer;           // triple pointer. Pretty useless. 

    printf("%p\n",&variable);
    printf("%p\n",pointer);                           // These three mean the same. All three print the adress of variable
    printf("%p\n",*double_pointer);

    printf("%d\n",variable);                           
    printf("%d\n",*pointer);                          // These three mean the same. All three print the value of variable
    printf("%d\n",**double_pointer); // using 1 * will bring you to pointer and second * will bring you to the variable.

    printf("%p\n",&pointer);
    printf("%p\n",double_pointer);                    // These two will print adress of pointer

    return 0;
}
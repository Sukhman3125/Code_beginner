#include<stdio.h>

// Mermory allocation in arrays are continous
// For example in int data type each variable takes 4 bytes
// So if variable with index 0 arr[0] has adress lets say 10xy50, then varible with index 1 arr[1] has adress 4 more ie 10xy54

// HEXADECIMAL SYSTEM

// 0 1 2 3 4 5 6 7 8 9 a b c d e f.
// This is the counting in hexadecimal  

int main(){
    int arr[4] = {1,2,3,4};
    printf("%p\n",&arr[0]);
    printf("%p\n",&arr[1]);
    printf("%p\n",&arr[2]);
    printf("%p\n",&arr[3]);
    return 0;
}

// 0061FF10
// 0061FF14
// 0061FF18
// 0061FF1C
// These have diff of 4. 0+4=4
// 0+4=4
// 4+4=8
// 8+4=C (in hexadecimal)
#include<stdio.h>


//if we enter any number greater than the number in the range, for example 32768 (which is a number greater than last digit of short data type) 
// in short dasta type, the cycle will repeat and it will go back to -32768 which is the first number in the range.

//8 bits + 1 byte
//1024 bytes = 1 megabyte

//Every bit can have two operations 1 or 0. 
//If something takes 4 bits, it can store 2^4 things.

//If something takes n bits, then total stored things are 2^n.
//Also range will be -(2^n)/2 to (2^n)/2 -1. This covers a total of 2^n integers.

int main(){

    int;                //Can store integers from  to -2147483648 to 2147483647 , a total of 4294967296 numbers which is 2^32
                        //int data type takes 32 bits or 4 bytes .

    short;              //Can store integers from -32768 to 32767, a total of 65536 numbers which is 2^16
                        //short data type takes 16 bits or 2 bytes . 

    long;               //Can store integers from -2^63 to 2^63-1 , a total of 2^64 numbers 
                        //long data type takes 64 bits or 8 bytes .   

    long long;          //Can store integers from -2^127 to 2^127-1 , a total of 2^128 numbers 
                        //long data type takes 128 bits or 16 bytes . 

    char;               //Can store integers from -128 to 127, a total of 256 numbers which is 2^8
                        //short data type takes 8 bits or 1 bytes .    
                  
    float;              //floats takes 32 bits or 4 bytes .
    return 0;
}
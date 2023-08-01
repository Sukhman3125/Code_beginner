#include<stdio.h> 
//  Upper case characters have ASCII values from 65 to 90 
//  A is 65 , B is 66 and so on
//  Lower case characters have ASCII values from 97 to 122
//  a is 97 , b is 122 and so on
int main(){
    char letter;
    printf("Enter the letter: ");
    scanf("%c",&letter);
    if(letter >= 'A' && letter <= 'Z'){
        printf("Upper case");
    }
    else if(letter >= 'a' && letter <= 'z'){
        printf("Lower case");
    }
    else{
        printf("Enter a valid letter");
    }
    return 0;
}
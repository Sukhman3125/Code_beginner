#include<stdio.h>

int main(){
    int a[10];
    for( int i=0; i<=9; i++ ){       
        printf("Enter element number %d: ",i+1);
        scanf("%d", &a[i]);          
    }
    for( int i=9; i>=0; i-- ){             // We started from reverse  
        printf("%d ", a[i]); 
    }
    return 0;
}
#include<stdio.h>

int main(){
    int a[10];
    for( int i=0; i<=9; i++ ){       // We choose the range of i as the indexes of the array ie 0 to n-1
        printf("Enter element number %d: ",i+1);
        scanf("%d", &a[i]);          // This will scan values from a[0] to a[9]
    }
    for( int i=0; i<=9; i++ ){      
        printf("%d ", a[i]); 
    }
    return 0;
}
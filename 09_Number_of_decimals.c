#include<stdio.h> 

int main(){
    printf("%f\n",10.0/3.0);  // By default, a float will show values upto 6 decimal places
    printf("%.7f\n");         // We can use this to show 7 decimal places
    printf("%.1f\n");         // We can use this to show only 1 decimal place
    return 0;
}
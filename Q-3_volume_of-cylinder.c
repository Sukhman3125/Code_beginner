#include<stdio.h> 

int main(){
    printf("Enter the radius of the cylinder you want the volume of:");
    float r;
    scanf("%f",&r);
    printf("Enter the height of the cylinder you want the volume of:");
    float h;
    scanf("%f",&h);
    printf("The volume of the cylinder is %f",3.14*r*r*h);
    return 0;
}
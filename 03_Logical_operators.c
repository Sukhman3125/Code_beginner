#include<stdio.h> 
// && means and
// || means or
// ! means not 
int main(){
    int age;
    int VipPass=0;
    printf("Enter your age:");
    scanf("%d",&age);
    printf("Do you have a vip pass\nIf yes then press 1 if no then press 0 \n");
    scanf("%d",&VipPass);
    if((age<=70 && age>=18)||!(VipPass==0)){   //This means if anyone is between 70 and 18 or has a vip pass then they can drive
        printf("You can drive \n");
    }
    else{
        printf("You cannot drive \n");
    }
    return 0;
}
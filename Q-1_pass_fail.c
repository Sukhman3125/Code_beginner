#include<stdio.h> 
// write a program to find out whether a student is pass or fail. it reuires 40% marks total and 33% in 
// each subject to pass. assume 3 subjects.
int main(){
    float p,c,m;
    printf("Enter your marks in physics \n");
    scanf("%f",&p);
    printf("Enter your marks in chemistry \n");
    scanf("%f",&c);
    printf("Enter your marks in maths \n");
    scanf("%f",&m);
    if(p>=0 && c>=0 && m>=0){
        printf("Your total marks are %f out of 300 \n",p+c+m);
        printf("Your percentage comes out to be %f percent \n",(p+c+m)/3);
        if(p<33||c<33||m<33||((p+c+m)/3)<40){
            printf("Sorry you failed");
        }
        else{
            printf("Congratulations you passed");
        }
    }
    else{
        printf("There might be some error with the marks you wrote \n");
    }
    
    return 0;
}
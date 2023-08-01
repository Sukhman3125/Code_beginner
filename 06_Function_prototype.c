// We know that we must write functions linewise to avoid errors ie The function which is being called should be before(upar hona chahiye) the function which calls it (just like a varible has to be defined before use)
// But we can also avoid this by using protype

// #include<stdio.h>

// void green(){
//     printf("Green\n");      
//     red();                  
//     return;                 
// }

// void red(){
//     printf("Red\n");        
//     return;                 
// }

// void blue(){
//     printf("Blue\n");       
//     green();                
//     return;                 
// }

// int main(){
//     blue();                 
//     return 0;               
// }

// As we can see this gives error but we can use this instead

#include<stdio.h>

void green(){
    printf("Green\n"); 
    void red();     
    red();                  
    return;                 
}

void red(){
    printf("Red\n");        
    return;                 
}

void blue(){
    printf("Blue\n"); 
    void green();      
    green();                
    return;                 
}

int main(){
    void blue();
    blue();                 
    return 0;               
}

// We can use void func() before actually using it. This way we can use the function anywhere we want their order doesnt matter anymore
// Using void func() declares it first and when we use it, it checks actually where it is defined 
// See 14th file for more detail 
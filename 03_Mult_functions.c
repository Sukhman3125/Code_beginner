#include<stdio.h>

void red(){
    printf("Red\n");        // 6 -- prints Red
    return;                 // 7 -- ends the red function and returns to green which called red
}

void green(){
    printf("Green\n");      // 4 -- prints Green
    red();                  // 5 -- calls red function
    return;                 // 8 -- ends the green function and returns to blue which called green
}

void blue(){
    printf("Blue\n");       // 2 -- prints Blue
    green();                // 3 -- calls green function
    return;                 // 9 -- ends blue function and returns to main which called blue
}

int main(){
    blue();                 // 1 -- Code starts here and calls blue function
    return 0;               // 10 -- Ends the code
}

// NOTE: The function which is being called should be before(upar hona chahiye) the function which calls it (just like a varible has to be defined before use)
#include<stdio.h>

void greet(){                                // We defined the function 'greet'
    printf("Good morning\n");                // Any code can be written here inside the function
    printf("How are you?\n");
    return;                                  // Used to finish the function(after it ends the code will return to where the function was called from)
}

int main(){                                  // Whenever the code starts, first main function starts and code is read inside it line by line

    greet();                                 // Function call (Whenever a function is called, it just starts everything inside that function)
    greet();                                 // Again function called

    return 0;
}
// main ek bar hi aata h
// Every program starts with main function
// We can use unlimited functions in a code
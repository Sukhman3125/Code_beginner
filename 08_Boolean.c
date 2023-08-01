#include<stdio.h> 
#include<stdbool.h>       // Used to include boolean

int main(){
    bool flag = 0;        // This mean flag has false value
    if( flag ){           // As flag returns false. This will not run
        printf("Nothing");
    }
    flag = 1;             // This mean flag has true value
    if( flag ){           // As flag returns true. This will run
        printf("Something\n");
    }
    
    flag = true;          // This also works the same

    if( flag==true ){           
        printf("Something\n");
    }
                                            // Both these work the same
    if( flag ){
        printf("Something\n");
    }

    flag = false;
    
    if( flag == false){
        printf("Something\n");
    }

    return 0;
}
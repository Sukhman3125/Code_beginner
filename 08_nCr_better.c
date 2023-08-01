#include<stdio.h>

float nCr(float n, float r){

    float answer=1;
    float j=n;

    for(float i=r; i>=1; i-- ){
        answer= answer * (j/i);          // Working nCr = n/r * (n-1)/(r-1) * ...... So we decrease i and j each time in loop starting with n and r
        j--;                             // The reason to use float was due to the fact that while calculating, there are non integer values involved like in first step of 50c49 it is 50/49
    }
    return answer;
}

int main(){
    printf("%f",nCr(50,49));
    return 0;
}


// Works better as it doesnt have to calculate large faactorials like in 50c49, it doesnt have to take factorials of 50 and 49
// But when we have to use int values, last one is better
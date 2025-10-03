/*
Name:Joshua kyalo
Reg no:PA106/G/29039/25
Description:to compute compound interest 
Compound Interest=principle(1+rate)^number of times ×time 
*/

#include <stdio.h>

int main() {
    //variable declaration;
    float principle,rate,time,interest;

    //prompt the user to enter principle 
    printf("enter principle");
    scanf("%lf,$principle");

    //prompt the user to enter rate 
    printf("enter rate");
    scanf("%lff, $rate");

    // prompt the user to enter time 
    printf("enter time");
    scanf("%d,$time ");
    
    //prompt the user to enter number of times
    printf("enter n");
    scanf("%d,$n");
    

    //display compound interest 
    printf("compound interest is,%2f");
    return 0;
}

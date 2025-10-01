/*
Name: Joshua kyalo 
Reg no:pa106/g/29039/25
Description:to check eligibility for trial exams
*/

#include <stdio.h>

int main () { 
  

    //variable declaration 
    float attendance,average_marks;
    
    //prompt the user enter attendance 
    printf("enter attendance");
    scanf("%f", &attendance);
    
    //prompt the user to enter average marks 
    printf("enter average_marks");
    scanf("%f", &average_marks);
    
    //check eligibility 
    if(attendance >=75 && average_marks >=40)
    { printf("you are eligible");}
    else
    { printf("Not eligible");}
    
    return 0;
    }
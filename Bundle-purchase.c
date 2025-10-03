/*
Name: Joshua kyalo 
Reg no:PA106/G/29039/25
Description:to compute mobile bundle purchase 
*/

#include <stdio.h>

int main (){
int option;
   
   //display the menu
   printf("1. 100mb @50\n");
   printf("2. 500mb @200\n");
   printf("3. 1GB @350\n");
   printf("4. 2GB @500\n");
   
  //prompt the user 
  printf("enter a option (1-4)\n");
  scanf("%d",option);
  
  // switch statement 
  switch (option){ 
  case 1:
  printf("you selected 100mb @50\n"); 
  break;
  case 2:
  printf("you selected 500mb @200\n");
  break;
  case 3:
  printf("you selected 1GB @350\n"); 
  break;
  case 4:
  printf("you selected 2GB @600\n");
  default: printf("enter between 1-4"); 
  }
  
  
  return 0;
  }
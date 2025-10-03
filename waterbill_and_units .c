/*
Name:Joshua kyalo 
Reg no:PA106/G/29039/25
Description:
*/

int main(){
int units;
float bill; 

    //prompt user to enter number of water bill consumed 
    printf("enter number of water units consumed");
    scanf("%d", &units);
    
    //use if -else to calculate bill
    if(units <=30) { bill =units×20;
    }
    else if(units <=60) { bill =units×25;
    }
    else if(units >=60) { bill =units×30;
    }
    
    //display total bill
    printf("bill is, %2f\n, bill");

    return 0;
    }

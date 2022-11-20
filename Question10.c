// Write a program in C to calculate the power of any number using recursion.

#include <stdio.h>

double GetXPowerY(int x,int y){
    if(y==0)
        return 1;
    else{
        if(y>0)
            return x*GetXPowerY(x,y-1);
        else
            return 1.0/x*GetXPowerY(x,y+1);
    }
}

int main() 
{
    printf("%lf",GetXPowerY(3,4));
    return 0;
}
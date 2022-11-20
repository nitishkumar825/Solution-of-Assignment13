// Write a recursive function to calculate factorial of a given number

#include <stdio.h>

int GetFactorial(int n){
    if(n==1||n==0)
        return 1;
    else
        return n*GetFactorial(n-1);
}
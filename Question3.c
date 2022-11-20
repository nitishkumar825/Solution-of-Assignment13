// Write a recursive function to calculate sum of first N even natural numbers

#include <stdio.h>

int SumOfNEvenNaturalNum(int n){
    if(n==1)
        return 2;
    else
        return (2*n)+SumOfNEvenNaturalNum(n-1);
}
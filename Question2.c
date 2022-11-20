// Write a recursive function to calculate sum of first N odd natural numbers

#include <stdio.h>

int SumOfNOddNaturalNum(int n){
    if(n==1)
        return 1;
    else
        return (2*n-1)+SumOfNOddNaturalNum(n-1);
}
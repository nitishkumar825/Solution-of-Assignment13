// Write a recursive function to calculate sum of first N natural numbers

#include <stdio.h>

int SumOfNNaturalNumber(int n){
    if(n==1)
        return 1;
    else
        return n+SumOfNNaturalNumber(n-1);
}
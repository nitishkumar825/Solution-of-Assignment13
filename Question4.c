// Write a recursive function to calculate sum of squares of first n natural numbers

#include <stdio.h>

int SumOfSquareOfNNaturalNum(int n){
    if(n==1)
        return 1;
    else
        return n*n+SumOfSquareOfNNaturalNum(n-1);
}
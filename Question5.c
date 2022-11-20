// Write a recursive function to calculate sum of digits of a given number

#include <stdio.h>

int SumOfDigits(int n){
    if(n<=9)
        return n;
    else
        return (n%10)+SumOfDigits(n/10);
}
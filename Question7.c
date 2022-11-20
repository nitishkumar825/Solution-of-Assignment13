// Write a recursive function to calculate HCF of two numbers

#include <stdio.h>

int GetHCF(int a,int b){
    if(a%b==0)
        return b;
    if(b%a==0)
        return a;

    if(a>b)
        return GetHCF(a%b,b);
    else
        return GetHCF(a,b%a);
}
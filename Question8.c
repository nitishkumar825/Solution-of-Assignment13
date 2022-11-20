// Write a recursive function to print first N terms of Fibonacci series

#include <stdio.h>

int NthFibonacciTerm(int n){
    if(n==1||n==2)
        return n-1;
    else
        return NthFibonacciTerm(n-1)+NthFibonacciTerm(n-2);
}

void PrintFibonacciSeries(int n){               // Actual function that is going to be called in the main function...
    if(n>0){
        PrintFibonacciSeries(n-1);
        printf("%d ",NthFibonacciTerm(n));
    }
}

int main() 
{
    PrintFibonacciSeries(5);
    return 0;
}
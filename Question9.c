// Write a program in C to count the digits of a given number using recursion.

#include <stdio.h>

int CountDigits(int n){
    int count=0;
    if(n<=9)
        return 1;
    else{
        count++;
        return count+CountDigits(n/10);
    }
}

int main() 
{
    printf("%d",CountDigits(12345));
    return 0;
}
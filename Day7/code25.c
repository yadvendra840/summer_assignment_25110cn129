#include<stdio.h>

    int factorial(int n)
    {
        if (n==0 || n==1) return 1;
        return n*factorial(n-1);
    }
    int main ()
    {
        int n,fact;
        printf("enter the number:");
        scanf("%d",&n);
        fact=factorial(n);
        printf("Factorial=%d\n",fact);
    
    return 0;

}
#include<stdio.h>

    int fibo (int n){
        if  ( n<=2) return 1;
        return fibo (n-1)+fibo(n-2);
    }
int main (){
     int n,faboncci;
     printf("enter the number:");
     scanf("%d",&n);
    faboncci=fibo(n);
     printf("%d",faboncci);
    return 0;

}
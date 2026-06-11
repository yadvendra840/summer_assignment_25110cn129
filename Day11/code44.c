#include <stdio.h>
int factorial(int x){
    int i,fact=1;
for(i=1;i<=x;i++){
    fact=fact*i;
    }
    return fact;
}
int main (){
    int n ;
    printf("enter the number:");
    scanf("%d",&n);
    printf("Factorial: %d",factorial(n));
    return 0;
}
#include<stdio.h>
 int sumdigit(int n)
 {
    if(n==0) return 0;
    return (n%10)+sumdigit(n/10);
 }
 int main (){
    int n;
    printf("enter the nunmber :");
    scanf("%d",&n);
    int sum = sumdigit(n);
    printf("sum of digit = %d", sum);
   
    return 0;
 }
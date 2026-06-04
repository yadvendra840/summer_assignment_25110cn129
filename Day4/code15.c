#include <stdio.h> 
int main (){
    int n,sum=0,r ,temp;
    printf("enter the number :");
    scanf("%d",&n);
 temp=n;
 while ( n>0)
 {
    r=n%10;
    sum=sum+r*r*r;
    n=n/10;

 }
 if ( temp==sum){
    printf(" the number is armstrong");

 }
 else {
    printf("the number is not armstrong");
 }
    return 0;

}
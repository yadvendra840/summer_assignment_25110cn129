#include <stdio.h>
int main () {

   int n,i,sum=0;
   printf("enter the number");
   scanf("%d", &n);
   for (i=1;i<=n;i++)
   {
    sum=sum+i;

   }
   printf("sum of n natural number:%d ",sum);
    return 0;

}
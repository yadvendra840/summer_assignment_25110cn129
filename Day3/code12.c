#include<stdio.h>
int main(){
    int a,b,max;
    printf("enter the first number:");
    scanf("%d",&a);
    printf("enter the second number:");
    scanf("%d",&b);
   max=a>b?a:b;
   while(1)
   {
    if ( max%a==0 && max%b==0)
    {
        printf("LCM =%d",max);
        break;
    }
    max++;
   }
    return 0;

}
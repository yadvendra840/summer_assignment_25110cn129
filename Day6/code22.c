#include <stdio.h>
int main(){
    int bin,dig,dec=0,base=1;
    printf("enter the binary number:");
    scanf("%d",&bin);
 while (bin>0)
{
    dig=bin%10;
    dec=dec+dig*base;
    base=base*2;
    bin=bin/10;
}
printf("Decimal=%d",dec);
return 0;
}

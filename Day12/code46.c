#include <stdio.h>
int temp,s=0;
void armstrong(int a){
while (a>0){
int r=a%10;
s=s+r*r*r;
a=a/10;
}

if (temp==s) printf(" number is armstrong");
else printf(" number is not armstrong");
}

int main (){
int n ;
printf("enter the number:");
scanf("%d",&n);
temp=n;
armstrong(n);
return 0;
}
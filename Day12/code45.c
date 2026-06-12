#include <stdio.h>
int temp,rev=0;
void reverse(int a){
while (a>0){
int r=a%10;
 rev=rev*10+r;
a=a/10;
}

if (temp==rev) printf(" number is palindrom");
else printf(" number is not palindrom");
}

int main (){
int n ;
printf("enter the number:");
scanf("%d",&n);
temp=n;
reverse(n);
return 0;
}
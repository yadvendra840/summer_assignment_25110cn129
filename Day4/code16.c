#include <stdio.h>
int main (){
    int start,end,n,s,temp,r;
    printf("enter the starting number:");
    scanf("%d",&start);
    printf("enter the ending number:");
    scanf("%d",&end);
    for(n=start;n<=end;n++)
    {
        temp=n;
        s=0;
        while(temp>0){
            r=temp%10;
            s=s+r*r*r;
            temp=temp/10;
        
        }
    if (s==n)
    printf("%d\n",n);
    }

    return 0;

}
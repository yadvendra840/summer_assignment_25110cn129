#include <stdio.h>
int main (){
    int x ,n,i,result=1;
    printf("enter the number:");
    scanf("%d",&x);
     printf("enter the power:");
     scanf("%d",&n);
    for(i=0;i<n;i++){
        result=result*x;
    }
    printf("%d to the power %d:%d",x,n,result);

return 0;
}
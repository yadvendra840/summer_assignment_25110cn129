#include <stdio.h>
int main(){
    int n,i,a=0,b=1,c;
    printf("enter the number :");
    scanf("%d",&n);
    if (n==1)
    {
        printf("Nth fabonacci: %d",a);

    }
else if  (n==2)
{
    printf("Nth favonacci:%d",b);

}
else{
    for(i=3;i<=n;i++){
        c=a+b;
        a=b;
        b=c;
    }
    printf("Nth faconacci term:%d",b);
}
    return 0;

}
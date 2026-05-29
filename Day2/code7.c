#include <stdio.h>
int main(){
    int n,product=1,r;
    printf("Enter the number");
    scanf("%d",&n);
    while (n>0)
    {
        r=n%10;
        product=product*r;
        n=n/10;}
        
        printf(" product of the  digit:%d",product);
    

    return 0;

}
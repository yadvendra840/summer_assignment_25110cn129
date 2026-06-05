#include<stdio.h>
int main(){
    int n,rem,temp,sum=0,fact,i;
    printf(" enter the number :");
    scanf("%d",&n);
    temp=n;
    while(temp>0){
        rem=temp%10;
        fact=1;
        for(i=1;i<=rem;i++){
            fact=fact*i;

        }   
    sum=sum+fact;
temp=temp/10;
}
if (sum==n)
{
    printf("%d is  strong number",n);

}
else {
    printf("%d is not strong number",n);
}
    return 0;

}
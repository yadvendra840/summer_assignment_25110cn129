#include <stdio.h> 
int main()
{
    int n,count =0;
    printf("enter the number:");
    scanf("%d",&n);
    while (n!=0);
{
    n=n/10;
    count++;
}
printf("the digit of the given number=%d",count);
    return 0;

}
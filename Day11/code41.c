#include <stdio.h>
int add (int a,int b){
     int sum=a+b;
    return sum;
}
int main(){
    int x,y;
    printf("enter the  1st number: ");
    scanf("%d",&x);
    printf("enter the  2nd number: ");
    scanf("%d",&y);
    int sum=add(x,y);
    printf("sum of two numbers:%d",sum);
    return 0;
}
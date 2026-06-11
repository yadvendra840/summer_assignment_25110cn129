#include<stdio.h>
void prime(int n){
    int i, a=1;
    for (i=2;i<n;i++){
        if (n%i==0){
            a=0;
            break;
        }
    }
    if (a==1 && n>1) printf("prime  number");
    else printf("not a  prime number");
}
int main (){
    int n;
    printf("enter a number:");
    scanf("%d",&n);
    prime(n);
    return 0;
}
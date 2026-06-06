#include <stdio.h> 

    void binary (int n){
        if (n==0) return ;
        binary(n/2);
        printf("%d", n%2);
    }
int main (){
    int n;
    printf("enter the decimal number:");
    scanf("%d",&n);
    printf("Binary=");
    if (n==0) printf("0");
    else 
    binary(n);
    return 0;
}
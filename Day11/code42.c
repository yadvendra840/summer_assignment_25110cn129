#include <stdio.h>
int maximum(int a,int b){
    if (a>b) return a;
    else return b;
}
int main(){
    int x,y;
    printf("enter the  1st number: ");
    scanf("%d",&x);
    printf("enter the  2nd number: ");
    scanf("%d",&y);
    int max =maximum(x,y);
    printf("Maximum:%d",max);
    return 0;
}
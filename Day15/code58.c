#include<stdio.h>
int main(){
    int arr[10],n,i,temp;
    printf("enter the size of an array:");
    scanf("%d",&n);
    printf("enter array element:");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    temp=arr[0];
    for(i=0;i<n-1;i++){
        arr[i]=arr[i+1];
    }
    arr[n-1]=temp;
    printf("Rotate of an array left:");
    for(i=0;i<n;i++){
        printf("%d",arr[i]);
    }
    return 0;
}
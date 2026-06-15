#include<stdio.h>
int main(){
    int arr[10],n,i,temp;
    printf("enter the size of an array:");
    scanf("%d",&n);
    printf("enter array element:");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    temp=arr[n-1];
    for(i=n-1;i>0;i--){
        arr[i]=arr[i-1];
    }
    arr[0]=temp;
    printf("Rotate of array right:");
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}
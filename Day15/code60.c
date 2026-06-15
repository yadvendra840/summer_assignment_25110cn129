#include<stdio.h>
int main(){
    int arr[10],n,i,temp,j=0;
    printf("enter the size of an array:");
    scanf("%d",&n);
    printf("enter array element:");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
   for (i=0;i<n;i++){
    if(arr[i]!=0){
        temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        j++;
    }
   }
    printf("New array moves zero to end:");
    for(i=0;i<n;i++){
        printf("%d",arr[i]);
    }
    return 0;
}
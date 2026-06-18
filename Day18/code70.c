#include <stdio.h>
int main(){
    int n,i,j,temp,arr[50];
    printf("enter the size of array:");
    scanf("%d",&n);
    printf("enter %d element:",n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n-1;i++){
        int min=i;
        for(j=i+1;j<n;j++){
            if(arr[j]<arr[min]){
                min=j;

            }
        }
        temp=arr[i];
        arr[i]=arr[min];
        arr[min]=temp;
        printf("\n");
    }
    printf("sorted array:");
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}
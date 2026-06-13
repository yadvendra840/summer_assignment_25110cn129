#include <stdio.h>
int main(){
    int arr[15],n,i,largest,smallest;
    printf("enter the no of element:");
    scanf("%d",&n);
    for( i=0;i<n;i++){
    printf("enter the %d element:",i);
    scanf("%d",&arr[i]);
}
 for( i=0;i<n;i++){
   printf("%d ",arr[i]);
}
printf("\n");
    largest =arr[0];
    smallest=arr[0];
for(i=0;i<n;i++){
    if(arr[i]>largest){
        largest=arr[i];
    }
    if (arr[i]<smallest){
        smallest=arr[i];
    }
}
    printf("largest element:%d\n",largest);
    printf("smallest element:%d\n",smallest);
    return 0;
    
}
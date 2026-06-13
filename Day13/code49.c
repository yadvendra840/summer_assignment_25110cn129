#include <stdio.h>
int main(){
    int arr[15],n,i;
    printf("enter the no of element:");
    scanf("%d",&n);
    for( i=0;i<n;i++){
    printf("enter the %d element:",i);
    scanf("%d",&arr[i]);
}
 for( i=0;i<n;i++){
   printf("%d ",arr[i]);
}
    return 0;
    
}
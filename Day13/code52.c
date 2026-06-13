#include <stdio.h>
int main(){
    int arr[15],n,i,even=0,odd=0;
    printf("enter the no of element:");
    scanf("%d",&n);
    for( i=0;i<n;i++){
    printf("enter the %d element:",i);
    scanf("%d",&arr[i]);
}
 for( i=0;i<n;i++){
   printf("%d ",arr[i]);
 }
 
 for (i=0;i<n;i++){
    if (arr[i]%2==0){
        even++;
    }

    if (arr[i]%2!=0){
        odd++;
    }
 }
 printf("\n");
    printf("even element:%d\n",even);
printf("odd element:%d",odd); 
    return 0;
    }
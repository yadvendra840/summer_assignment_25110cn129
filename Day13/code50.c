#include <stdio.h>
int main(){
    int arr[15],n,i,sum=0;
    float average;
    printf("enter the no of element:");
    scanf("%d",&n);
    for( i=0;i<n;i++){
    printf("enter the %d element:",i);
    scanf("%d",&arr[i]);
}
 for( i=0;i<n;i++){
   printf("%d ",arr[i]);
   sum=sum+arr[i];
  
}
 average=(float)sum/n;
printf("\n");

printf("sum of array:%d\n",sum);
printf("average of array:%.3f",average);
    return 0;
    
}
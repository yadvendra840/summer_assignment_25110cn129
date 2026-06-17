#include <stdio.h>
int main(){
int i,j,n1,n2,arr[50],brr[50];
printf("enter the size of first array :");
scanf("%d",&n1);
printf("enter element of first array:");
for(i=0;i<n1;i++){
    scanf ("%d",&arr[i]);
    }
    printf("enter the size of second array :");
scanf("%d",&n2);
printf("enter element of second array:");
for(i=0;i<n2;i++){
    scanf ("%d",&brr[i]);}
printf("intersection of array:");
for(i=0;i<n1;i++){
    for(j=0;j<n2;j++)
    if(arr[i]==brr[j]){
    printf("%d ",arr[i]);
    break;
    }
}
    return 0; 

} 
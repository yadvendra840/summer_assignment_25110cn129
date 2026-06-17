#include <stdio.h>
int main(){
int i,j,k=0,n1,n2,arr[50],brr[50],crr[100],flag;
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
for(i=0;i<n1;i++){
    crr[k]=arr[i];
    k++;
}
 for(i=0;i<n2;i++){
   flag=0;

for(j=0;j<n1;j++){
    if(brr[i]==arr[j]){
        flag=1;
        break;
    }
}
if(flag==0){
    crr[k]=brr[i];
    k++;
}
 }
printf("union of array:");
for(i=0;i<k;i++){
    printf("%d ",crr[i]);
}
    return 0; 

} 
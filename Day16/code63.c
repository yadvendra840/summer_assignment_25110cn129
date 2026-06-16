#include <stdio.h>
int main(){
int n,i,j,sum;
printf("enter the size of an array :");
scanf("%d",&n);
int arr[n];
printf("enter element:");
for(i=0;i<n;i++){
    scanf ("%d",&arr[i]);
    }
    printf("enter sum :");
    scanf("%d",&sum);
    for(i=0;i<=n;i++){
        for(j=i+1;j<n;j++){
            if(arr[i]+arr[j]==sum){
                printf("pair of sum of %d+%d : %d \n",arr[i],arr[j],sum);
            }
        }
    }
    return 0; 

}  
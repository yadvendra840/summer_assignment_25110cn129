#include <stdio.h>
int main(){
int i,j,n,arr[50][50],sum=0;
printf("enter the order of square matrix :");
scanf("%d",&n);
printf("enter element of first matrix:");
for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++){
scanf("%d",&arr[i][j]);
        }
    }
for(i=0;i<n;i++)
  {
sum=sum+arr[i][i];
        }
        printf("sum of diagonal elements :%d \n",sum);
    return 0; 

} 
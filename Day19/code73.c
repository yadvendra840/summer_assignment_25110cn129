#include <stdio.h>
int main(){
int i,j,r,c,arr[50][50],brr[50][50],sum[50][50];
printf("enter the row and column  :");
scanf("%d%d",&r,&c);
printf("enter element of first matrix:");
for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++){
scanf("%d",&arr[i][j]);
        }
    }
printf("enter element of second matrix:");
for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++){
scanf("%d",&brr[i][j]);
        }
    }
    printf("sum of matrix:\n");
for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++){
sum[i][j]=arr[i][j]+brr[i][j];
printf("%d\t",sum[i][j]);
        }
        printf("\n");
    }
    return 0; 

} 
#include <stdio.h>
int main(){
int i,j,r,c,arr[50][50];
printf("enter the row and column  :");
scanf("%d%d",&r,&c);
printf("enter element of first matrix:");
for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++){
scanf("%d",&arr[i][j]);
        }
    }
    printf("Transpose of matrix:\n");
for(i=0;i<c;i++)
    {
        for(j=0;j<r;j++){

printf("%d\t",arr[j][i]);
        }
        printf("\n");
    }
    return 0; 

} 
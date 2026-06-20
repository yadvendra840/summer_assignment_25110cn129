#include <stdio.h> 
int main(){
    int arr[20][20],i,j,r,c,sum;
    printf("order of matrix:\n");
    scanf("%d%d",&r,&c);
  printf("enter the element of  matrix:\n");
        for (i=0;i<r;i++){
            for(j=0;j<c;j++){
                scanf("%d",&arr[i][j]);
            }
        }

    printf("Row wise sum  of matrix\n ");
    for (i=0;i<r;i++){
        sum=0;
        for(j=0;j<c;j++){
            sum=sum + arr[i][j];
        }
        printf("sum of row %d : %d\n",i+1,sum);
    }
    return 0;
}



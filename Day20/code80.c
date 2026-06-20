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

    printf("column wise sum  of matrix\n ");
    for(j=0;j<c;j++){
        sum=0;
    for (i=0;i<r;i++){
            sum=sum + arr[i][j];
        }
        printf("sum of column %d : %d\n",i+1,sum);
    }
    return 0;
}



#include <stdio.h> 
int main(){
    int arr[20][20],brr[20][20],crr[20][20],i,j,k,r1,c1,r2,c2;
    printf("order of first matrix:\n");
    scanf("%d%d",&r1,&c1);
     printf("order of second matrix:\n");
    scanf("%d%d",&r2,&c2);
    if (r2!=c1){
        printf(" matrix multiplicaation is not possible");
    }
    else{
        printf("enter the element of first matrix:");
        for (i=0;i<r1;i++){
            for (j=0;j<c1;j++){
 scanf("%d",&arr[i][j]);
            }
        }
        printf("enter the element of second matrix :");
         for (i=0;i<r2;i++){
            for (j=0;j<c2;j++){
 scanf("%d",&brr[i][j]);
             }
        }
        printf("multiplication of matrix\n");
         for (i=0;i<r1;i++){
            for (j=0;j<c1;j++){
                crr[i][j]=0;
                for(k=0;k<c1;k++){
                    crr[i][j]=crr[i][j]+arr[i][k]*brr[k][j];
                }
            }
        }
        printf("Resultant matrix\n");
         for (i=0;i<r1;i++){
            for (j=0;j<c2;j++){
                printf("%d\t",crr[i][j]);
            }
            
printf("\n");
        }
    }
    return 0;

}
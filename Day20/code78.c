#include <stdio.h>
int main(){
    int arr[10][10],i,j,n,flag=1;
    printf( "enter order of matrix:");
    scanf("%d",&n);
    printf("enter the element of the matrix:");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d",&arr[i][j]);
        }
    }
        for(i=0;i<n;i++){
        for(j=0;j<n;j++){
           if(arr[i][j]!=arr[j][i]){
            flag=0;
            break;
           }
        }
    }
    if(flag==1){
        printf("it is a symmetric matrix");
    }
    else{
        printf (" it is not a symmetrix matrix");
    }
    return 0;

}
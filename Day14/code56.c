#include<stdio.h>
int main(){
    int arr[7];
     printf("enter array: \n");
    for(int i=0;i<=6;i++){
        printf("arr[%d]=",i);
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<=6;i++){
        for (int j=i+1;j<=6;j++){
            if (arr[i]==arr[j]){
                printf("%d is the duplicate element\n",arr[i]);
                break;
            }
        }
    }
   return 0;
}
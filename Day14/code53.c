#include <stdio.h>
int main(){
    int i,arr[10],n,pos=-1;
    printf("enter array: \n");
    for(i=0;i<10;i++){
        printf("arr[%d]=",i);
        scanf("%d",&arr[i]);
    }
    printf("enter the number of search:");
    scanf("%d",&n);
    for (i=0;i<10;i++){
        if (n==arr[i]){
            pos=i+1;
        }
    }
        if(pos==-1){
printf("number not fumnd");

        }
        else{
            printf("position=%d",pos);
        }
        return 0;
    
}
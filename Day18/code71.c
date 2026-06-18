#include <stdio.h>
#include<limits.h>
int main(){
    int n,item,loc=-1,arr[50];
    printf("enter the size of array");
    scanf("%d",&n);
    printf("enter the sorted array:");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("enter the element to be found : ");
    scanf ("%d",&item);
   int beg=0;
   int end=n-1;
   int mid=(beg+end)/2;

       while(beg<=end && arr[mid]!=item){
        if(item>arr[mid])
        {
            beg=mid+1;
        }
        else{
            end =mid-1;
        }
        mid=(beg+end)/2;
       }
       if(item==arr[mid]){
        loc=mid;
        printf("element %d is found at %d position ",item,loc);

       }
       else if (loc=-1){
        printf("search is uncessful");
       }

    return 0;
}
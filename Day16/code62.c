#include <stdio.h>
int main(){
    int n,i,j,count ,maxcount=0,f;
    printf("enter the size of an array:");
    scanf("%d",&n);
    int arr[n];
    printf("enter array:");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for (i=0;i<n;i++){
        count=1;
        for(j=i+1;j<n;j++){
            if (arr[i]==arr[j]){
                count++;
            }
            if (count>maxcount){
                maxcount=count;
                f=arr[i];
            }
        }
    }
    printf( "maximum frequency of the element:%d\n",f);
    printf("Frequency=%d",maxcount);
    
    return 0;

}
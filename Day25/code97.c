#include <stdio.h>
int main (){
    int i,j,k,n1,n2,arr[50],brr[50],crr[100];
    printf("enter the size of first array: ");
    scanf("%d",&n1);
    printf("enter the element of first array:");
    for(i=0;i<n1;i++){
        scanf("%d",&arr[i]);
    }
    printf("enter the size of second array: ");
    scanf("%d",&n2);
     printf("enter the element of second array:");
    for(i=0;i<n2;i++){
        scanf("%d",&brr[i]);
    }
    i=j=k=0;
    while(i<n1 && j<n2){
        if(arr[i]<=brr[j])
{
    crr[k]=arr[i];
    i++;
}    
else{
    crr[k]=brr[j];
    j++;
}
k++;
    }
    while(i<n1){
        crr[k]=arr[i];
        i++;
        k++;
    }
    while(j<n2){
        crr[k]=brr[j];
        j++;
        k++;
    }
    printf("merged Array:\n");
    for(i=0;i<k;i++){
        printf("%d ",crr[i]);
    }
    return 0;

}
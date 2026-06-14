#include <stdio.h>
int main(){
  int arr[100],i,f,n,count=0;
  printf("enter the number of element:");
  scanf("%d",&n);
  printf("enter array element:");
  for(i=0;i<n;i++){
    scanf("%d",&arr[i]);

  }
  printf("enter element to find frequency:");
  scanf("%d",&f);
  for(i=0;i<n;i++){
    if (arr[i]==f){
        count++;
    }
  }
  printf("Frequency of %d = %d",f,count);
        return 0;
    
}
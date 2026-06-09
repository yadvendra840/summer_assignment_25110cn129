#include <stdio.h>
int main(){
    int i,j,n;
    printf("enter the number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for (j=1;j<=i;j++){
            char ch='A'+i-1;
            printf("%c",ch);
          }
        printf("\n");
    }
    return 0;
    }
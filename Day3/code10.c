#include <stdio.h> 
 int main(){
    int start,end ,n,i,j,prime ;
    printf(" enter the starting numbe :");
    scanf("%d",&start);
    printf(" enter the ending number :");
    scanf("%d",&end);
    printf("prime Number:\n");
    for (i=start;i<=end ;i++){
        if (i<=1){
            continue;
        }
        prime =1;
        for (j=2; j<=i/2;j++)   {
            if(i%j==0){
                prime=0;
                break;
            }
        }
        if (prime){
            printf("%d\n",i);
        }
     }

    return 0;
 }
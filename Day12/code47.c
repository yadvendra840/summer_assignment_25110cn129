#include <stdio.h>
void fabo(int n){
    int a=0,b=1,c,i;
    printf("%d %d ",a,b);
    for (i=3;i<=n;i++)
  {
      int  c=a+b;
  printf("%d ",c);
    a=b;
    b=c;
}
}
    int main (){
        int n;
        printf("enter the number:");
        scanf("%d",&n);
        fabo(n);
       
    
    return 0;

}
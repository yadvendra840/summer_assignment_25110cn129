#include <stdio.h>
int main(){
    char str[50];
    int i=0,lower=0,upper=0;
    printf(" enter string :");
   gets(str);
    while(str[i]!='\0'){
        if(str[i]>='A' && str[i]<='Z'){
        upper++;
        }
    else if (str[i]>='a' && str[i]<='z')
    lower++;
    i++;
        }
    printf("UPPER CASE:%d\n",upper);
    printf("LOWER CASE:%d",lower);
    return 0;
}
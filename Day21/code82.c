#include <stdio.h>
int main(){
    char str[50],rev[50];
    int i,l=0;
    printf("enter string:");
    gets(str);
    while(str[l]!='\0'){
        l++;
    }
    for(i=0;i<l;i++){
        rev[i]=str[l-1-i];
    }
    rev[i]='\0';
    printf("Reverse the string :%s",rev);
    return 0;
}
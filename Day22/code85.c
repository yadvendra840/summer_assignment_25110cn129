#include <stdio.h>
#include<string.h>
int main(){
    char str[50],rev[50];
    int i,l;
    printf("enter string: ");
    scanf("%s",str);
    l=strlen(str);
    for(i=0;i<l;i++){
        rev[i]=str[l-1-i];
    }
    rev[i]='\0';
    if(strcmp(str,rev)==0)
    printf("string is palindrom");
    else
    printf("string is not palindrom");
    return 0;

}
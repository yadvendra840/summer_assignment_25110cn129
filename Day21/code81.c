#include <stdio.h>
int main(){
    char str[50];
    int i=0,l=0;
    printf("enter string:");
    gets(str);
    while(str[i]!='\0'){
        l++;
        i++;
    }
    printf("Length of the string :%d",l);
    return 0;
}
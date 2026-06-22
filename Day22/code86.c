#include <stdio.h>
int main (){
    char str[50];
    int i,count=1;
    printf("enter a  sentence: ");
    fgets(str,sizeof(str),stdin);
    for(i=0;str[i]!='\0';i++){
        if(str[i]==' ')
        count++;
    }
    printf("NUmber of words : %d",count);
    return 0;

}
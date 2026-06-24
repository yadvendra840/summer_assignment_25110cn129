#include <stdio.h>
#include <string.h>
int main(){
    char str[50];
    int i,count;
    printf("enter string :");
    fgets(str,sizeof(str),stdin);
    str[strcspn(str,"\n")]='\0';
    for(i=0;str[i]!='\0';i++){
        count=1;
        while(str[i]==str[i+1]){
            count++;
            i++;
        }
        printf("%c%d",str[i],count);
    }
    return 0;

}
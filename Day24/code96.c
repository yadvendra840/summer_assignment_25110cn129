#include <stdio.h>
#include <string.h>
int main(){
    char str[50];
    int i,j,duplicate;
    printf("enter string :");
    fgets(str,sizeof(str),stdin);
    str[strcspn(str,"\n")]='\0';
    for(i=0;str[i]!='\0';i++){
        duplicate=0;
       for(j=0;j<i;j++){
        if(str[i]==str[j]){
duplicate=1;
break;
        }
       }
       if(!duplicate){
        printf("%c",str[i]);
    }
}
    return 0;

}
#include <stdio.h>
int main (){
    char str[50];
    int i,j,count;
    printf("enter string: ");
    fgets(str,sizeof(str),stdin);
    for(i=0;str[i]!='\0' && str[i]!='\n';i++){
        count=0;
        for(j=0;str[j]!='\0' &&  str[j]!='\n';j++){
            if(str[i]==str[j])
            {
                count++;
            }
        }
        if ( count==1){
            printf("FIrst non repeating character: %c",str[i]);
           return 0;
        }
    }

    printf("There is no non repeating character  ");
    return 0;

}
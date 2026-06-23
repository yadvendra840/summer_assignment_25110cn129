#include <stdio.h>
int main (){
    char str[50];
    int i,j;
    printf("enter string: ");
    fgets(str,sizeof(str), stdin);
    for(i=0;str[i]!='\0' && str[i]!='\n';i++){
        for(j=i+1;str[j]!='\0' &&  str[j]!='\n';j++){
            if(str[i]==str[j])
            {
                printf("FIrst repeating character: %c",str[i]);
            return 0;
            }
        }
        
    }

    printf("There is no non repeating character  ");
    return 0;

}
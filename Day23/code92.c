#include <stdio.h>
int main (){
    char str[50],maxchar;
    int i,j,count,max=0;
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
        if ( count>max){
           max=count;
           maxchar=str[i];
        }
    }

    printf("Maximun occurring character: %c\n ",maxchar);
    printf("Frequency : %d",max);
    return 0;

}
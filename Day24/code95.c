#include <stdio.h>
#include <string.h>
int main (){
    char str[100],longest[50];
    int i=0,j=0,max=0;
    printf("enter a sentence :");
    fgets(str,sizeof(str),stdin);
    char word[50];
    for(i=0; ; i++)
    {
        if(str[i]!=' ' && str[i]!='\0' && str[i]!= '\n')
        {
            word[j++]=str[i];
        } 
        else {
            word[j]='\0';
            if(j>max){
                max=j;
                strcpy(longest,word);
            }
            j=0;
            if(str[i]=='\0'|| str[i]=='\n')
            break;
        }
    }
    printf("Longest word:%S\n",longest);
    printf("Length:%d\n",max);
    return 0;
    
}
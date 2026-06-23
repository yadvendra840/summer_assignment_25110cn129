#include <stdio.h>
#include<string.h>
int main (){
    char str1[50],str2[50];
    int i,j,l1,l2,temp;
    printf("enter first string: ");
    fgets(str1,sizeof(str1),stdin);
     printf("enter second string: ");
    fgets(str2,sizeof(str2),stdin);
    l1=strlen(str1)-1;
    l2=strlen(str2)-1;
    if(l1 != l2){
        printf("not anagram");
        return 0;
    }
    for(i=0;i<l1-1;i++){
        for(j=i+1;j<l1;j++){
            if(str1[i]>str1[j])
            {
                temp=str1[i];
                str1[i]=str1[j];
                str1[j]=temp;
            }
            if(str2[i]>str2[j]){
                temp=str2[i];
                str2[i]=str2[j];
                str2[j]=temp;
            }
            }
        }
        if (strcmp(str1,str2)==0){
            printf("Anagram string");
        }
        else
        printf ("not anagram string");
           return 0;
        }
  
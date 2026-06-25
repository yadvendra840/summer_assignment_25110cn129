#include<stdio.h>
int main(){
    char str1[50],str2[50];
    int i,j;
    printf ("enter first string: ");
    fgets(str1, sizeof(str1),stdin);
    printf ("enter second string: ");
    fgets(str2, sizeof(str2),stdin);
    printf("common Character: ");
    for(i=0;str1[i] !='\0';i++){
        for(j=0;str2[j]!='\0';j++){
            if(str1[i]==str2[j] && str1[i]!='\n'){
                printf("%c ",str1[i]);
                break;
            }
        }
    }
    return 0;
}
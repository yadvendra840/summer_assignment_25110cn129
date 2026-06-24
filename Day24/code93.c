#include <stdio.h>
#include <string.h>
int main(){
    char str1[50],str2[50],temp[100];
    printf("enter first string :");
fgets( str1 ,sizeof(str1),stdin);
    printf("enter second string :");
fgets( str2 ,sizeof(str2),stdin);
str1[strcspn(str1,"\n")]='\0';
str2[strcspn(str2,"\n")]='\0';
if(strlen(str1) !=strlen(str2)){
    printf("string are not rotation\n");
    return 0;

}
strcpy(temp,str1);
strcpy(temp,str2);
if(strstr(temp,str2))
printf("string are rotation of each other\n");
else
printf("string are not rotation\n");
return 0;
}
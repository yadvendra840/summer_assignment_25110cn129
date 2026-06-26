#include<stdio.h>
    struct student{
    int roll;
    char name[50];
    float marks;
    };
    int main(){
struct student s[50];
int i,n;
printf("Enter number of student :");
scanf ("%d",&n);
for(i=0;i<n;i++){
printf("\n Student %d \n",i+1);
printf("Enter Roll number:");
scanf("%d",&s[i].roll);
printf("Enter name:");
scanf("%s",s[i].name);
printf("enter marks :");
scanf("%f",&s[i].marks);

}
printf("\n----Student record ----\n");
for(i=0;i<n;i++){
    printf("\n Student %d\n",i+1);
    printf("Marks : %d\n",s[i].roll);
    printf("Name : %s \n",s[i].name);
    printf("Marks:%.2f\n",s[i].marks );
}
    return 0;

}
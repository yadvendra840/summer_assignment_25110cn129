#include<stdio.h>
    struct Employee{
    int id;
    char name[50];
    float salary;
    };
    int main(){
struct Employee emp[50];
int i,n;
printf("Enter number of employees :");
scanf ("%d",&n);
for(i=0;i<n;i++){
printf("\n Employee %d \n",i+1);
printf("Enter Employee id :");
scanf("%d",&emp[i].id);
printf("Enter name:");
scanf("%s",emp[i].name);
printf("enter salary :");
scanf("%f",&emp[i].salary);

}
printf("\n----Employee record ----\n");
for(i=0;i<n;i++){
    printf("\n Employee %d\n",i+1);
    printf("ID : %d\n",emp[i].id);
    printf("Name : %s \n",emp[i].name);
    printf("salary:%.2f\n",emp[i].salary );
}
    return 0;

}
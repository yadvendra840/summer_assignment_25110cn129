#include<stdio.h>
struct Employee{
    int id;
    char name [50];
    float basicsalary ,hra , da ,grosssalary;

};
int main(){
    struct Employee emp;
    printf("Enter Employee ID:");
    scanf("%d",&emp.id);
    printf("Enter Employee Name:");
    scanf("%s",&emp.name);
    printf("Enter basic salary:");
    scanf("%f",&emp.basicsalary);
    emp.hra=.20*emp.basicsalary;
    emp.da=.10*emp.basicsalary;
    emp.grosssalary=emp.basicsalary+emp.hra+emp.da;
    printf("\n----Salary Details----\n");
    printf("Employee  ID:%d\n",emp.id);
    printf("Employee Name:%s\n",emp.name);
    printf("Basic salary:%.2f\n",emp.basicsalary);
    printf("HRA:%.2f\n",emp.hra);
printf("DA:%.2f\n",emp.da);
printf("Gross salary:%.2f\n",emp.grosssalary);
return 0;
}
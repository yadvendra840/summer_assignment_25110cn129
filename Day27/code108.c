#include<stdio.h>
int main (){
    char name[50];
    int roll;
float m1,m2,m3,m4,m5;
float total,percentage;
printf("enter Student Name :");
fgets (name,sizeof (name),stdin);
printf("Enter Roll number :");
scanf("%d",&roll);
printf("Enter marks  of 5 subject:\n");
scanf("%f %f%f%f%f",&m1,&m2,&m3,&m4,&m5);
total=m1+m2+m3+m4+m5;
percentage=total/5;
printf("\n=====Marksheet=====\n");
printf("Student Name:%s",name);
printf("Roll number:%d\n",roll);
printf("subject 1:%.2f\n",m1);
printf("subject 2:%.2f\n",m2);
printf("subject 3:%.2f\n",m3);
printf("subject 4:%.2f\n",m4);
printf("subject 5:%.2f\n",m5);
printf("Total Marks:%.2f\n",total);
printf("Percentage:%.2f\n",percentage);
if(percentage>=90){
    printf("Grade :A+\n");
}
else if
(percentage>=90){
    printf("Grade :A+\n");
}
else if(percentage>=80){
    printf("Grade :A\n");
}
else if(percentage>=70){
    printf("Grade B\n");
}
else if(percentage>=60){
    printf("Grade :C\n");
}
else {
    printf("Grade:D\n");
}
if(percentage>=40)
printf("Pass\n");
else
 printf("Fail\n");
return 0;
}

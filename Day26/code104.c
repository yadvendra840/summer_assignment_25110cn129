#include<stdio.h>
int main(){
    int answer,score=0;
    printf("==== QUIZ APPLICATION====");
    printf("\n 1. What is the capital of India? \n");
    printf("1.Mumbai\n 2.Delhi\n3.Goa\n4. Channai\n");
    printf("Enter your answer:");
    scanf("%d",&answer);
    if(answer==2)
    score++;
    printf("2.  Which language is mainly used for system programming ?\n");
    printf("1.HTML\n2. CSS\n3. C \n4.SQL\n");
    printf("enter your answer:");
    scanf("%d",&answer);
    if(answer==3)
    score++;
    printf("Quiz completed!\n");
    printf("Your score :%d",score);
    return 0;
}
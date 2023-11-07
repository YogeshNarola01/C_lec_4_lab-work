#include<stdio.h>
#include<conio.h>

void main(){
int g,s,m,ss,e,sn;
float sum=0;
clrscr();
printf("Fiend the 10th mark's average percentage: \n\n");
printf("Enter the Gujrati mark's:- ");
scanf("%d",&g);
printf("Enter the Science mark's:- ");
scanf("%d",&s);
printf("Enter the Mathematics mark's:- ");
scanf("%d",&m);
printf("Enter the Soc.Science mark's:- ");
scanf("%d",&ss);
printf("Enter the English mark's:- ");
scanf("%d",&e);
printf("Enter the Sanskrit mark's:- ");
scanf("%d",&sn);
sum=(g+s+m+ss+e+sn);
printf("Ans is :- %0.2f",sum/6);
getch();
}
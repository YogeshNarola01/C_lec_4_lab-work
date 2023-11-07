#include<stdio.h>
#include<conio.h>

void main(){
int a,b,c,d,e,f,g;
float sum=0;
clrscr();
printf("Find the any std total mark's and average parcentage : \n\n");
printf("Enter the subject mark's : ");
scanf("%d",&a);
printf("Enter the subject mark's : ");
scanf("%d",&b);
printf("Enter the subject mark's : ");
scanf("%d",&c);
printf("Enter the subject mark's : ");
scanf("%d",&d);
printf("Enter the subject mark's : ");
scanf("%d",&e);
printf("Enter the subject mark's : ");
scanf("%d",&f);
printf("Enter the subject mark's : ");
scanf("%d",&g);
sum=(a+b+c+d+e+f+g);
printf("Total mark's %0.2f \n",sum);
printf("Avrage percentage %0.2f",sum/7);
getch();
}
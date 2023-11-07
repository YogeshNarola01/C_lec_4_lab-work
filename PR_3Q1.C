#include<stdio.h>
#include<conio.h>
void main()
{
   const float pi= 3.14;
     int r;
     float sum=0;
     clrscr();
     printf("Find the area of circle :\n");
     printf("enter value of circle lenth :-");
     scanf("%d",&r);
	printf("enter value of circle height :-");
     scanf("%d",&r);
     sum = pi*r*r;
     printf("Ans = %0.2f",sum);
     getch();
}
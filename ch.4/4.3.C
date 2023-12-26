#include<stdio.h>
#include<conio.h>
void main()
{
int x,y,z,ans;
clrscr();
printf("enter the number of x");
scanf("%d,ans");

printf("enter the number of y");
scanf("%d,ans");

printf("enter the number of z");
scanf("%d,ans");

ans=(x*x*x)+(3*x*x*y)+(3*x*y*y)+(y*y*y);
printf("\n %d",ans);

getch();
}
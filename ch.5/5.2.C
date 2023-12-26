#include<stdio.h>
#include<conio.h>
void main()
{
int x,y,ans;
clrscr();
 printf("enter the number of x");
 scanf("%d",x);

 printf("enter the number of y");
 scanf("%d",y);

ans=(x*x)+(2*x*y)+(y*y);
printf("\n ans=%d",ans);



getch();
}
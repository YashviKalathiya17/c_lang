#include<stdio.h>
#include<conio.h>

main()
{
	 int x,y,formula;
	 clrscr();
	 printf("Enter value of x: ");
	 scanf("%d",&x);
	 printf("Enter value of y: ");
	 scanf("%d",&y);
	 formula = (x*x*x) + (3*x*x*y) + (3*x*y*y) + (y*y*y);
	 printf("formula : %d",formula);
	 getch();
}
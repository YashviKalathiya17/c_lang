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
	 formula=(x*x) + (y*y) + (2*x*y);
	 printf( "formula : %d",formula);
	 getch();
}

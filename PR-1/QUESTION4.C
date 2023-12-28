#include<stdio.h>
#include<conio.h>

main()
{
	   int a,b;
	   clrscr();
	   printf("Enter the first number : ");
	   scanf("%d",&a);
	   printf("Enter the second number : ");
	   scanf("%d",&b);
	   a = a*b;
	   b = a/b;
	   a = a/b;
	   printf("a : %d\n",a);
	   printf("b : %d\n",b);
	   getch();
}
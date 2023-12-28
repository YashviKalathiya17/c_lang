#include<stdio.h>
#include<conio.h>

main()
{
	   int a;
	   clrscr();
	   printf("Enter any number : ");
	   scanf("%d",&a);
	   printf("Increment : %d\n",++a);
	   printf("Decrement : %d\n",--a);
	   getch();
}
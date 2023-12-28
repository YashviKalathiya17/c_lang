#include<stdio.h>
#include<conio.h>

main()
{
	   int a;
	   clrscr();
	   printf("Enter any number : ");
	   scanf("%d",&a);
	   if (a<0)
	   {
	       printf("The number is Negative");
	   }
	   else if (a>0)
	   {
	       printf("The number is Positive");
	   }
	   else
	   {
	       printf("The number is Natural");
	   }
	   getch();
}
#include<stdio.h>
#include<conio.h>

main()
{
       int a;
       clrscr();
       printf("Enter any number : ");
       scanf("%d",&a);

       (a%2==0)
	      ? printf("Even number")
	      : printf("Odd number");
       getch();
}
#include<stdio.h>
#include<conio.h>

main()
{
	     int a,b,min;
	     clrscr();
	     printf("Enter value of first number : ");
	     scanf("%d",&a);
	     printf("Enter value of second number : ");
	     scanf("%d",&b);
	     if (a>b)
	     {
		  min=b;
		  printf("Minimum value is %d",min);
	     }
	     else
	     {
		  min=a;
		  printf("Minimum value is %d",min);

	     }
	     getch();
}

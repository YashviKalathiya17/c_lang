#include<stdio.h>
#include<conio.h>
main()
{
	char c;
	clrscr();

	printf("\n M -Monday");
	printf("\n T-Tuesday");
	printf("\n W-Wednesday");
	printf("\n Th-Thursday");
	printf("\n F-Friday");
	printf("\n S-Saturday");
	printf("\n Su-Sunday");
	printf("\n enter any number :");
	scanf("%c",&c);

	switch(c)
	{
		 case 'M':
		 printf("\n monday");
		 break;
		 case 'T':
		 printf("\n tuesday");
		 break;
		 case 'W':
		 printf("\n wednesday");
		 break;
		 case 'Th':
		 printf("\n thursday");
		 break;
		 case 'F':
		 printf("\n friday");
		 break;
		 case 'S':
		 printf("\n saturday");
		 break;
		 case 'Su':
		 printf("\n sunday");
		 break;

		 default:
		 printf("invalid character");

	}









	getch();
}

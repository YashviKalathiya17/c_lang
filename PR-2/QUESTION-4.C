#include<stdio.h>
#include<conio.h>

main()
{
	       char c;
	       clrscr();
	       printf("M - Monday\n");
	       printf("T - Tuesday\n");
	       printf("W - Wednesday\n");
	       printf("Th - Thursday\n");
	       printf("F - Friday\n");
	       printf("S - Saturday\n");
	       printf("Su - Sunday\n");
	       printf("Enter any value : ");
	       scanf("%c",&c);

	       switch (c)
	       {
		 case 'M':
		 printf("Monday");
		 break;
		 case 'T':
		 printf("Tuesday");
		 break;
		 case 'W':
		 printf("Wednesday");
		 break;
		 case 'Th':
		 printf("Thursday");
		 break;
		 case 'F':
		 printf("Friday");
		 break;
		 case 'S':
		 printf("Saturday");
		 break;
		 case 'Su':
		 printf("Sunday");
		 break;
		 default:
		 printf("Invalid choice");
	       }
	       getch();
}
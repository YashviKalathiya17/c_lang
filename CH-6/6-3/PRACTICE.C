#include<stdio.h>
#include<conio.h>

main()
{
	  int n;
	  clrscr();
	  printf("1. Sunday\n");
	  printf("2. Monday\n");
	  printf("3. Tuesday\n");
	  printf("4. Wednesday\n");
	  printf("5. Thursday\n");
	  printf("6. Friday\n");
	  printf("7. Saturday\n");
	  printf("Enter number : ");
	  scanf("%d",&n);
	  switch (n)
	  {
	    case 1:
		 printf("Today is Sunday!\n");
		 break;
	    case 2:
		 printf("Today is Monday!\n");
		 break;
	    case 3:
		 printf("Today is Tuesday!\n");
		 break;
	    case 4:
		 printf("Today is Wednesday!\n");
		 break;
	    case 5:
		 printf("Today is Thursday!\n");
		 break;
	    case 6:
		 printf("Today is Friday!\n");
		 break;
	    case 7:
		 printf("Today is Saturday!\n");
		 break;
	    default:
		 printf("Invalid choice!");
	  }
	  getch();
}
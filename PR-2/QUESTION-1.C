#include<stdio.h>
#include<conio.h>

main()
{
	    char c;
	    clrscr();
	    printf("Enter any character : ");
	    scanf("%c",&c);
	    if (c>='A' && c<='Z')
	    {
	      printf("This is alphabet");
	    }
	    else if (c>='a' && c<='z')
	    {
	      printf("This is alphabet");
	    }
	    else if (c>='0' && c<='9')
	    {
	      printf("This is digit");
	    }
	    else
	    {
	      printf("This is special character");
	    }
	    getch();
}
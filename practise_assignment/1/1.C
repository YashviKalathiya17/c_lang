#include<stdio.h>
#include<conio.h>
main()
{
	char c;
	clrscr();

	printf("enter any character : ");
	scanf("%c",&c);

	if(c>='A' && c<='Z')
	{
		printf("this is an alphabet :");
	}

	else if(c>='a' && c<='z')
	{
		printf("this is an alphabet : ");

	}
	else if (c>'0' && c<'9')
	{
		printf("this is digit");

	}
	else
	{
		printf("special character :");
	}

	getch();
}
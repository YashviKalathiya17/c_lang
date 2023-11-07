#include<stdio.h>
#include<conio.h>
main()
{
	char a;
	char start_char ='a';
	char end_char='z';
	int skip =3;
	clrscr();

	do
	{
	printf("%c",start_char);
	start_char +=skip;
	}
	while(start_char<=end_char);
	printf("\n");

	return 0;


	getch();
}

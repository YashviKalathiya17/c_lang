#include<stdio.h>
#include<conio.h>

main()
{
	    char c;
	    clrscr();
	    printf("Enter any character : ");
	    scanf("%c",&c);
	    if (c=='A'||c=='E'||c=='I'||c=='O'||c=='U')
	    {
	       printf("This Character is vowel");
	    }
	    else if (c=='a'||c=='e'||c=='i'||c=='o'||c=='u')
	    {
	       printf("This Character is vowel");
	    }
	    else
	    {
	       printf("This Character is consonent");
	    }
	    getch();
}
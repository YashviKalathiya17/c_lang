#include<stdio.h>
#include<conio.h>

main()
{
	    char c='a';
	    clrscr();
	    do
	    {
	      printf("%c\t",c);
	      c+=4;
	    }while(c<='z');
	    getch();
}
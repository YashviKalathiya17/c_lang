#include<stdio.h>
#include<conio.h>

main()
{
	  int n,i=0;
	  clrscr();
	  printf("Enter any number : ");
	  scanf("%d",&n);
	  do
	  {
	    n=n/10;
	    i++;
	  }while(n!=0);
	  printf("Total number of digits : %d",i);
	  getch();
}
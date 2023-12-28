#include<stdio.h>
#include<conio.h>

main()
{
	int a,b,sum=0,mul=1;
	clrscr();
	printf("Enter any number : ");
	scanf("%d",&a);
	while(a!=0)
	{
	  b=a%10;
	  sum=sum+b;
	  mul=mul*b;
	  a=a/10;
	}
	if(sum==mul)
	{
	  printf("This is a magic number");
	}
	else
	{
	  printf("This is not a magic number");
	}
	getch();
}
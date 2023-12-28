#include<stdio.h>
#include<conio.h>

main()
{
	int a,b,c;
	clrscr();
	printf("First angle : ");
	scanf("%d",&a);
	printf("Second angle : ");
	scanf("%d",&b);
	c=180-(a+b);
	printf("Third angle : %d",c);
	getch();
}
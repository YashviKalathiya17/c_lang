#include<stdio.h>
#include<conio.h>
main()
{
	int n,a=1,mul=1;
	clrscr();
	label:
	printf("enter any number :");
	scanf("%d",&n);

	for(a=1;a<=n;a++)
	{
		mul*=a;
	}
	   printf("factorial num : %d",mul);










	getch();
}
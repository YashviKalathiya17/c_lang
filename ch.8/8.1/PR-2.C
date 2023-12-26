#include<stdio.h>
#include<conio.h>
main()
{
	int n,rem,rev=0;
	clrscr();

	printf("enter any number :");
	scanf("%d",&n);

	while(n!=0)
	{
	rem=n%10;
	rev=rev*10+rem;
	n=n/10;
	n++;
	}

	printf("%d",rev);




	getch();
}
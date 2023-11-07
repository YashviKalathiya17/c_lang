#include<stdio.h>
#include<conio.h>
main()
{
	int a=0,b=1,c,n,i;
	clrscr();

	printf("enter any number :");
	scanf("%d",&n);

	printf("%d  %d ",a,b);
	for(i=1;i<=n;i++)
	{
	c = a+b;
	printf("%d ",c);
	a=b;
	b=c;
	}





	getch();
}


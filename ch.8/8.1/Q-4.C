#include<stdio.h>
#include<conio.h>
main()
{
	int a=1,n;
	clrscr();

	printf("enter any number :");
	scanf("%d",&n);
	while(n>=a)
	{
	if(n%2==1)
	{
	printf("%d\n",n);
	}
	n--;
	}



	getch();
}
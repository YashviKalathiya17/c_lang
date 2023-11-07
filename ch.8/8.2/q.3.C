#include<stdio.h>
#include<conio.h>
main()
{
	int n,a=1;
	clrscr();

	printf("enter anuy number :");
	scanf("%d",&n);

	do
	{
	if(a%2==0)
	{
		printf("%d\n",a);
	}
	a++;
	}

		while(a<=n);








	getch();
}
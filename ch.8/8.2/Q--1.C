#include<stdio.h>
#include<conio.h>
main()
{
	int n,a,sum=0;
	clrscr();

	printf("enter any number : ");
	scanf("%d",&n);
	for(a=1;a<=n;a++)
	{
	sum+=a;
	}
		printf("sum :%d",sum);



	getch();
}


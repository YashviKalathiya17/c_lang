#include<stdio.h>
#include<conio.h>
main()
{
	int a,b,sum=0,null=1;
	clrscr();

	printf("enter any number :");
	scanf("%d",&a);

	while(a!=0)
	{
	b=a%10;
	sum=sum+b;
	null=null*b;
	a=a/10;
	}
	if(sum==null)
	{
	printf("magic number!!!");
	}
	else
	{
	printf("not magic number!!!");
	}

getch();

}
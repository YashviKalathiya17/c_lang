#include<stdio.h>
#include<conio.h>
main()
{
	int year1,year2;
	clrscr();

	printf("enter number year1 :");
	scanf("%d",&year1);

	printf("enter number year2 :");
	scanf("%d",year2);

	while(year1<=year2)
	{
	if(year1%4==0)
	{
	printf("%d\n",year1);
	}
	year1++;
	}




	getch();
}

#include<stdio.h>

void square(int *a,int *b)
{
	printf("%d + %d = %d\n",*a,*b, *a+*b);
}

main()
{
	int x,y;

		printf("enter x:");
		scanf("%d",&x);
		printf("enter y:");
		scanf("%d",&y);

		square(&x,&y);



 
}

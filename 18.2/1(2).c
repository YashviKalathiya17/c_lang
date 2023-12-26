#include<stdio.h> 



 void swap(int *a,int *b)
{
	 *a= *a + *b;
	 *b= *a - *b;
	 *a= *a-  *b;
	 
	 printf("a\t:%d\nb\t:%d\n",*a,*b);
	
}

main()
{
	int x,y;
	
	
	printf("enter x:");
	scanf("%d",&x);
	printf("enter y:");
	scanf("%d",&y);
	
	
	swap(&x,&y);
	
	printf("x\t:%d\ny\t:%d\n",x,y);
}

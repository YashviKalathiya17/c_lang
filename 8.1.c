#include<stdio.h>
main()
{
	int r,c;
	printf("enter row :");
	scanf("%d",&r);
	
	printf("enter column :");
	scanf("%d",&c);
	
	int a[r][c],b[r][c],sum[r][c];
	
		printf("\n\n\t---matrix-A---\n");

	int i,j;
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{	
		
		printf("enter an element:");
		scanf("%d",&a[i][j]);
		} 
		printf("\n");
}	
	printf("\n\n\t---matrix-B---\n");

for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{	
		
		printf("enter an element:");
		scanf("%d",&b[i][j]);
		} 
		printf("\n");
	}

	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			sum[i][j]=a[i][j]+b[i][j];
		}
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		
		printf("%d",sum[i][j]);
		printf("\n");
	}

}


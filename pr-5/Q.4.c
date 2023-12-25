#include<stdio.h>
main()
{
	int r,c;
	printf("enter the size of the array :");
	scanf("%d",&r);
	printf(" enter the size of the array :");
	scanf("%d",&c);
	int array[r][c],i,j;
		for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("array[%d][%d]:",i,j);
			scanf("%d",&array[i][j]);}
		}
		//display matrix of array
		for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d",array[i][j]);
			scanf("%d",&array[i][j]);
		}
		printf("\n");
	}
	//sum of rows
	int row,sum1=0;
	printf("enter row number :");
	scanf("%d",&row);
	for(i=row;i<=row;i++)
	{
			for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d,",array[row][j]);
		}
	}
	printf("\n the sum of the row :");
	for(i=row;i<=row;i++)
	{
			for(j=0;j<c;j++)
			{
				sum1=sum1+array[row][j];
				}
				}
				printf("%d",sum1);
				//sum of columns	
				int column,sum2=0;
				printf("\n enter column number :");
				scanf("%d",&column);
				
					for(i=0;i<r;i++)
					{
						for(j=column;j<=column;j++)
						{
							printf("%d,",array[i][column]);
							}
							}
							printf("\n the sum of column :");
							for(i=0;i<r;i++)
					{
						for(j=column;j<=column;j++)
						{
							sum2=sum2+array[i][column];
						}
					}
					printf("%d",sum2);
				}
}

	
	

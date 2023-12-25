#include<stdio.h>
main()
{
	int r,c;
	printf("enter the size of the array :");
	scanf("%d",&r);
	printf(" enter the size of the array :");
	scanf("%d",&c);
	int array[r][c];
	
	int i,j;
	printf("enter the element :\n");
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&array[i][j]);
		}
	}
	printf("enter element in matrix :\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d",array[i][j]);
		}
		printf("\n");
	}
	int array2[c][r];
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			array2[i][j]=array[j][i];
		}
}
printf("transpose matrix :");
for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d",array2[i][j]);
		}
		printf("\n");
	}
}


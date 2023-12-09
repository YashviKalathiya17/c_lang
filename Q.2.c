#include<stdio.h>
main()
{
	int r,c;
	printf("enter the size of the array :");
	scanf("%d",&r);
	printf(" enter the size of the array :");
	scanf("%d",&c);
	int array[r][c],max=0;
	int i,j;
	
	printf("enter the elements :\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d,&array[i][j]");
		}
			for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			if(array[i][j]>max)
			{
				max=array[i][j];
				
			}
		}
	}
	printf("large number is:%d",max);
}
}

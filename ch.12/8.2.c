#include<stdio.h>
main()
{
	int i,r,j,c;
	printf("enter size of row :");
	scanf("%d",&r);
	printf("enter size of column :");
	scanf("%d",&c);
	 int array[r][c];
printf("enter the elements\n");
for(i=0;i<r;i++)
{
	for(j=0;j<c;j++)
	{
		printf("array[%d][%d]: ",i,j);
		scanf("%d",&array[i][j]);
	}
}
		float avg,sum=0;
		for(j=0;j<c;j++)
		{
		sum=sum+array[i][j];
		}
		}
		avg=sum/(r*c);
		printf("average of array's elements=%2f",avg);
		}
			

#include<stdio.h>
void cube(int *arr,int size)
{
	int *ptr,i,j;
	
	for(i=0;i<size;i++)
	{
		for(i=0;i<size;i++)
		{
			int*ptr=(arr+i*size +j);
			*ptr=(*ptr)*(*ptr)*(*ptr);
		}
	}
}
int main()
{
	int size,i,j;
	printf("enter array's size:");
	scanf("%d",&size);
	
	int array[size][size];
	printf("enter any elements:");
		for(i=0;i<size;i++)
		{
			for(i=0;i<size;i++)
			{
			printf("a[%d][%d]=",i,j);
			scanf("%d",&array[i][j]);
}
}
		cube(&array[0][0],size);
		
		printf("cubes of all elements :");
		for(i=0;i<size;i++)
	{
		for(i=0;i<size;i++)
		{
			printf("%d",array[i][j]);
		}
		printf("\n");
}
	return 0;
}


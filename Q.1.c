#include<stdio.h>
main()
{
	int i,n;
	printf("enter the size of the array :");
	scanf("%d",&n);
	int array[n];
	for(i=0;i<n;i++)
	{
		printf("array[%d]: ",i);
		scanf("%d",& array[i]);
				}	

	printf("negative elements from an array :");
	for(i=0;i<n;i++)
	{
	if(array[i]<0)
	{
		printf("%d,",array[i]);
	}
}
}

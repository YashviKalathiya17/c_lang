#include<stdio.h>
main()
{
	int n;
	printf("enter value of an array :");
	scanf("%d",n);
	int matrix value[2][3]={
	{1,2,3},
	{4,5,6}
	};
	for(int i=0;i<2;++i)
	{
		for(j=0;j<3;++j)
		{
			std::cout<<matrix[i][j]<<"";
			std::cout<<std::end;
		}
		return 0;
	}
}

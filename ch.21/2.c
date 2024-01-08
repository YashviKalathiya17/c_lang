#include<stdio.h>
main()
{
	int a=1;
	FILE*f1;
	f1=fopen("C:\\Users\\r2\\Desktop\\yashvi.txt","a");

		if(f1!=NULL)
		{
			while(a<=50)
			{
				if(a%3==0&&a%5==0)
				{
					fprintf("%d",a);
				}
				a++;
			}
	}
				else
				{
					printf("failed to open");
				}
				fclose(f1);
			}
		


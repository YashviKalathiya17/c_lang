#include<stdio.h>
main()
{
	
	int sum(int a,int b)
	{
		return a+b;
	}
	
	int sub(int a,int b)
	{
		return a-b;
	}
	
	int mul(int a,int b)
	{
		return a*b;
	}
	
	int div(int a,int b)
	{
		return a/b;
	}
	
	int mod(int a,int b)
	{
		return a%b;
	}
	
	
	
	
	void main()
	{
		int a,b,n;
		
		
		printf("\n press 1 for+");
		printf("\n press 2 for-");
		printf("\n press 3 for*");
		printf("\n press 4 for/");
		printf("\n press 5 for%");
		
		
		printf("\n enter your choice");
		sacnf("%d",&n);
		
		do
		{
			switch(n)
			
			{
				case 1:
			
					printf("enter a:");
					scanf("%d",&a);
					printf("enter b:");
					scanf("%d",&b);
					printf("sum is :%d\n",
					sum(a,b));
					break;
					
				case 2:
					
					printf("enter a:");
					scanf("%d",&a);
					printf("enter b:");
					scanf("%d",&b);
					printf("sub is :%d\n",
					sub(a,b));
					break;		
					
				case 3:
					
					printf("enter a:");
					scanf("%d",&a);
					printf("enter b:");
					scanf("%d",&b);
					printf("mul is :%d\n",
					mul(a,b));
					break;	
								
				case 4:
					
					printf("enter a:");
					scanf("%d",&a);
					printf("enter b:");
					scanf("%d",&b);
					printf("div is %d\n",
					div(a,b));
					break;
					
				case 5:
				
					printf("enter a:");
					scanf("%d",&a);
					printf("enter b:");
					scanf("%d",&b);
					printf("mod is %d\n",
					mod(a,b));
					break;	
						case 0:
					
					printf("exit:");
					break;		
					
					default:
					printf("invalid choice:");		
			
			}
		} while(n!=0);
	}
}

					
					
					
				
				





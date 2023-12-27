#include<stdio.h>
#include<string.h>
main()
{
	char s[100];
	
	printf("enter any string:");
	gets(s);
	
	char*ptr=s;
	
	int length=0;
	while(*ptr!='\0')
	{
		length++;
		*ptr++;
		
	}
		printf("The length of the string is:
		        %d\n",length);
		        
		        return 0;
					}
}

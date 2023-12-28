#include <stdio.h>
int main() 
{
    for (int i = 1; i <= 5; i++) 
	{
        for (int j = 1; j < i; j++) 
		{
            printf("   ");
        }
        for (int k = i; k <= 5; k++) 
		{
            if ((i + k) % 2 == 0)
			{
                printf(" 1 ");
            } else {
                printf(" 0 ");
            }
        }
        printf("\n");
    }

    return 0;
}
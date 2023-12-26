#include <stdio.h>


void square_elements(int *arr, int size)
 {
    for(int i=0; i<size;i++)
	 {
        (arr + i) = ((arr + i)) * (*(arr + i));
    }
}

int main()
 {
    int size;

    
    printf("Enter the array's size: ");
    scanf("%d", &size);

    int array[size];

    
    printf("Enter array's elements:\n");
    for (int i = 0; i < size; i++) 
        printf("a[%d] = ", i);
        scanf("%d", &array[i]);



    square_elements(array, size);


    printf("\nSquare of each element:\n");
    for (int i=0;i<size;i++)
    printf("%d",array[i]);
    
    if(i<size-1)
    {
    	printf(",");
	}

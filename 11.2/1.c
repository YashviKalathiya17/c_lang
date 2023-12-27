#include <stdio.h>


void reverse_array(int *arr, int size) {
    int *start = arr;           
    int *end = arr + size - 1;

    while (start < end) {
        
        int temp = *start;
        *start = *end;
        *end = temp;

        
        start++;
        end--;
    }
}

int main() {
    int size;


    printf("Enter the array's size: ");
    scanf("%d", &size);

    int array[size];


    printf("Enter array elements:\n");
    for (int i = 0; i < size; i++) {
        printf("a[%d] = ", i);
        scanf("%d", &array[i]);
    }

    
    reverse_array(array, size);
    
    printf("\nReversed array elements:\n");
    for (int i = 0; i < size; i++) {
        printf("%d", array[i]);

        
        if (i < size - 1) {
            printf(", ");
        }
    }

    return 0;
}

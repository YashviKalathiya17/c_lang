#include <stdio.h>
#include <string.h>


int find_length(char input_string[]) {
    return strlen(input_string);
}

int main()
 {
    char user_input[100]; 

    
    printf("Enter any string: ");
    gets(user_input);


    int length = find_length(user_input);
    printf("Length is: %d\n", length);


}

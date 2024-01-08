#include <stdio.h>

int main() {
    FILE *sourceFile, *destinationFile;
    char ch;

    sourceFile = fopen("source.txt", "r");
    if (sourceFile == NULL) {
        perror("Error opening source file");
        return 1;
    }

   
    destinationFile = fopen("destination.txt", "w");
    if (destinationFile == NULL) {
        perror("Error opening destination file");
        fclose(sourceFile);
        return 2;
    }

   
    while ((ch = fgetc(sourceFile)) != EOF) {
        fputc(ch, destinationFile);
    }

    
    fclose(sourceFile);
    fclose(destinationFile);

    printf("File copied successfully.\n");

    return 0;
}

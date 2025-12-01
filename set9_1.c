#include <stdio.h>

int main() {
    FILE *file;
 
    file = fopen("example.txt", "w");

    if (file == NULL) {
        printf("Error creating the file!\n");
        return 1;
    }

 
    fprintf(file, "Hello! This is a new file created using C.\n");
    fprintf(file, "This is the second line of text.");

   
    fclose(file);

    printf("File created and text written successfully.\n");

    return 0;
}

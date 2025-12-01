#include <stdio.h>

int main() {
    FILE *file;
    char line[200];   

   
    file = fopen("example.txt", "r");

    if (file == NULL) {
        printf("Error! Could not open the file.\n");
        return 1;
    }

    
    while (fgets(line, sizeof(line), file) != NULL) {
        printf("%s", line);
    }

   
    fclose(file);

    return 0;
}

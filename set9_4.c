#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *file;
    char ch;
    int words = 0, inWord = 0;

    
    file = fopen("example.txt", "r");

    if (file == NULL) {
        printf("Error! Could not open the file.\n");
        return 1;
    }

    
    while ((ch = fgetc(file)) != EOF) {

        
        if (!isspace(ch) && inWord == 0) {
            inWord = 1;   
            words++;      
        }
        else if (isspace(ch)) {
            inWord = 0;    
        }
    }

    fclose(file);

    printf("Number of words in the file: %d\n", words);

    return 0;
}
